
void FUN_10032ed60(undefined8 *param_1,long param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  
  puVar5 = (undefined8 *)*param_1;
  while (puVar5 != param_1 + 1) {
    lVar3 = puVar5[5];
    if ((lVar3 != 0) && ((*(ushort *)(lVar3 + 0xb0) & 0x4000) != 0)) {
      uVar2 = **(uint **)(lVar3 + 0x28);
      iVar9 = (*(uint **)(lVar3 + 0x28))[1] * *(int *)(lVar3 + 0x10);
      uVar7 = uVar2 >> 0xc;
      if ((uVar7 < param_3) &&
         ((uVar8 = uVar2 + 0xfff + iVar9 >> 0xc, uVar8 < param_3 && (uVar7 < uVar8)))) {
        uVar10 = uVar2 + 0xfff + iVar9 >> 0xc;
        if ((uVar10 - (uVar2 >> 0xc) & 1) != 0) {
          puVar1 = (uint *)(param_2 + (ulong)(uVar2 >> 0x11) * 4);
          *puVar1 = *puVar1 & ~(1 << ((byte)uVar7 & 0x1f));
          uVar7 = uVar7 + 1;
        }
        if (uVar10 - 1 != uVar2 >> 0xc) {
          do {
            puVar1 = (uint *)(param_2 + (ulong)(uVar7 >> 5) * 4);
            *puVar1 = *puVar1 & ~(1 << ((byte)uVar7 & 0x1f));
            puVar1 = (uint *)(param_2 + (ulong)(uVar7 + 1 >> 5) * 4);
            *puVar1 = *puVar1 & ~(1 << ((byte)(uVar7 + 1) & 0x1f));
            uVar7 = uVar7 + 2;
          } while (uVar7 < uVar8);
        }
      }
    }
    puVar6 = puVar5;
    puVar4 = (undefined8 *)puVar5[1];
    if ((undefined8 *)puVar5[1] == (undefined8 *)0x0) {
      do {
        puVar5 = (undefined8 *)puVar6[2];
        bVar11 = (undefined8 *)*puVar5 != puVar6;
        puVar6 = puVar5;
      } while (bVar11);
    }
    else {
      do {
        puVar5 = puVar4;
        puVar4 = (undefined8 *)*puVar5;
      } while ((undefined8 *)*puVar5 != (undefined8 *)0x0);
    }
  }
  return;
}

