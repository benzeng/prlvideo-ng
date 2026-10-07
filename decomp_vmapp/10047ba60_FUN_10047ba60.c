
bool FUN_10047ba60(undefined8 param_1,int *param_2)

{
  int *piVar1;
  bool bVar2;
  
  piVar1 = (int *)FUN_10078d0a0();
  if (*param_2 == *piVar1) {
    bVar2 = param_2[1] == piVar1[1];
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

