class Main {
   static class Node {
       int[] data = new int[100000]; // allocate memory
   }
   public static void main(String[] args) {
       for (int i = 0; i < 3; i++) {
           Node n = new Node(); // n exists only inside the loop
       }
       System.gc(); // request GC (may run automatically)
       System.out.println("Some objects may have been garbage collected!");
   }
}
