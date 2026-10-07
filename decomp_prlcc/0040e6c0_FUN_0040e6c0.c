
undefined8 FUN_0040e6c0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffff;
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 4) = 0xfffffff5;
    uVar1 = 0;
  }
  return uVar1;
}

