
undefined4 FUN_10085a1d0(undefined8 param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  FUN_10084ca60(param_4);
  lVar3 = FUN_10084cc20(param_4);
  uVar2 = 0;
  if (lVar3 != 0) {
    FUN_10084bbb0(lVar3,0);
    if (*param_3 != -1) {
      uVar2 = 0;
      do {
        param_3 = param_3 + 1;
        iVar1 = FUN_10084c000(lVar3);
        if (iVar1 == 0) goto LAB_10085a24c;
      } while (*param_3 != -1);
    }
    uVar2 = FUN_100859b40(param_1,param_2,lVar3,param_4);
  }
LAB_10085a24c:
  FUN_10084cb40(param_4);
  return uVar2;
}

