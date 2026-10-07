
undefined4 FUN_10085a710(undefined8 param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  if (*param_3 == 0) {
    FUN_10084bbb0(param_1,0);
    uVar2 = 1;
  }
  else {
    FUN_10084ca60(param_4);
    lVar3 = FUN_10084cc20(param_4);
    uVar2 = 0;
    if (lVar3 != 0) {
      iVar1 = FUN_10084c000(lVar3,*param_3 + -1);
      if (iVar1 != 0) {
        uVar2 = FUN_10085a460(param_1,param_2,lVar3,param_3,param_4);
      }
    }
    FUN_10084cb40(param_4);
  }
  return uVar2;
}

