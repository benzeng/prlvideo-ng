
int FUN_10085d530(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_10085d320();
  if (iVar1 < 0) {
    return iVar1;
  }
  if (param_2 == 0xc) {
    if (1 < iVar1) goto LAB_10085d57c;
    uVar2 = 0xc;
  }
  else {
    if (param_2 != 0) {
      return iVar1;
    }
    if (1 < iVar1) goto LAB_10085d57c;
    uVar2 = 0;
  }
  FUN_10085d420(param_1,uVar2,iVar1,param_4);
LAB_10085d57c:
  return iVar1 + -2;
}

