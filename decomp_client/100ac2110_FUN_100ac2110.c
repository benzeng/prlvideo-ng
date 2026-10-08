
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ac2110(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  uint *puVar9;
  uint uVar10;
  ulong uVar11;
  uint *puVar12;
  uint uVar13;
  ulong uVar14;
  
  FUN_100ac2270(param_2,*param_1,param_1[1]);
  uVar6 = _UNK_101cd728c;
  uVar5 = _UNK_101cd7288;
  uVar13 = _UNK_101cd7284;
  uVar10 = _DAT_101cd7280;
  if (*(int *)(param_1 + 4) == 3) {
    lVar3 = *param_2;
    lVar4 = param_2[1];
    if (lVar4 != lVar3) {
      uVar8 = 0;
      do {
        bVar2 = *(byte *)(lVar3 + 3 + uVar8);
        if ((((0x13 < bVar2) && (uVar10 = (uint)*(byte *)(lVar3 + 2 + uVar8), 0xde < uVar10)) &&
            (uVar13 = (uint)*(byte *)(lVar3 + 1 + uVar8), 0xde < uVar13)) &&
           (0xde < *(byte *)(lVar3 + uVar8))) {
          *(uint *)(lVar3 + uVar8) =
               *(byte *)(lVar3 + uVar8) - 0x33 |
               (((uint)bVar2 << 8 | uVar10 + 0xffcd) << 8 | uVar13 + 0xffffcd) << 8;
        }
        uVar8 = uVar8 + 4;
      } while (uVar8 < (ulong)(lVar4 - lVar3));
    }
  }
  else if (*(int *)(param_1 + 4) == 1) {
    puVar9 = (uint *)*param_2;
    uVar8 = param_2[1] - (long)puVar9 & 0xfffffffffffffffc;
    puVar1 = (uint *)((long)puVar9 + uVar8);
    if (puVar9 < puVar1) {
      uVar11 = (uVar8 - 1 >> 2) + 1;
      uVar14 = uVar11 & 0x7ffffffffffffff8;
      uVar8 = 0;
      puVar12 = puVar9;
      if (uVar14 != 0) {
        puVar12 = puVar9 + uVar14;
        puVar9 = puVar9 + 4;
        uVar7 = uVar11 & 0xfffffffffffffff8;
        do {
          puVar9[-4] = puVar9[-4] ^ uVar10;
          puVar9[-3] = puVar9[-3] ^ uVar13;
          puVar9[-2] = puVar9[-2] ^ uVar5;
          puVar9[-1] = puVar9[-1] ^ uVar6;
          *puVar9 = *puVar9 ^ uVar10;
          puVar9[1] = puVar9[1] ^ uVar13;
          puVar9[2] = puVar9[2] ^ uVar5;
          puVar9[3] = puVar9[3] ^ uVar6;
          puVar9 = puVar9 + 8;
          uVar7 = uVar7 - 8;
          uVar8 = uVar14;
        } while (uVar7 != 0);
      }
      if (uVar11 != uVar8) {
        do {
          *puVar12 = *puVar12 ^ 0xffffff;
          puVar12 = puVar12 + 1;
        } while (puVar12 < puVar1);
      }
    }
  }
  return;
}

