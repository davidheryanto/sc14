DIRS=megatest pingpong simplearrayhello load_balancing chkpt delegation queue sdag ckAllocSysMsgTest

all:
	for d in $(DIRS); do \
		(cd $$d; $(MAKE) all OPTS='$(OPTS)' TESTOPTS='$(TESTOPTS)' || exit 1) || exit 1; \
	done

test:
	for d in $(DIRS); do \
		(cd $$d; $(MAKE) test OPTS='$(OPTS)' TESTOPTS='$(TESTOPTS)' || exit 1) || exit 1; \
	done

# skip sdag, megatest and commtest
bgtest:
	for d in pingpong simplearrayhello load_balancing chkpt delegation; do \
		(cd $$d; $(MAKE) bgtest OPTS='$(OPTS)' || exit 1) || exit 1; \
	done

clean:
	for d in $(DIRS); do (cd $$d; $(MAKE) clean OPTS='$(OPTS)'); done
	rm -f TAGS #*#
	rm -f core *~
