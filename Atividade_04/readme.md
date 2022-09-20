#      ---------_______Atividade_______---------




**3.1 Use as funções das Figuras 3.5, 3.6 e 3.8 para criar um programa que exiba a forma posfixa                                  
e o valor de uma expressao infixa com inteiros de um digito, digitada pelo usudrio. Dica:                                                       
uma pilha de inteiros pode guardar caracteres.**

**3.2 Use as funções das Figuras 3.5, 3.9 e 3.10 para criar um programa que exiba a forma posfixa e o valor de uma expressao infixa com 
reais de varios digitos, digitada pelo usuario. Dica: uma pilha de reais pode guardar inteiro.**

 

**3.3 Supondo que os operandos em uma expressao infixa são representados por letras, crie uma função para converter essa expressão 
para a forma posfixa. Por exemplo, a conversão de "A*B+C/D" deve resultar em "AB*CD/+". Dica: a função isalpha (c), declarada em ctype.h,                     
verifica se um caractere c é letra                                  .**




**3.4 Na forma prefixa (ou notagdo polonesa), os operadores sao colocados antes de seus operandos. Por exemplo, convertendo a                             
expressão infixa "A * B + C / D" em prefixa, obtemos "+ * A B / C D". Para efetuar essa conversio, basta parentesiar completamente
a expressao infixa e, depois, reescrevé-la, descartando os Parénteses e movendo os operadores para a posicao ocupada 
por seus parénteses esquerdos, como a seguir :**

  ```
  A * B + C / D => ( ( A * B ) + ( C / D ) => + * A B / C D
  ```

**Supondo que os operandos em uma expressão infixa completamente parentesiada são letras, crie uma função para converté-la em prefixa.
Dica: a função "strlen(s)", declarada em string.h, devolve o tamanho de uma cadeia s e a função _strrev(s), declarada em string.h, 
inverte uma cadeia s.**


**3.5 Em C, cadeia de caracteres não é um tipo de dados primitivo, o que dificulta a sua
manipulacão. Para facilitar, podemos usar a fungio a seguir.**

```
char *str(char *formato, ...) {
   char *s;
   varprintf(&s, formato, (char *)&formato + sizeof (formato) );
   return s;
 }
 ```

**Essa função é similar a printf (). Mas, em vez de exibir a saida em video, ela a coloca num vetor de caracteres dinâmico e                      
devolve seu endereco. Por exemplo, chamando str("(%s%c%s)","um",'+',"dez") obtemos "(um+dez)". Considerando expressões cujos                    
operandos são letras, use essa função para:**

*(a) Converter uma expressao posfixa em infixa completamente parentesiada                                                                         .*
*(b) Converter uma expressao prefixa em infixa completamente parentesiada                                                                          .*

   

**3.6 Considerando expressões lógicas infixas completamente parentesiadas, representadas por
cadeias compostas exclusivamente por:**

- Operandos, representados pelas letras V (verdade) e F (falso).
- Operadores, representados pelos caracteres ~ (não), & (e) e | (ou).
- Parenteses, que muda as prioridades dos operadores (~ => 3, & => 2 e | => 1).

*(a) Crie uma fungio que devolve a posfixa de uma expresso lógica infixa                                                        .*

*(b) Crie uma fungao que devolve o valor de uma expressio lógica posfixa                                                                        .*

*(c) Crie um programa que lê uma expressão lógica infixa e exibe sua forma posfixa e seu valor                                                        .*
