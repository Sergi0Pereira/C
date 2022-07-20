<?php

function media ( $n1,  $n2){

    try {
        $media = ($n1 + $n2);
        
        echo "Concatenacao feita com sucesso";

    } catch (PDOException $e) {
        echo "Nao e possivel somar strings com inteiros.";
        $e->getMessage();
    }
    return $media;
}
echo "A sua media é de: " .media('s',8). "\n"; // . concatena as variaveis. Se tentar somar char/strings com inteiros recebo um erro
