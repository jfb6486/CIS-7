Assignment 4 Questions

1) Show that p->q and q'->p' are logically equivalent
without using truth tables or a "contrapositive"
(don't assume they are true)

	 p -> q
=	 p' v q      	,Implication
=	 q v p		,Commutative
=	(q')' v p'	,Double Negation
=  	 q' -> p'    	,Implication Equivalence


2) Show that (p -> r) ^ (q -> r) <=> (p v q) -> r
       
	(p -> r) ^ (q -> r)
=	(p' v r) ^ (q ->  r) 	,Implication
= 	(p' v r) ^ (q' v r)	,Implication
= 	(p' ^ q') v r		,Distributive
= 	(p v q)' v r		,de Morgan's Law
= 	(p v q) -> r		,Implication


3) Come up with two more

Example 1)

Showing that p' -> (q -> r) <=> q -> (p v r)

	p' -> (q -> r)
= 	p v (q -> r)		,Implication
=	p v (q' v r)		,Implication 
=      (p  v q') v r		,Commutative 	
=  	q' v  (p v r)		,Associative
=	q -> (p v r)		,Implication 

Example 2)   

Showing that (p v q) -> r <=> (p -> r) ^ (q -> r)

	(p v q) -> r
=	(p v q)' v r		,Implication
= 	(p' ^ q') v r 		,De Morgans
=  	(p' v r) ^ (q' v r)	,Distributive 
=	(p -> r) ^ (q' v r)	,Implication
=	(p -> r) ^ (q -> r)	,Implication

