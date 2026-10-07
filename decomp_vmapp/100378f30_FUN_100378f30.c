
void FUN_100378f30(undefined1 *param_1,long *param_2,long param_3)

{
  ushort uVar1;
  int iVar2;
  uint3 uVar3;
  int iVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  undefined2 *puVar7;
  long lVar8;
  ushort *puVar9;
  undefined2 uVar10;
  long lVar12;
  long *plVar13;
  uint uVar14;
  byte bVar15;
  uint uVar16;
  uint uVar11;
  
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 == 0) {
    lVar8 = *(long *)(param_1 + 8);
  }
  *(int *)(lVar8 + 4) = (int)param_2[1];
  puVar5 = (undefined1 *)FUN_1003ac5c0(param_2);
  *param_1 = *puVar5;
  plVar13 = (long *)param_2[6];
  if (plVar13 != (long *)0x0) {
    uVar1 = 0;
    do {
      iVar4 = FUN_1003ac660(param_2);
      iVar2 = *(int *)((long)plVar13 + 0xc);
      lVar12 = (ulong)(uint)(iVar4 * 0xf + iVar2) * 0x10;
      lVar8 = *(long *)(param_3 + 0x868 + lVar12);
      uVar16 = *(uint *)(param_3 + 0x874 + lVar12);
      uVar11 = uVar16;
      if ((lVar8 == 0) || (uVar11 = 0, uVar16 == 0)) {
        uVar10 = (undefined2)(uVar11 >> 4);
        bVar15 = 0x10;
LAB_100379052:
        if (uVar1 == 0) {
          puVar9 = *(ushort **)(param_1 + 0x10);
          if (puVar9 == (ushort *)0x0) {
            *(byte *)(*(long *)(param_1 + 8) + 8) = *(byte *)(*(long *)(param_1 + 8) + 8) | 1;
            puVar9 = *(ushort **)(param_1 + 8);
          }
          else {
            *(byte *)(puVar9 + 4) = (byte)puVar9[4] | 1;
          }
          uVar1 = *puVar9;
          puVar5 = (undefined1 *)FUN_10037bdb0(param_1,1,1);
          *puVar5 = 0;
        }
        pbVar6 = (byte *)FUN_10037bdb0(param_1,1,1);
        *pbVar6 = bVar15 | (byte)iVar2 & 0xf;
        if ((bVar15 & 0x10) != 0) {
          puVar7 = (undefined2 *)FUN_10037bdb0(param_1,2,1);
          *puVar7 = uVar10;
        }
        lVar8 = *(long *)(param_1 + 0x10);
        if (lVar8 == 0) {
          lVar8 = *(long *)(param_1 + 8);
        }
        *(char *)(lVar8 + (ulong)uVar1) = *(char *)(lVar8 + (ulong)uVar1) + '\x01';
      }
      else {
        uVar3 = *(uint3 *)(lVar8 + 0xb0);
        iVar4 = 0;
        if (((*(byte *)(plVar13 + 3) & 1) == 0) && ((uVar3 & 0x31000) != 0x1000)) {
          iVar4 = *(int *)((long)plVar13 + 0x14);
        }
        uVar14 = (int)plVar13[1] - iVar4;
        uVar16 = uVar16 >> 4;
        uVar11 = uVar16;
        if (uVar14 <= uVar16) {
          uVar11 = uVar14;
        }
        uVar10 = (undefined2)uVar11;
        bVar15 = ((uVar3 & 0x11000) == 0x1000 && (uVar3 & 0x20000) == 0) << 5 |
                 (uVar16 < uVar14) << 4 | (byte)(uVar3 >> 0xb) & 0x40;
        if (bVar15 != 0) goto LAB_100379052;
      }
      plVar13 = (long *)*plVar13;
    } while (plVar13 != (long *)0x0);
  }
  if ((*(int *)(param_3 + 0x2748) != 0) &&
     ((lVar8 = (**(code **)(*param_2 + 0x18))(param_2), lVar8 != 0 ||
      ((lVar8 = (**(code **)(*param_2 + 0x10))(param_2), lVar8 != 0 &&
       (*(long *)(param_3 + 0x620) == 0)))))) {
    lVar8 = *(long *)(param_3 + 0x2750);
    lVar12 = *(long *)(param_1 + 0x10);
    if (lVar12 == 0) {
      lVar12 = *(long *)(param_1 + 8);
    }
    *(byte *)(lVar12 + 8) = *(byte *)(lVar12 + 8) | 4;
    uVar10 = *(undefined2 *)(lVar8 + 4);
    puVar7 = (undefined2 *)FUN_10037bdb0(param_1,2,1);
    *puVar7 = uVar10;
    if (*(int *)(lVar8 + 4) != 0) {
      uVar16 = 0;
      lVar12 = 0xc;
      do {
        iVar2 = *(int *)(*(long *)(lVar8 + 8) + -8 + lVar12);
        bVar15 = *(byte *)(*(long *)(lVar8 + 8) + lVar12);
        puVar9 = (ushort *)FUN_10037bdb0(param_1,2,1);
        *puVar9 = (ushort)bVar15 | (ushort)(iVar2 << 8);
        uVar16 = uVar16 + 1;
        lVar12 = lVar12 + 0x10;
      } while (uVar16 < *(uint *)(lVar8 + 4));
    }
    uVar10 = *(undefined2 *)(lVar8 + 0x20);
    puVar7 = (undefined2 *)FUN_10037bdb0(param_1,2,1);
    *puVar7 = uVar10;
  }
  return;
}

