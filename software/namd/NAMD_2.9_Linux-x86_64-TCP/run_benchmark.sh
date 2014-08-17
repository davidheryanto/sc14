for i in {0..24..4}
do
	if [ $i -eq 0 ]
	then
		mpirun -host ulam5,ulam4 -np 1 ./namd2 ../stmv/stmv.namd > result/n_core01.txt
	else	
		mpirun -host ulam5,ulam4 -np $i ./namd2 ../stmv/stmv.namd > result/n_core-`printf %02d $i`.txt
	fi
done

