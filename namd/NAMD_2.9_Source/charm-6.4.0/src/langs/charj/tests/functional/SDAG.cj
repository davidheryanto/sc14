
package tests;

readonly Main@ m;

public mainchare Main {

    public entry Main(CkArgMsg m) {
    }
}

public class Foo {
    public Foo() {}
    public int m;
}

public chare SDAG_Test{

    public entry SDAG_Test() {
    }

    public void x(int i) {
    }

    public entry void first(int f);
    public entry void second(int s);
    public entry void third(int t);

    public entry void test1() {
        int xx, yy = 1;
        int zz = yy;
        Main@ main_proxy;
        Foo moo_instance = new Foo();

        x(0);
        overlap { 
            when first(int f) { x(f); }
            when second(int s) x(s);
        } 
        x(1);
        x(2);
        for (int i=0; i<10; ++i) {
            x(i);
            for (int j=0; j<10; ++j) {
                x(i+j);
                x(5);
            }
            for (int j=0; j<10; ++j) {
                when third(int t) {
                    x(6);
                    x(7);
                }
            }
        }
    }
}
