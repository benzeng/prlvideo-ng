
void FUN_1003b0d10(long param_1,long param_2)

{
  uint *puVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  
  lVar3 = *(long *)(param_2 + 0x40);
  uVar5 = (ulong)*(uint *)(lVar3 + 0xa8);
  *(undefined1 *)(param_2 + 0x4e) =
       *(undefined1 *)(*(long *)(*(long *)(*(long *)(param_1 + 8) + 0x70) + uVar5 * 8) + 0x22);
  lVar4 = *(long *)(param_1 + 0x10);
  uVar2 = *(ushort *)(param_2 + 0x4c);
  if (uVar2 < 0x6c) {
    switch(uVar2) {
    case 0x45:
      uVar6 = 1 << (*(byte *)(lVar3 + 0xe8) & 0x1f);
      if ((*(ushort *)(param_2 + 0x54) & 1) != 0) {
        puVar1 = (uint *)(lVar4 + 0x24 + uVar5 * 0x40);
        *puVar1 = *puVar1 | uVar6;
        return;
      }
      puVar1 = (uint *)(lVar4 + 8 + uVar5 * 0x40);
      *puVar1 = *puVar1 | uVar6;
      return;
    case 0x46:
      uVar6 = 1 << (*(byte *)(lVar3 + 0xe8) & 0x1f);
      if ((*(ushort *)(param_2 + 0x54) & 1) != 0) {
        puVar1 = (uint *)(lVar4 + 0x2c + uVar5 * 0x40);
        *puVar1 = *puVar1 | uVar6;
        return;
      }
      puVar1 = (uint *)(lVar4 + 0x10 + uVar5 * 0x40);
      *puVar1 = *puVar1 | uVar6;
      return;
    case 0x47:
      uVar6 = 1 << (*(byte *)(lVar3 + 0xe8) & 0x1f);
      if ((*(ushort *)(param_2 + 0x54) & 1) != 0) {
        puVar1 = (uint *)(lVar4 + 0x38 + uVar5 * 0x40);
        *puVar1 = *puVar1 | uVar6;
        return;
      }
      puVar1 = (uint *)(lVar4 + 0x1c + uVar5 * 0x40);
      *puVar1 = *puVar1 | uVar6;
      return;
    case 0x48:
      uVar6 = 1 << (*(byte *)(lVar3 + 0xe8) & 0x1f);
      if ((*(ushort *)(param_2 + 0x54) & 1) != 0) {
        puVar1 = (uint *)(lVar4 + 0x34 + uVar5 * 0x40);
        *puVar1 = *puVar1 | uVar6;
        return;
      }
      puVar1 = (uint *)(lVar4 + 0x18 + uVar5 * 0x40);
      *puVar1 = *puVar1 | uVar6;
      return;
    case 0x49:
      uVar6 = 1 << (*(byte *)(lVar3 + 0xe8) & 0x1f);
      if ((*(ushort *)(param_2 + 0x54) & 1) != 0) {
        puVar1 = (uint *)(lVar4 + 0x30 + uVar5 * 0x40);
        *puVar1 = *puVar1 | uVar6;
        return;
      }
      puVar1 = (uint *)(lVar4 + 0x14 + uVar5 * 0x40);
      *puVar1 = *puVar1 | uVar6;
      return;
    case 0x4a:
      uVar6 = 1 << (*(byte *)(lVar3 + 0xe8) & 0x1f);
      if ((*(ushort *)(param_2 + 0x54) & 1) != 0) {
        puVar1 = (uint *)(lVar4 + 0x28 + uVar5 * 0x40);
        *puVar1 = *puVar1 | uVar6;
        return;
      }
      puVar1 = (uint *)(lVar4 + 0xc + uVar5 * 0x40);
      *puVar1 = *puVar1 | uVar6;
      return;
    }
  }
  else {
    if (uVar2 == 0x6c) {
      puVar1 = (uint *)(lVar4 + 4 + uVar5 * 0x40);
      *puVar1 = *puVar1 | 1 << (*(byte *)(lVar3 + 0xe8) & 0x1f);
      return;
    }
    if (uVar2 == 0x6d) {
      uVar6 = 1 << (*(byte *)(lVar3 + 0xe8) & 0x1f);
      if ((*(ushort *)(param_2 + 0x54) & 1) != 0) {
        puVar1 = (uint *)(lVar4 + 0x3c + uVar5 * 0x40);
        *puVar1 = *puVar1 | uVar6;
        return;
      }
      puVar1 = (uint *)(lVar4 + 0x20 + uVar5 * 0x40);
      *puVar1 = *puVar1 | uVar6;
    }
  }
  return;
}

