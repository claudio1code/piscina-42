ifconfig | grep ether | awk '{print $2}'
#if confir - interface de configuração

#grep imprimir linhas que correspondem a um padrão
# grepe ehter - filtra as linhas que contém "ether" que é indicativo do endereço MAC 
# awk- extrais os dados 
# {} delimita 
# print $2 divide as linhas - tabulação
