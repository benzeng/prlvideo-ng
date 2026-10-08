
void FUN_100b5a810(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = uVar1;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  return;
}

