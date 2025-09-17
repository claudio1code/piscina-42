#ls -l lista os componentes da pasta de forma 'l' longa | awk é uma ferramenta para procesar texto e analisar dados, no caso pega o 'NR' numero de registros faz o '%' módulo por 2 indicando que é impar, imprimindo as linhas impares

#!/bin/sh
ls -l | awk 'NR %2 == 1'
