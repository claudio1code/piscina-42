#find encontra 'f' arquivos nas pastas e subpastas | name seleciona os com final '.sh' e o 'exec basename' printa somente o nome do arquivo excluindo o endereço | cut elimina o que há depois do 'd' delimitador '.' que é o argumento e mostra 'f' fileira '1'

#!/bin/sh
find -type f -name "*.sh" -exec basename {} \; | cut -d. -f1
