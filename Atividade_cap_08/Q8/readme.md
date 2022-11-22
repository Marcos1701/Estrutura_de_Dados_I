## ---> Como ocorre o Quick Sort <---

*R- Primeiramente o algoritmo realiza uma busca pelo pivô, onde o inicio da partição enviada (inicialmente é enviado o vetor inteiro),                                   
R- que é armazenado em uma variavel 'x', é comparado com o fim (e enquanto ele for menor, o valor de 'f'(inicialmente é o indice do                                    
R- ultimo elemento da partição) é diminuido e ocorre uma nova comparação com o valor em v[ f ] em seguida ocorre uma comparação com                                   
R- o valor que está no inicio da partição, seu indice é marcado pela variável 'i', e enquanto o valor de x for menor que o de x,                                      
R- o valor de 'i' é decrementado, em seguida, caso o valor de 'f' seja maior que o de 'i', ocorre uma troca entre v[i] e v[p],                                       
R- na primeira metade do algoritmo, o valor de resultante de 'f' é reutilizado como parâmetro para uma nova chamada da                                               
R- função (caso ela seja recursiva) onde o valor de 'i' continua sendo o indice do primeiro elemento do vetor original, na segunda metade                                 
R- o valor de 'f' enviado é o indice do fim do vetor original e o valor de 'i' é equivalente ao valor de 'f' + 1 resultante da                                       
R- ultima chamada da função.*                                                                                                                                            

**1) a execução está no arquivo 'Q8_8.cpp'**                                                                                                         
```
   int v[] = {72, 69, 51, 46, 33, 28, 15};
```
*R- nesse caso, nem o valor de 'i' e nem de 'f' é alterado, dessa maneira ocorrendo uma troca e por consequência                                                        
R- a proxima partição será de tamanho 'n - 1', isso continua a acontecer com as outras partições até o fim                                                              
R- da execução do algoritmo, logo esse é um exemplo de pior caso para o Quicksort.*                                                                             

**2) a execução está no arquivo 'Q8_8.cpp'**                                                                 
```
   int v2[] = {48, 28, 51, 33, 72, 15, 69};
``` 
*R- nesse caso, o parcionamento ocorre com sucesso e com isso há uma ordenação a partir de subdivisões do vetor e consequêntemente                                
R- tornando o algoritmo mais fluido e rápido, logo esse é considerado um melhor caso.*                                                                        

**4) isso ocorre quando o pivô em todos os casos sempre é, ou o menor ou o maior elemento da partição e por consequencia gerando partições
de n - 1 tamanho até o fim do algoritmo, por isso é classificada como O(n^2).**

**5) esse caso ocorre quando há o maximo de subdivisões em partições e dessa maneira a ordenação ocorre a partir de subprocessos e dessa maneira
 facilitanto e agilizando o processo..**
