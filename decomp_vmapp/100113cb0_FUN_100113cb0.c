
void FUN_100113cb0(undefined8 param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_2 + 0x100);
  *puVar1 = 0x105;
  puVar1[1] = 8;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  FUN_100113990(param_1,*(undefined4 *)(param_2 + 0x110),puVar1,*(undefined8 *)(param_2 + 0xf8));
  return;
}

