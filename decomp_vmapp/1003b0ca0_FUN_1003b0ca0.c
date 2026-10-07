
void FUN_1003b0ca0(long param_1,long param_2)

{
  ulong uVar1;
  ushort *puVar2;
  ushort uVar3;
  
  uVar1 = (ulong)*(uint *)(*(long *)(param_2 + 0x40) + 0xa8);
  *(undefined1 *)(param_2 + 0x4e) =
       *(undefined1 *)(*(long *)(*(long *)(*(long *)(param_1 + 8) + 0x70) + uVar1 * 8) + 0x22);
  puVar2 = (ushort *)(uVar1 * 0x40 + *(long *)(param_1 + 0x10));
  if (*(short *)(param_2 + 0x4c) == 0x2e) {
    if ((*(ushort *)(param_2 + 0x54) & 1) == 0) {
      uVar3 = *puVar2 | 0x10;
    }
    else {
      uVar3 = *puVar2 | 0x200;
    }
  }
  else {
    if (*(short *)(param_2 + 0x4c) != 0x2d) {
      return;
    }
    if ((*(ushort *)(param_2 + 0x54) & 1) == 0) {
      uVar3 = *puVar2 | 8;
    }
    else {
      uVar3 = *puVar2 | 0x100;
    }
  }
  *puVar2 = uVar3;
  return;
}

