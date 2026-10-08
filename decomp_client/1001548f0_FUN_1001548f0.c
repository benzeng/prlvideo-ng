
undefined8 FUN_1001548f0(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(int *)(*param_2 + 4) != 0) {
    lVar1 = FUN_1001547d0(param_1,param_2);
    if (lVar1 != 0) {
      uVar2 = FUN_10015cb20(lVar1,param_2);
      return uVar2;
    }
  }
  return 0;
}

