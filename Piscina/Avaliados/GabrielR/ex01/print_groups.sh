#id lê sobre o usuário registrado na variável de ambiente FT_USER | G mostra todos os grupos que o usuário esta e o 'n' mostra o nome e nao numero | sed é um editor de fluxos e no caso o 's' é substituição do 'espaço' pela ',' e o 'g' é global, ou seja, por toda a linha e não somente na primeira ocorrência 

#!/bin/sh
echo -n "$(id $FT_USER -Gn | sed 's/ /,/g')"

