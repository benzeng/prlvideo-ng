
undefined8 FUN_0040e240(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  *(undefined8 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x18) = param_4;
  *(undefined4 *)(param_1 + 0x1c) = 1;
  puVar1 = (undefined4 *)FUN_0040e1f0();
  *puVar1 = 0;
  puVar1[2] = 0;
  puVar1[1] = 0x1000;
  return 0;
}

