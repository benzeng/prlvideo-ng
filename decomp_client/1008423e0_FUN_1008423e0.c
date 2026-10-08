
int FUN_1008423e0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = FUN_100842700();
  if (iVar1 < 0) {
    return iVar1;
  }
  if (param_2 == 0xc) {
    if (iVar1 < 3) {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
  }
  else {
    if (param_2 != 0) {
      return iVar1;
    }
    if (iVar1 < 3) {
      if (iVar1 == 2) {
        FUN_1005ec6e0(param_1);
      }
      else {
        if (iVar1 == 1) {
          uVar2 = 0;
        }
        else {
          if (iVar1 != 0) goto LAB_10084244a;
          uVar2 = *(undefined1 *)param_4[1];
        }
        FUN_1005ec6f0(param_1,uVar2);
      }
    }
  }
LAB_10084244a:
  return iVar1 + -3;
}

