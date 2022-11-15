const long vector[12] = {};


void setup() {
  Serial.begin(9600); 
  long target = random(12);
  long vector[target] = {};
  Serial.println(" target: ");
  Serial.println(target);

  
 for(int i = 0; i < target ; i++)
{
   vector[i] = random(12); 
  Serial.print("  ,");
  Serial.print(vector[i]);
  
}


long toTest = yourSolution( vector, target);
if(toTest == target){
  Serial.println("Great Job You passed!!");
}
else{
  Serial.println("Please Try again");
}




  

}


// ************** THE GOAL **************// 

// the problem is that you will be send a random sized array with random numbers it is your job to find **IF** there is is two intagers within the array that....
//... that equate to the sum of the target
// Fun Fact this is a common FaceBook Interview Problem.
// 

long yourSolution(long vector, long target) {
  // this is space for your solution
  // make sure you change the dumyVar in the return statement.
  //
  long dummyVar = 0;
 
 return dummyVar ; 

  

}
void loop(){
  
  
}
