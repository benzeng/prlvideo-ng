
void FUN_1004e5ea0(long param_1,uint *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  undefined8 local_28;
  uint local_20;
  
  param_2[0x10] = (uint)*(byte *)(param_1 + 0x28);
  param_2[0xf] = 0;
  bVar1 = FUN_1004e2f60(*(undefined8 *)(param_1 + 0x20));
  *param_2 = (uint)bVar1;
  FUN_1004e3fe0(*(undefined8 *)(param_1 + 0x20),&local_50);
  *(undefined8 *)(param_2 + 9) = local_38;
  *(undefined8 *)(param_2 + 3) = local_50;
  *(undefined8 *)(param_2 + 5) = local_40;
  *(undefined8 *)(param_2 + 7) = local_48;
  param_2[0xf] = local_20;
  *(undefined8 *)(param_2 + 0xb) = local_28;
  *(ulong *)(param_2 + 0xd) = (ulong)((int)local_28 + 0x1ffU & 0xfffffe00);
  *(long *)(param_2 + 0x12) = local_30;
  *(bool *)(param_2 + 0x11) = local_30 != 0;
  uVar2 = 1;
  if (*param_2 == 0) {
    uVar2 = 2;
  }
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  return;
}

