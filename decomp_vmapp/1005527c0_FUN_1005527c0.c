
undefined1 FUN_1005527c0(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  
  uVar1 = 1;
  if ((code *)*param_1 != (code *)0x0) {
    uVar1 = (*(code *)*param_1)(param_1[1],param_2,param_3);
  }
  return uVar1;
}

