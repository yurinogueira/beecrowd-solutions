#include <stdio.h>

int main() {
    int total, restante, m_100, m_50, m_20, m_10, m_5, m_1;

    scanf("%d",&total);

    restante = total;
    m_100 = restante / 100;
    restante = restante - (m_100 * 100);
    m_50 = restante / 50;
    restante = restante - (m_50 * 50);
    m_20 = restante / 20;
    restante = restante - (m_20 * 20);
    m_10 = restante / 10;
    restante = restante -(m_10 * 10);
    m_5 = restante / 5;
    restante = restante - (m_5 * 5);
    m_1 = restante / 2;
    restante = restante - (m_1 * 2);

    printf("%d\n",total);
    printf("%d nota(s) de R$ 100,00\n", m_100);
    printf("%d nota(s) de R$ 50,00\n", m_50);
    printf("%d nota(s) de R$ 20,00\n", m_20);
    printf("%d nota(s) de R$ 10,00\n", m_10);
    printf("%d nota(s) de R$ 5,00\n", m_5);
    printf("%d nota(s) de R$ 2,00\n", m_1);
    printf("%d nota(s) de R$ 1,00\n",restante);

    return 0;
}