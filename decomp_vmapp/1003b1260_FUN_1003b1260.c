
undefined8 FUN_1003b1260(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  
  lVar11 = **(long **)(*(long *)(param_1 + 0x20) + 0xf0);
  if (lVar11 != 0) {
    puVar4 = (undefined8 *)0x0;
    puVar8 = (undefined8 *)0x0;
    iVar12 = 0;
    puVar5 = (undefined8 *)0x0;
    do {
      if (puVar4 == (undefined8 *)0x0) {
        puVar4 = operator_new(0x40);
        puVar7 = puVar4 + 1;
        puVar4[1] = puVar4;
        puVar4[3] = puVar7;
        *(int *)(puVar4 + 4) = iVar12;
        *puVar4 = &PTR_FUN_101119538;
        puVar4[7] = 0;
        puVar4[6] = 0;
        puVar4[5] = 0;
        iVar12 = iVar12 + 1;
        lVar6 = *(long *)(param_1 + 0x20);
        puVar4[2] = lVar6 + 0x118;
        puVar4[3] = *(undefined8 *)(lVar6 + 0x128);
        *(undefined8 **)(*(long *)(lVar6 + 0x128) + 8) = puVar7;
        *(undefined8 **)(lVar6 + 0x128) = puVar7;
      }
      if (puVar5 == (undefined8 *)0x0) {
        puVar5 = operator_new(0x50);
        puVar7 = puVar5 + 1;
        puVar5[1] = puVar5;
        puVar5[3] = puVar7;
        *(int *)(puVar5 + 4) = iVar12;
        *puVar5 = &PTR_FUN_100bbdaa8;
        puVar5[9] = 0;
        puVar5[8] = 0;
        puVar5[7] = 0;
        puVar5[6] = 0;
        puVar5[5] = 0;
        lVar6 = *(long *)(param_1 + 0x20);
        puVar5[2] = lVar6 + 0x118;
        puVar5[3] = *(undefined8 *)(lVar6 + 0x128);
        *(undefined8 **)(*(long *)(lVar6 + 0x128) + 8) = puVar7;
        *(undefined8 **)(lVar6 + 0x128) = puVar7;
        if (puVar4[6] == 0) {
          if (*(short *)(lVar11 + 0x4c) == 0x2c) {
            lVar6 = *(long *)(param_1 + 8);
            lVar2 = *(long *)(param_1 + 0x10);
            uVar9 = lVar2 - lVar6 >> 3;
            uVar3 = *(uint *)(*(long *)(lVar11 + 0x40) + 0x28);
            if (uVar9 <= uVar3) {
              uVar10 = (ulong)(uVar3 + 1);
              if (uVar9 < uVar10) {
                FUN_1003c61b0((long *)(param_1 + 8));
                lVar6 = *(long *)(param_1 + 8);
              }
              else if ((uVar10 < uVar9) && (lVar1 = lVar6 + uVar10 * 8, lVar2 != lVar1)) {
                *(ulong *)(param_1 + 0x10) = (~((lVar2 + -8) - lVar1) & 0xfffffffffffffff8U) + lVar2
                ;
              }
            }
            *(undefined8 **)(lVar6 + (ulong)uVar3 * 8) = puVar4;
          }
          puVar4[6] = puVar5;
        }
        iVar12 = iVar12 + 1;
        puVar5[9] = puVar4;
        puVar5[6] = lVar11;
        puVar4[5] = puVar5;
        if ((puVar8 != (undefined8 *)0x0) && (puVar8[6] == 0)) {
          puVar7 = operator_new(0x10);
          *puVar7 = puVar5[7];
          puVar7[1] = puVar8;
          puVar5[7] = puVar7;
          puVar8[6] = puVar5;
        }
      }
      puVar5[5] = lVar11;
      *(undefined8 **)(lVar11 + 0x38) = puVar5;
      if ((*(ushort *)(lVar11 + 0x4c) & 0xfffe) == 4) {
        puVar8 = operator_new(0x48);
        puVar7 = puVar8 + 1;
        puVar8[1] = puVar8;
        puVar8[3] = puVar7;
        *(int *)(puVar8 + 4) = iVar12;
        iVar12 = iVar12 + 1;
        *puVar8 = &PTR_FUN_101119588;
        puVar8[8] = 0;
        puVar8[7] = 0;
        puVar8[6] = 0;
        puVar8[5] = 0;
        lVar6 = *(long *)(param_1 + 0x20);
        puVar8[2] = lVar6 + 0x118;
        puVar8[3] = *(undefined8 *)(lVar6 + 0x128);
        *(undefined8 **)(*(long *)(lVar6 + 0x128) + 8) = puVar7;
        *(undefined8 **)(lVar6 + 0x128) = puVar7;
        puVar8[7] = puVar4;
        puVar7 = operator_new(0x10);
        *puVar7 = puVar5[8];
        puVar7[1] = puVar8;
        puVar5[8] = puVar7;
        puVar8[5] = puVar5;
      }
      lVar6 = **(long **)(lVar11 + 8);
      if ((lVar6 == 0) || (*(short *)(lVar6 + 0x4c) == 0x2c)) {
        puVar7 = operator_new(0x10);
        lVar2 = puVar4[6];
        *puVar7 = *(undefined8 *)(lVar2 + 0x38);
        puVar7[1] = puVar4;
        *(undefined8 **)(lVar2 + 0x38) = puVar7;
        puVar7 = operator_new(0x10);
        lVar2 = puVar4[5];
        *puVar7 = *(undefined8 *)(lVar2 + 0x40);
        puVar7[1] = puVar4;
        *(undefined8 **)(lVar2 + 0x40) = puVar7;
        puVar4 = (undefined8 *)0x0;
      }
      uVar3 = (uint)(short)*(ushort *)(lVar11 + 0x4c);
      if ((int)uVar3 < 0xd) {
        if ((*(ushort *)(lVar11 + 0x4c) < 9) && ((0x1bcU >> (uVar3 & 0x1f) & 1) != 0)) {
LAB_1003b15de:
          puVar5 = (undefined8 *)0x0;
        }
      }
      else if (((uVar3 - 0xd & 0xffff) < 0x40) &&
              ((0x8006000000040221U >> ((ulong)(uVar3 - 0xd) & 0x3f) & 1) != 0)) goto LAB_1003b15de;
      if (((lVar6 != 0) && ((ulong)*(ushort *)(lVar6 + 0x4c) < 0x31)) &&
         ((0x1100000a00440U >> ((ulong)*(ushort *)(lVar6 + 0x4c) & 0x3f) & 1) != 0)) {
        puVar5 = (undefined8 *)0x0;
      }
      lVar11 = **(long **)(lVar11 + 8);
    } while (lVar11 != 0);
  }
  return 0;
}

