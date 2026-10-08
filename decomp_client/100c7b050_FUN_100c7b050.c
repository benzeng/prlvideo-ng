
undefined8 FUN_100c7b050(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_100bf8810(*param_1,*param_2);
  if ((int)uVar1 == 0) {
    uVar1 = 0;
    if (param_1[1] != 0 || param_2[1] != 0) {
      uVar1 = FUN_100c76f80();
      return uVar1;
    }
  }
  return uVar1;
}

