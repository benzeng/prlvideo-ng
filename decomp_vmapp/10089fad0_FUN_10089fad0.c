
undefined8 FUN_10089fad0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1008230a0(*param_1,*param_2);
  if ((int)uVar1 == 0) {
    uVar1 = 0;
    if (param_1[1] != 0 || param_2[1] != 0) {
      uVar1 = FUN_10089ba00();
      return uVar1;
    }
  }
  return uVar1;
}

