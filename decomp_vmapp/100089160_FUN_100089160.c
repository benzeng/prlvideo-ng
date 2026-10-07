
void FUN_100089160(long param_1,ulong param_2,uint param_3,long param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  byte bVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  undefined1 local_60 [40];
  ulong local_38;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    if ((param_4 != 0) && (param_3 >> 0xc != 0)) {
      uVar9 = 0;
      do {
        uVar7 = (int)(param_2 >> 0xc) + uVar9;
        uVar8 = (ulong)(uVar7 >> 5);
        bVar6 = (byte)uVar7;
        if ((*(uint *)(param_4 + uVar8 * 4) >> (bVar6 & 0x1f) & 1) != 0) {
          puVar1 = (uint *)(*(long *)(*(long *)(param_1 + 8) + 0x1928) + uVar8 * 4);
          *puVar1 = *puVar1 & ~(1 << (bVar6 & 0x1f));
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < param_3 >> 0xc);
    }
    iVar2 = *(int *)(param_1 + 0x20);
    if (iVar2 == 0) {
      uVar4 = FUN_1007d87f0();
      *(undefined8 *)(param_1 + 0x28) = uVar4;
      iVar2 = FUN_100779e40(local_60);
      uVar8 = 0;
      if (iVar2 == 0) {
        uVar8 = local_38;
      }
      *(ulong *)(param_1 + 0x30) = uVar8;
      iVar2 = *(int *)(param_1 + 0x20);
    }
    iVar2 = iVar2 + (param_3 >> 0xc);
    *(int *)(param_1 + 0x20) = iVar2;
    uVar9 = *(uint *)(param_1 + 0x14);
    uVar7 = *(uint *)(param_1 + 0x18);
    if (uVar9 < uVar7) {
      uVar3 = (uVar7 - *(int *)(param_1 + 0x1c)) * iVar2;
      if (uVar9 < uVar3 / *(uint *)(param_1 + 0x10)) {
        *(uint *)(param_1 + 0x14) = uVar9 + 5;
        uVar9 = *(int *)(param_1 + 0x1c) + 5 + uVar9;
        if (uVar9 < uVar7) {
          uVar7 = uVar9;
        }
        FUN_1000bea50(*(undefined8 *)(param_1 + 8),uVar7,
                      (ulong)uVar3 % (ulong)*(uint *)(param_1 + 0x10));
        if (*(long *)(param_1 + 0x28) != 0) {
          lVar5 = FUN_1007d87f0();
          if ((ulong)(*(uint *)(param_1 + 0x10) >> 0xd & 0x3fff) <=
              (((lVar5 - *(long *)(param_1 + 0x28)) *
               (ulong)(uint)(*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14))) /
              (ulong)(uint)(*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x1c))) / 1000000) {
            iVar2 = FUN_100779e40(local_60);
            if (((iVar2 == 0) && (*(ulong *)(param_1 + 0x30) <= local_38)) &&
               (0x7ffffff < local_38 - *(ulong *)(param_1 + 0x30))) {
              FUN_10008fdb0(*(undefined8 *)(param_1 + 8),0x4e47,0);
              *(undefined8 *)(param_1 + 0x28) = 0;
            }
          }
        }
      }
    }
  }
  return;
}

