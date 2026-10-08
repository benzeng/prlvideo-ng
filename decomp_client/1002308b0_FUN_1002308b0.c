
void FUN_1002308b0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x44) = *(undefined1 *)((long)param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 2);
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 0x38) = param_2[1];
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  return;
}

