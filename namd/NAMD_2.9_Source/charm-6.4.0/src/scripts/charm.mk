# Basic Makefile rules useful for building Charm++ code

# Assuming $(CHARM) is set to the root of a Charm++ tree, everything else should work
CHARMC ?= $(CHARM)/bin/charmc
CHARMXI ?= $(CHARMC)

%.ci.stamp: %.ci
	$(CHARMXI) $< && touch $@

CIDEPENDFILE ?= Make.cidepends

cidepends.default:
	echo "Creating " $(CIDEPENDFILE) " ..."
	if [ -f $(CIDEPENDFILE) ]; then \
           /bin/cp -f $(CIDEPENDFILE) $(CIDEPENDFILE).old; \
        fi;
	echo '# Generated by make cidepends.default in charm.mk' > $(CIDEPENDFILE);
	for cifile in $(wildcard *.ci); do \
              echo "checking generated modules for $$cifile" ; \
              $(CHARMC) -M $$cifile >> $(CIDEPENDFILE) ; \
        done