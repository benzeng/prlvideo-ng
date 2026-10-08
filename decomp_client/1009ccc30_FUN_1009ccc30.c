
int FUN_1009ccc30(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_1009db760();
  if (iVar1 < 0) {
    return iVar1;
  }
  if (param_2 == 0xc) {
    if (0 < iVar1) goto LAB_1009ccc7a;
    uVar2 = 0xc;
  }
  else {
    if (param_2 != 0) {
      return iVar1;
    }
    if (0 < iVar1) goto LAB_1009ccc7a;
    uVar2 = 0;
  }
  FUN_1009cca90(param_1,uVar2,iVar1,param_4);
LAB_1009ccc7a:
  return iVar1 + -1;
}

