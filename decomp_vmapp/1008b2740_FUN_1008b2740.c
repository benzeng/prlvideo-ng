
void FUN_1008b2740(undefined8 param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 == 10) {
    pcVar1 = "ENCRYPTED";
  }
  else if (param_2 == 0x14) {
    pcVar1 = "MIC-ONLY";
  }
  else if (param_2 == 0x1e) {
    pcVar1 = "MIC-CLEAR";
  }
  else {
    pcVar1 = "BAD-TYPE";
  }
  FUN_10087d250(param_1,"Proc-Type: 4,",0x400);
  FUN_10087d250(param_1,pcVar1,0x400);
  FUN_10087d250(param_1,"\n",0x400);
  return;
}

