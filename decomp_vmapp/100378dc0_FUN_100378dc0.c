
void FUN_100378dc0(undefined8 param_1,undefined4 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  char *pcVar7;
  char *pcVar8;
  undefined8 *puVar9;
  uint uVar10;
  char *pcVar11;
  
  lVar2 = *(long *)(param_3 + 0x2750);
  iVar1 = *(int *)(lVar2 + 4);
  puVar5 = operator_new__((ulong)(iVar1 * 0x1c + 0x10));
  puVar9 = puVar5;
  if (*(int *)(lVar2 + 4) != 0) {
    pcVar7 = (char *)((ulong)(iVar1 * 8 + 0x10) + (long)puVar5);
    uVar10 = 0;
    lVar3 = 0;
    pcVar8 = pcVar7;
    do {
      lVar6 = lVar3;
      pcVar11 = pcVar7 + ((ulong)(uint)(iVar1 * 0x14) - (long)pcVar8);
      iVar4 = _snprintf(pcVar8,(ulong)pcVar11 & 0xffffffff,"so_out%u%s",
                        (ulong)*(uint *)(*(long *)(lVar2 + 8) + 4 + lVar6 * 2),
                        (&PTR_s__100bbc2c0)[*(byte *)(*(long *)(lVar2 + 8) + 0xc + lVar6 * 2)]);
      if ((iVar4 < 0) || ((int)pcVar11 <= iVar4)) goto LAB_100378f0b;
      *(char **)((long)puVar5 + lVar6) = pcVar8;
      pcVar8 = pcVar8 + (iVar4 + 1);
      uVar10 = uVar10 + 1;
      lVar3 = lVar6 + 8;
    } while (uVar10 < *(uint *)(lVar2 + 4));
    puVar9 = (undefined8 *)((long)puVar5 + lVar6 + 8);
  }
  uVar10 = *(uint *)(lVar2 + 0x20) >> 2;
  if (uVar10 != 0) {
    if (0xf < *(uint *)(lVar2 + 0x20)) {
      *puVar9 = "so_pad4";
      puVar9 = puVar9 + 1;
    }
    if ((uVar10 & 3) != 0) {
      *puVar9 = "so_pad";
      puVar9 = puVar9 + 1;
    }
  }
  (*DAT_1011c7ed0)(param_2,(ulong)((long)puVar9 - (long)puVar5) >> 3,puVar5,
                   (*(uint *)(param_3 + 0x2748) & *(uint *)(param_3 + 0x2748) - 1) != 0 | 0x8c8c);
LAB_100378f0b:
  operator_delete__(puVar5);
  return;
}

