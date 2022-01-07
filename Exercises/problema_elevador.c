/*Vai Subir?
A companhia de elevadores Suba-Suba optou por um novo o sistema de controlo de grupos de elevadores de forma a minimizar o consumo de energia. 
Para um grupo de dois elevadores, identificados como 1 e 2, o sistema enviará o elevador que se encontre mais próximo do andar de onde foi feita a chamada. 
Se os elevadores se encontram à mesma distância então será enviado o que encontra numa posição mais elevada. 
Se ambos os elevadores se encontram no mesmo andar, accionará sempre o elevador 1.
Nem sempre os elevadores estarão parados e disponíveis a seremchamados. 
Poderão estar em serviço, em manutenção ou avariados. Nestecaso, enviará o único elevador disponível, ou um erro se ambos estiveremindisponíveis.
Tarefa
Pretende-se programar o sistema que controla a chamada de um grupo dois elevadores segundo a especificação dada. 
O programa receberá como input o número do andar em queum elevador foi chamado, bem como a situação actual de cada um dos elevadores; 
indicará onúmero do elevador melhor posicionado para efectuar o percurso.
Input
Uma linha com trẽs inteiros separados por um espaço: o número do andar de onde foi feita achamada, a situação do elevador 1, seguida da situação do elevador 2. 
O número do andaronde foi chamado o elevador é um inteiro entre -100 e 100. 
A posição dos elevadores 1 e 2poderá ser o número de um andar, também um valor entre -100 e 100, ou o número 999 paraindicar que se encontra indisponível.
Output
Uma linha com o valor 0, 1 ou 2. O valor 0 é reservado para o caso de ambos os elevadoresestarem indisponíveis.
 Caso contrário será indicado o número do elevador melhor posicionadopara responder à chamada (1 ou 2).
Exemplo 1
Input
2 4 2
Output
2
Exemplo 2
Input
1 999 -1
Output
2
Exemplo 3
Input
3 1 5
Output
2
Exemplo 4
Input
4 6 6
Output
1
Exemplo 5
Input
7 999 999
Output
0*/ 