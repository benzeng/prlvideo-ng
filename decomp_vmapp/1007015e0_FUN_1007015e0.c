
undefined8 FUN_1007015e0(undefined8 param_1,long param_2,undefined8 param_3,code *param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  do {
    iVar1 = FUN_100701420(param_1,param_2);
    if (iVar1 == 0) {
      return 0;
    }
    uVar2 = FUN_100700d70(param_2 + 8);
    iVar1 = (*param_4)(param_3,uVar2);
  } while (iVar1 == 0);
  return 1;
}

