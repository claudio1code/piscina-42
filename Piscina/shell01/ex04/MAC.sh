#'awk /ether/ {print $2}': Filtra e exibe os endereços MAC, semelhante ao comando anterior.
#'ifconfig' Exibe as interfaces de rede e suas configurações
ifconfig | awk '/ether/ {print $2}'

