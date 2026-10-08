
undefined4 FUN_100c353d0(undefined8 param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  FUN_100c27c60(param_4);
  lVar3 = FUN_100c27e20(param_4);
  uVar2 = 0;
  if (lVar3 != 0) {
    FUN_100c26db0(lVar3,0);
    if (*param_3 != -1) {
      uVar2 = 0;
      do {
        param_3 = param_3 + 1;
        iVar1 = FUN_100c27200(lVar3);
        if (iVar1 == 0) goto LAB_100c3544c;
      } while (*param_3 != -1);
    }
    uVar2 = FUN_100c34d40(param_1,param_2,lVar3,param_4);
  }
LAB_100c3544c:
  FUN_100c27d40(param_4);
  return uVar2;
}

