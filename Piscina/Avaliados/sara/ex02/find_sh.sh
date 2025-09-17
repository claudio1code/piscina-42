
find . -type f -name '*.sh' -printf "%f\n" | sed 's/\.sh$//'
# localizar . o ponto de todos
#type - f tipo arquivos
# *.sh'  define oSH
# -print f para mostrar
# "%f\n" só exibe os nomes e não detalhes 
#sed 's/\.sh$//' - substitui o ssh

