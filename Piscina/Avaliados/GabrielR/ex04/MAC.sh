#ifconfig serve para configurar e exibis informações sobre as interfaces de rede | o grep serv para filtrar textos, no caso "ether" | awk é para processar texto e no caso printar {'print $2'} segunda coluna

#!/bin/sh
ifconfig | grep "ether" | awk {'print $2'}
