for i in {1..24}
do
	./namd2 +idlepoll +p$i stmv/stmv.namd > stmv/result/n_core-`printf %02d $i`.txt
done
