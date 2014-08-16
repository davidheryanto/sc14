for i in {0..24..4}
do
	if [$i -eq 0]
	then
		./namd2 +idlepoll +p1 stmv/stmv.namd > stmv/result/n_core-1.txt
	else	
		./namd2 +idlepoll +p$i stmv/stmv.namd > stmv/result/n_core-`printf %02d $i`.txt
	fi
done
