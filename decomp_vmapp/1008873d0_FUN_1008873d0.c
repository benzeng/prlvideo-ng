
int FUN_1008873d0(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_1008870d0(param_1,0,param_2);
  if (iVar1 < 1) {
    iVar3 = 0;
  }
  else {
    iVar2 = FUN_100887020();
    iVar3 = 0;
    if (iVar2 == 1) {
      iVar3 = iVar1;
    }
  }
  return iVar3;
}

