# C-language

📘 Exercício (a)
c
Copiar
Editar
void main() {
  int a, b, *c;
  a = 3;
  b = 4;
  c = &a;
  b++;
  *c = a + 2;
  printf("%d %d", a, b);
}
🧠 Passo a passo:
a = 3
b = 4
c = &a ✅ ponteiro aponta para a
b++ → b = 5 ✅ incrementa
*c = a + 2 → a = 5 ✅ atualiza valor apontado
🖨️ Saída:
Copiar
Editar
5 5
📘 Exercício (b)
c
Copiar
Editar
void main() {
  int a, b, *c;
  a = 4;
  b = 3;
  c = &a;
  *c = *c + 1;
  c = &b;
  b = b + 4;
  printf("%d %d %d", a, b, *c);
}
🧠 Passo a passo:
a = 4
b = 3
c = &a
*c = *c + 1 → a = 5 ✅ incrementa a via ponteiro
c = &b ✅ agora aponta pra b
b = b + 4 → b = 7
*c = 7 ✅ valor de b
🖨️ Saída:
Copiar
Editar
5 7 7
📘 Exercício (c)
c
Copiar
Editar
void main() {
  int a, b, *c, *d, *f;
  a = 4;
  b = 3;
  c = &a;
  d = &b;
  *c /= 2;
  f = c;
  c = d;
  d = f;
  printf("%d %d", *c, *d);
}
🧠 Passo a passo:
a = 4, b = 3
c = &a, d = &b
*c /= 2 → a = 2 ✅ metade de 4
f = c ✅ f guarda ponteiro pra a
c = d, d = f ✅ trocam ponteiros
*c = b = 3, *d = a = 2
🖨️ Saída:
Copiar
Editar
3 2
📘 Exercício (d)
c
Copiar
Editar
int calcula(int);

void main() {
  int a, b, c;
  char d;
  a = 1;
  b = 2;
  c = 3;
  d = 'A';
  a += b * c;
  d = (a > 7) ? d - 1 : d + 1;
  b = calcula(b);
  c = calcula(calcula(a));
  a = c++;
  printf("%d - %d - %d - %c\n", a, b, c, d);
}

int calcula(int x) {
  int i;
  if ((x = x * 2) > 5) return (x + 3);
  for (i = 0; i < 10; i++) {
    if (i < 5) continue;
    if (x > 8) break;
    x += 2;
  }
  return (x);
}
🧠 Passo a passo:
a = 1, b = 2, c = 3, d = 'A'
a += b * c → a = 7 ✅ 1 + 2 * 3
a > 7 ❌ → d = 'A' + 1 = 'B'
b = calcula(2)
x = 4, entra no for
i = 5 → x = 6, i = 6 → x = 8, i = 7 → x = 10, break
retorna 10
c = calcula(calcula(7))
calcula(7) → x = 14 > 5 → retorna 17
calcula(17) → x = 34 > 5 → retorna 37
c = 37
a = c++ → a = 37, c = 38
🖨️ Saída:
css
Copiar
Editar
37 - 10 - 38 - B
