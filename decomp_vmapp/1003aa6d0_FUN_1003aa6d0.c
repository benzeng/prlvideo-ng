
void FUN_1003aa6d0(long param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  int iVar9;
  undefined4 *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  *(byte *)(param_1 + 0x39) = *(byte *)(param_1 + 0x39) | 1;
  *(undefined1 *)(param_1 + 0x38) = 4;
  if (param_3 != 0) {
    if (param_3 == 1) {
      uVar1 = *param_2;
      *(undefined4 *)(param_1 + 0x28) = uVar1;
      *(undefined4 *)(param_1 + 0x2c) = uVar1;
      *(undefined4 *)(param_1 + 0x30) = uVar1;
      *(undefined4 *)(param_1 + 0x34) = uVar1;
    }
    else {
      uVar11 = (ulong)(param_3 - 1);
      uVar12 = uVar11 + 1 & 0x1fffffff8;
      uVar6 = 0;
      if ((uVar12 != 0) &&
         ((param_2 + uVar11 < (undefined4 *)(param_1 + 0x28U) ||
          (uVar6 = 0, (undefined4 *)(param_1 + 0x28 + uVar11 * 4) < param_2)))) {
        puVar5 = (undefined8 *)(param_1 + 0x38);
        puVar7 = (undefined8 *)(param_2 + 4);
        uVar13 = uVar11 + 1 & 0xfffffffffffffff8;
        do {
          uVar2 = puVar7[-1];
          uVar3 = *puVar7;
          uVar4 = puVar7[1];
          puVar5[-2] = puVar7[-2];
          puVar5[-1] = uVar2;
          *puVar5 = uVar3;
          puVar5[1] = uVar4;
          puVar5 = puVar5 + 4;
          puVar7 = puVar7 + 4;
          uVar13 = uVar13 - 8;
          uVar6 = uVar12;
        } while (uVar13 != 0);
      }
      if (uVar11 + 1 != uVar6) {
        iVar9 = (int)uVar6;
        if ((param_3 & 3) != 0) {
          lVar8 = 0;
          do {
            *(undefined4 *)(param_1 + 0x28 + uVar6 * 4 + lVar8 * 4) = param_2[uVar6 + lVar8];
            lVar8 = lVar8 + 1;
          } while ((param_3 & 3) != (uint)lVar8);
          uVar6 = uVar6 + lVar8;
        }
        if (2 < (param_3 - 1) - iVar9) {
          param_2 = param_2 + uVar6 + 3;
          puVar10 = (undefined4 *)(param_1 + 0x34 + uVar6 * 4);
          iVar9 = (param_3 + 3) - ((int)uVar6 + 3);
          do {
            puVar10[-3] = param_2[-3];
            puVar10[-2] = param_2[-2];
            puVar10[-1] = param_2[-1];
            *puVar10 = *param_2;
            param_2 = param_2 + 4;
            puVar10 = puVar10 + 4;
            iVar9 = iVar9 + -4;
          } while (iVar9 != 0);
        }
      }
    }
  }
  return;
}

