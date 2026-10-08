
undefined4 FUN_100c35910(undefined8 param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  if (*param_3 == 0) {
    FUN_100c26db0(param_1,0);
    uVar2 = 1;
  }
  else {
    FUN_100c27c60(param_4);
    lVar3 = FUN_100c27e20(param_4);
    uVar2 = 0;
    if (lVar3 != 0) {
      iVar1 = FUN_100c27200(lVar3,*param_3 + -1);
      if (iVar1 != 0) {
        uVar2 = FUN_100c35660(param_1,param_2,lVar3,param_3,param_4);
      }
    }
    FUN_100c27d40(param_4);
  }
  return uVar2;
}

