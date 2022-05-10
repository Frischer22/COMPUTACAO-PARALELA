<h1 align="center"> Projeto de Computação Paralela: Algoritmo da Série de Taylor</h1>

<h3>Feito por:</h3>

<h4>Bruno Frischer - 32046235</h4>
<h4>Gustavo Eizono Cruz - 32012403</h4>

Este é o nosso algoritmo para o projeto de Computação paralela, estamos usando Python e pretendemos otimizá-lo cada vez mais paralelamente
## Versão 1.0
- `Grafo de dependências`: Na primeira versão, fizemos algo simples para apenas executar de fato, o algoritmo em sua forma mais "bruta", nosso grafo, por se tratar ainda de um programa sequencial, ficará da seguinte maneira: </br>
![alt text](https://media.discordapp.net/attachments/727245932306890774/968971695329255485/unknown.png)
## Versão 2.0
- `Primeiro Speed-up`: Na segunda versão implementamos a biblioteca "threading" que proporciona o uso de Threads em Python, o speedup provavelmente será mínimo, mas já é um início para uma paralelização eficiente. Como dá pra notar na imagem, o primeiro speed-up é usando a primeira versão do programa sequencial, já o segundo tempo é usando thrads, à princípio, não existe muita diferença de tempo, mas já rodou mais rápido que a primeira versão </br>
![alt text](https://media.discordapp.net/attachments/691644255915212810/973273853532995654/Captura_de_tela_de_2022-05-09_14-19-41.png)
