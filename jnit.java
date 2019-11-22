
public class jnit {

	static {
		try {
			System.loadLibrary("test");
		} catch (Exception ex) {
			
			System.out.println("ERROR LOADING LIBRARY:"+ex.toString());
			System.exit(1);
		}
		
	}
	
	private native void test() ;
	
	
	public static void main(String[] args) {
		
        (new jnit()).test();
        
        /*
        for ( int i=0; i < 100000000 ; i++) {
            String s = "a"+ i ; 
             
        } */
        
	}
}
