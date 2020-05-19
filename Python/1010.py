null_1, peca_1, valor_1 = map(float, input().split())
null_2, peca_2, valor_2 = map(float, input().split())
print("VALOR A PAGAR: R$ %.2f" % ((peca_1 * valor_1) + (peca_2 * valor_2)))
