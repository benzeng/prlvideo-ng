
void FUN_100619440(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((long)param_2 + 0x14) = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((long)param_2 + 0xc) = uVar2;
  return;
}

