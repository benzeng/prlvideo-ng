
void FUN_100b1db70(undefined8 param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_2 + 4);
  *(uint *)(param_2 + 4) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_2 + 8);
  *(uint *)(param_2 + 8) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = (uint)*(undefined8 *)(param_2 + 0x10);
  uVar2 = (uint)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
  *(ulong *)(param_2 + 0x10) =
       CONCAT44(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18,
                uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18);
  return;
}

