
int FUN_1007facb0(undefined8 param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1007fa900(param_1,4,param_2,param_3,param_4);
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_1007fa900(param_1,0x40,param_2,param_3,param_4 + iVar1);
    if (iVar2 != 0) {
      iVar2 = iVar1 + iVar2;
    }
  }
  return iVar2;
}

