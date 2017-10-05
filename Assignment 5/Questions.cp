Assignment 5 Questions

Anwser practice Question 18:
Using the predicatie symbols shown and appropriate quantifiers, write each English language statement as a predicatie wff.(The domain is the whole world.)

Using the predicate symbols S(x) for "x is a student," I(x) for "x is intelligent," and M(x) for "x likes music," write wffs that express the following statements.(The domain is the collection of all people.)

            a. All students are intelligent.
                (∀x)[S(x) -> I(x)]

            b. Some intelligent students like music.
                (∃x)[(I(x) ^ S(x) ^ M(x)]

            c. Everyone who likes music is a stupid student.
                (∀x)([M(x) -> s(x) ^ [I(x)]')

            d. Only intelligent students like music.
                (∀x)[(M(x) -> S(x) ^ I(x)]
              
1.3 Review Question 25:
Give English language translations of the following wffs if
              L(x, y): x loves y
              H(x): x is handsome
              M(x): is a man
              P(x): x is pretty
              W(x): x is a woman
              j: John
              k: Kathy
              
             a.H(j) ^ L(k, j) : John is handsome and Kathy loves John.
                      
             b.(∀x)[M(x) -> H(x)] : All men are handsome.
        
             c.(∀x)(W(x) -> (∀y)[L(x, y) -> M(y) ^ H(y)]) : All women love only handsome men.
             
             d.(∃x)[M(x) ^ H(x) ^ L(x,k)] : A handsome man loves Kathy.
                != Kathy loves some handsome men. (Incorrect Guessed Anwser)
                      
             e.(∃x)(W(x) ^ P(x) ^ (∀y)[L(x,y) -> H(y) ^ M(y)]): Some pretty women loves handsome men.
                      
             f.(∀x)[W(x) ^ P(x) -> L(j,x)] : John loves all pretty women
                != All pretty women love John. (Incorrect Guessed Anwser)
              
1.3 Review Question 34:
Give interpretations to prove that each of the following wffs is not valid:
                      a.(∃x)A(x) ^ (∃x)B(x) -> (∃x)[A(x) ^ B(x)] : A(x) = x is even, B(x) = x is odd
            
                      b.(∀x)(∃y)P(x,y) -> (∃x)(∀y)P(x,y) : y is an x
                      
                      c.(∀x)[P(x) -> Q(x)] -> (∃x)P(x) -> (∀x)Q(x)] : P(x) x is a pop song, Q(x) x is a song
            
                      d.(∀x)[A(x)]' <-> [(∀x)A(x)]' : A(x) x is not alive
/*
Logic Symbols
 not,¬
 or,∨
 and,∧
 l,←
 r,→
 lr,↔
 ll,⇐
 rr,⇒
 iff,⇔
 all,∀
 some,∃
 nsome,∄
 neq,≠
 xor,⊻
 nand,⊼
 nor,⊽
 oplus,⊕
 qed,∎
 equiv,≡
 top,⊤
 bot,⊥
 vdash,⊢
 models,⊨
 nmodels,⊭
*/
