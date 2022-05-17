<h1 align="center"> Projeto de Computação Paralela: Algoritmo da Série de Taylor</h1>

<h3>Feito por:</h3>

<h4>Bruno Frischer - 32046235</h4>
<h4>Gustavo Eizono Cruz - 32012403</h4>

Este é o nosso algoritmo para o projeto de Computação paralela, estamos usando Python e pretendemos otimizá-lo cada vez mais paralelamente
## Versão 1.0
- `Grafo de dependências`: Na primeira versão, fizemos algo simples para apenas executar de fato, o algoritmo em sua forma mais "bruta", nosso grafo, por se tratar ainda de um programa sequencial, ficará da seguinte maneira: </br>
![alt text](https://media.discordapp.net/attachments/727245932306890774/968971695329255485/unknown.png)
## Versão 2.0
- `Primeiro Speed-up`: Na segunda versão implementamos a biblioteca "threading" que proporciona o uso de Threads em Python, o speedup provavelmente será mínimo, mas já é um início para uma paralelização eficiente. Como dá pra notar na imagem, o primeiro speed-up é usando a primeira versão do programa sequencial, já o segundo tempo é usando thrads, à princípio, não existe muita diferença de tempo, mas já rodou mais rápido que a primeira versão. **Speedup = 0.531631912492404918** </br>
![alt text](https://media.discordapp.net/attachments/691644255915212810/973388944479772732/Captura_de_tela_de_2022-05-09_21-59-13.png)

## Versão 3.0
- `Segundo Speed-up`: Na terceira implementação, começamos a usar a biblioteca para deixar a função de taylor assíncrona, assim podemos planejamos utilizar uma opção mais viável em Python, que se mostrou um linguagem de programação que a paralelização para este problema não se demonstra muito efetiva, considerando o speedup anterior e **o Speedup para esta versão: 0.00373543397913043626597**. </br>
![image](https://user-images.githubusercontent.com/64294820/168917420-81d3fb89-dcc4-4cfe-92f0-29753e425d6c.png)

