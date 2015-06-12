# Cipher_School_Work
2015 cipher work
##date:2015-06-09 21:29:02
###Completed :
1. Input Operations
2. Create KeyArray
3. PiBox Operation
4. Encryption 
5. simple test

###!
useful to do unittest(eh ..not serious defination) ,now is slow ,still need to pratice  
feel great!

##date:2015-06-11 11:17:59
complete the encryption and decryption  
encryption is fast ,but decryption make me puzzled ,symmetry is so ****  
step by step F10 help me find the key point  ,the pis box can reuse ,need to create a new one  
do some changes :
> add a bool var to judge use pis or reverse_pis const array  
> use a tmp var to store pis or diverse_pis  
> add the reverse_pis test  

nice shot....  
ready to do the rest part .

##date:2015-06-12 00:06:39
###Complete:
1. BlockDecryption
2. add method 'IntToBinaryString' to BinaryString
3. FileToBinaryString(still need to complete output to file method)
4. CTR
5. FileCryption  

> BlockDecryption:
> should use the reverse PIS box
> the rest is simple ,just reverse the process of encryption
> IntToBinaryString:
> first ,mod and div a int value by 2 ,and judge the result
> there are three possibilities ,deal with it...
> the last step is to reverse the result (from previous step)  

> FileToBinaryString
> fstream read in a file(binary or not)
> if is not a binary string in file :
> read string into filebuff and filled it with '=' to make it equal to 0 when mod by 16
> call IntToBinaryString
> if is a BinaryString file :
> we need to make sure it is divisible  

> CTR :
> first create a random number
> and then change it to a BinaryString(16 bit) ,this is Ti
> done  

> FileCryption :
> divide the Text by ARRAY_SIZE
> for each packet do(x/y XOR e(Ti))
> then make up all the packet in order
> we create ctr in encryption and store it ,because we need it in decryption
> * when output it to a file ,we should out put the ctr and PlainText's length too *   


