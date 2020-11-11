io.read("*l");
S = io.read("*n");
V = io.read("*n");
print(string.format("TOTAL = R$ %.2f", (S + ((V / 100) * 15))));