
void FUN_100113c10(undefined8 param_1,long param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_2 + 0x100);
  *puVar1 = 0x104;
  puVar1[1] = 0;
  FUN_100113990(param_1,*(undefined4 *)(param_2 + 0x110),puVar1,*(undefined8 *)(param_2 + 0xf8));
  return;
}

