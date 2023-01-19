A certain publisher publishes both books and journals. Design a class Publication, which has member variables, title, volume and year. Publicly derive three classes from this class:

Book class: that adds member variables author, ISBN and price.

Journal class: that adds member variables month, ISSN, impactFactor and annualSubscription

Magazine class: that adds member variables month, editor and annualSubscription

Include appropriate member functions in each class to input the data members in each class and to display them. Demonstrate the classes in a complete program. The main program should declare objects of classes Book, Journal and Magazine and call their public member functions.

For example:

| Input                                                                                                          | Output                                                                                                                                                                                                                                                                                                                       |
| -------------------------------------------------------------------------------------------------------------- | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| 1 book 2 2019 ketty 123-456789 30.6 <br> 2 book2 5 2020 5 987-12345 4.6 300 <br> 3 book3 3 2021 1 apple 899.99 | Book: book <br> Volume: 2<br>Year: 2019<br>Author: ketty<br>ISBN: 123-456789<br>Price: 30.6<br>Book: book2<br>Volume: 5<br>Year: 2020<br>Month: 5<br>ISSN: 987-12345<br>Impact Factor: 4.6<br>Annual Subscription: 300<br>Book: book3<br>Volume: 3<br>Year: 2021<br>Month: 1<br>Editor: apple<br>Annual Subscription: 899.99 |
