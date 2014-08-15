for i in {1..48}
do
	mpirun -np $i -host ulam4,ulam5 ./namd2  apoa1/apoa1.namd > apoa1/n_core-$i.txt
done

