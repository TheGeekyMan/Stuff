class Dog{
    int size;
    String breed;

    void bark(){
        System.out.println("bho!bho!");
    }
}

public class DogTest {
    public static void main(String[] args) {
        Dog d = new Dog();
        d.size=40;
        d.bark();
    }
}
