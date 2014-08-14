for i in {1..24}
do
	./namd2 +p$i apoa1/apoa1.namd > n_core-$i.out
done
