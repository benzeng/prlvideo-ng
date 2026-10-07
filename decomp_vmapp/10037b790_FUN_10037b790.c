
void FUN_10037b790(long param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint uVar8;
  undefined **ppuVar9;
  undefined1 *puVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  undefined1 uVar14;
  long lVar15;
  
  uVar11 = *(uint *)(param_2 + 4);
  if (uVar11 != 0) {
    lVar15 = 0xc;
    uVar13 = 0;
    do {
      iVar3 = *(int *)(*(long *)(param_2 + 8) + -8 + lVar15);
      uVar7 = (ulong)(iVar3 * 4 + 3);
      lVar4 = *(long *)(param_1 + 0x58);
      if (uVar7 < (ulong)(*(long *)(param_1 + 0x60) - lVar4 >> 3)) {
        uVar8 = iVar3 << 2;
        bVar1 = *(byte *)(*(long *)(param_2 + 8) + lVar15);
        if ((((bVar1 & 1) == 0) || (lVar12 = *(long *)(lVar4 + (ulong)uVar8 * 8), lVar12 == 0)) &&
           (((bVar1 & 2) == 0 || (lVar12 = *(long *)(lVar4 + (ulong)(uVar8 | 1) * 8), lVar12 == 0)))
           ) {
          if ((bVar1 & 4) != 0) {
            lVar12 = *(long *)(lVar4 + (ulong)(uVar8 | 2) * 8);
            if (lVar12 != 0) goto LAB_10037b850;
          }
          if (((bVar1 & 8) == 0) || (lVar12 = *(long *)(lVar4 + uVar7 * 8), lVar12 == 0))
          goto LAB_10037b8fb;
        }
LAB_10037b850:
        uVar2 = *(undefined1 *)(lVar12 + 0x2a);
        puVar5 = (&PTR_s__100bbc2c0)[*(byte *)(lVar12 + 0x29)];
        if (lVar12 == 0) {
          uVar14 = 0;
          uVar6 = FUN_1003a7a00(0);
          uVar7 = 0;
        }
        else {
          lVar4 = *(long *)(lVar12 + 8);
          ppuVar9 = &PTR_s_vec4_100bbc208;
          if (lVar4 != 0) {
            puVar10 = (undefined1 *)(*(long *)(lVar4 + 0x80) + 0x48);
            if (*(long *)(lVar4 + 0x80) == 0) {
              puVar10 = (undefined1 *)(lVar4 + 0x7c);
            }
            ppuVar9 = (undefined **)CONCAT71((int7)((ulong)puVar10 >> 8),*puVar10);
          }
          uVar6 = FUN_1003a7a00((ulong)ppuVar9 & 0xff,param_2,uVar2,ppuVar9);
          uVar14 = *(undefined1 *)(lVar12 + 0x2a);
          uVar7 = (ulong)*(byte *)(lVar12 + 0x29);
        }
        FUN_10038e8e0(param_3,"so_out%d%s = %sO[%d]%s;\n",uVar2,puVar5,uVar6,uVar14,
                      (&PTR_s__100bbc340)[uVar7]);
        uVar11 = *(uint *)(param_2 + 4);
      }
LAB_10037b8fb:
      uVar13 = uVar13 + 1;
      lVar15 = lVar15 + 0x10;
    } while (uVar13 < uVar11);
  }
  uVar11 = *(uint *)(param_2 + 0x20) >> 2;
  if (uVar11 != 0) {
    if (*(uint *)(param_2 + 0x20) >> 4 != 0) {
      FUN_10038e8e0(param_3,"for(int k = 0; k < %d; k++) so_pad4[k] = vec4(0);\n");
    }
    uVar11 = uVar11 & 3;
    if (uVar11 != 0) {
      uVar6 = FUN_1003a78b0(8,(1 << (sbyte)uVar11) + 0xffU & 0xff);
      FUN_10038e8e0(param_3,"so_pad = %s(0);\n",uVar6);
      return;
    }
  }
  return;
}

