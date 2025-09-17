#O 'find .' inicia a busca no diretório atual ('.'), o find vai procurar em todos os subdiretórios
#O '-type f' limita a busca somente a arquivos regulares e nao por diretorios, links simbolicos ou outros tipos de arquivo
#O -name ' busca os nomes 
#"*.sh"' filtra os arquivos só para os com final('*') '.sh' 
#O -exec basename {} '.sh' '\';  executa cada arquivo encotrado e o basename remove o caminho do arquivo(.sh) o {} é substituido pelo nome do arquivo
#'\:' indica o final do comando
find . -type f -name "*.sh" -exec basename {} .sh \;

