const int vector[12] = {};

void setup(){
  Serial.begin(9600); 
  long target = random(12);
  long vector[target] = {};
  Serial.println(" target: ");
  Serial.println(target);
  
  Serial.print("Set of numbers:");
for(int i = 0; i < target ; i++)
{
  vector[i] = random(12); 
  Serial.print(vector[i]);
  Serial.print(", ");
}
  Serial.println();


  int toTest = yourSolution(vector, target);
  if(toTest == target)
  {
    Serial.println("Great Job You passed!!");
  }
  else
  {
    Serial.println("Please Try again");
  }
 
}


// ************** THE GOAL **************// 

// the problem is that you will be send a random sized array with random numbers it is your job to find **IF** there is is two intagers within the array that....
//... that equate to the sum of the target
// Fun Fact this is a common FaceBook Interview Problem.
// 

int yourSolution(long vector[], long target){
  // this is space for your solution
  // make sure you change the dummyVar in the return statement.
  //
  
  
  	long solution = 0;
 
 	return solution ; 
}
void loop(){
  
  
}
