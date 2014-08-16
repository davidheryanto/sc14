for i in {01..48}
do
	mpirun -np $i -host ulam4,ulam5 ./namd2  stmv/stmv.namd > stmv/result/n_core-$i.txt
done

