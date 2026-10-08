
void FUN_100b1cbb0(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x14);
  *(uint *)(param_1 + 0x14) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = (uint)*(undefined8 *)(param_1 + 0x18);
  uVar2 = (uint)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20);
  *(ulong *)(param_1 + 0x18) =
       CONCAT44(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18,
                uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18);
  uVar1 = *(uint *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = (uint)*(undefined8 *)(param_1 + 0x30);
  uVar2 = (uint)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
  *(ulong *)(param_1 + 0x30) =
       CONCAT44(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18,
                uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18);
  uVar1 = (uint)*(undefined8 *)(param_1 + 0x38);
  uVar2 = (uint)((ulong)*(undefined8 *)(param_1 + 0x38) >> 0x20);
  *(ulong *)(param_1 + 0x38) =
       CONCAT44(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18,
                uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18);
  *(ushort *)(param_1 + 0x40) =
       CONCAT11((char)*(undefined2 *)(param_1 + 0x40),
                (char)((ushort)*(undefined2 *)(param_1 + 0x40) >> 8));
  uVar1 = *(uint *)(param_1 + 0x44);
  *(uint *)(param_1 + 0x44) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x48) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  return;
}

