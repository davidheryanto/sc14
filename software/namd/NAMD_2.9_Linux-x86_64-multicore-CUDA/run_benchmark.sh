for i in {1..24}
do
	./namd2 +idlepoll +p$i apoa1/apoa1.namd > apoa1/n_core-$i.out
done
