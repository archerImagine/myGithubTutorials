Head First Java Chapter 06
=
This is the sixth Chapter learning of **Head First Java** by **Kathy Sierra** and **Bert Bates**, 
This markdown file is my notes for the second chapter, not sure if any copyright issues are there.

###ArrayList
####Something you can do with Arraylist.
* Make one  
````java
ArrayList<Egg> myList = new ArrayList<Egg>();
````
* Put something in it.  
````java
Egg s = new Egg();  
myList.add(s);
```` 
* Put another thing in it.  
````java
Egg b = new Egg();  
myList.add(b);
```` 
* Find out how many things are in it.  
````java
int theSize = myList.size();
```` 
* Find out if it contains something.  
````java
boolean isIn = myList.contain(s);
```` 
* Find out where something is (i.e. its index)  
````java
boolean idx = myList.indexOf(b);  
```` 
* Find out if it's empty
````java
boolean empty = myList.isEmpty();  
```` 
* Remove something from it.  
````java
myList.remove(s);
````