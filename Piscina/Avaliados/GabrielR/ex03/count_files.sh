#find procura o tipo dos arquivos sendo 'f' file-arquivo e 'd' diretório | wc para contar o numero de 'l' linhas 

#!/bin/sh
find -type f,d | wc -l
