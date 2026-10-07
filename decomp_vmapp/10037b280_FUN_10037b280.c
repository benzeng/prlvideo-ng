
void FUN_10037b280(long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  
  uVar9 = *(uint *)(param_2 + 4);
  if (uVar9 != 0) {
    lVar10 = 0xc;
    uVar12 = 0;
    do {
      iVar3 = *(int *)(*(long *)(param_2 + 8) + -8 + lVar10);
      uVar1 = iVar3 * 4 + 3;
      lVar4 = *(long *)(param_1 + 0x58);
      if ((ulong)uVar1 < (ulong)(*(long *)(param_1 + 0x60) - lVar4 >> 3)) {
        uVar11 = iVar3 << 2;
        bVar2 = *(byte *)(*(long *)(param_2 + 8) + lVar10);
        if ((((((bVar2 & 1) != 0) && (lVar13 = *(long *)(lVar4 + (ulong)uVar11 * 8), lVar13 != 0))
             || (((bVar2 & 2) != 0 &&
                 (lVar13 = *(long *)(lVar4 + (ulong)(uVar11 | 1) * 8), lVar13 != 0)))) ||
            (((bVar2 & 4) != 0 && (lVar13 = *(long *)(lVar4 + (ulong)(uVar11 | 2) * 8), lVar13 != 0)
             ))) || (((bVar2 & 8) != 0 &&
                     (lVar13 = *(long *)(lVar4 + (ulong)uVar1 * 8), lVar13 != 0)))) {
          lVar5 = *(long *)(lVar13 + 8);
          uVar7 = CONCAT71((uint7)(uint3)(uVar1 >> 8),8);
          if (lVar5 != 0) {
            puVar8 = (undefined1 *)(*(long *)(lVar5 + 0x80) + 0x48);
            if (*(long *)(lVar5 + 0x80) == 0) {
              puVar8 = (undefined1 *)(lVar5 + 0x7c);
            }
            uVar7 = CONCAT71((int7)((ulong)puVar8 >> 8),*puVar8);
          }
          uVar6 = FUN_1003a78b0(uVar7 & 0xff,*(undefined1 *)(lVar13 + 0x29),lVar4,uVar7);
          FUN_10038e8e0(param_3,"out %s so_out%d%s;\n",uVar6,*(undefined1 *)(lVar13 + 0x2a),
                        (&PTR_s__100bbc2c0)[*(byte *)(lVar13 + 0x29)]);
          uVar9 = *(uint *)(param_2 + 4);
        }
      }
      uVar12 = uVar12 + 1;
      lVar10 = lVar10 + 0x10;
    } while (uVar12 < uVar9);
  }
  uVar9 = *(uint *)(param_2 + 0x20) >> 2;
  if (uVar9 != 0) {
    if (*(uint *)(param_2 + 0x20) >> 4 != 0) {
      FUN_10038e8e0(param_3,"out vec4 so_pad4[%d];\n");
    }
    uVar9 = uVar9 & 3;
    if (uVar9 != 0) {
      uVar6 = FUN_1003a78b0(8,(1 << (sbyte)uVar9) + 0xffU & 0xff);
      FUN_10038e8e0(param_3,"out %s so_pad;\n",uVar6);
      return;
    }
  }
  return;
}

