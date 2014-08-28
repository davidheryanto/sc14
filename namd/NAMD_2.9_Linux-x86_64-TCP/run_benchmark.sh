for i in {0..48..4}
do
	if [ $i -eq 0 ]
	then
		mpirun -host ulam5,ulam4 -np 1 ./namd2 ../input/stmv/stmv.namd  > result_stmv_2500_steps/n_core-01.txt
	else	
		mpirun -host ulam5,ulam4 -np $i ./namd2 ../input/stmv/stmv.namd > result_stmv_2500_steps/n_core-`printf %02d $i`.txt
	fi
done

