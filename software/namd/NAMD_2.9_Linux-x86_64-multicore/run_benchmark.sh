for i in {0..24..4}
do
	if [$i -eq 0]
	then
		./namd2 +p1 ../stmv/stmv.namd > result_stmv_2500_steps/n_core-01.txt
	else	
		./namd2 +p$i ../stmv/stmv.namd > result_stmv_2500_steps/n_core-`printf %02d $i`.txt
	fi
done

