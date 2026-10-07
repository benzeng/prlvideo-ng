
void FUN_10036b170(undefined8 param_1,int param_2,undefined4 param_3,uint param_4,uint *param_5,
                  uint *param_6,undefined1 *param_7)

{
  ushort uVar1;
  uint uVar2;
  ushort uVar3;
  uint *puVar4;
  uint *puVar5;
  undefined1 uVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  undefined1 uVar12;
  
  puVar7 = (uint *)(*DAT_1011c64b0)(0x8893,param_3,param_4 * param_2);
  if (param_2 == 2) {
    lVar9 = (ulong)param_4 * 2;
    uVar11 = 0;
    puVar5 = puVar7;
    uVar6 = 0;
    do {
      uVar12 = uVar6;
      puVar8 = puVar5;
      uVar10 = uVar11;
      if (lVar9 == 0) goto LAB_10036b2ca;
      uVar1 = (ushort)*puVar8;
      uVar10 = (uint)uVar1;
      lVar9 = lVar9 + -2;
      uVar11 = 0xffff;
      puVar5 = (uint *)((long)puVar8 + 2);
      uVar6 = 1;
    } while (uVar1 == 0xffff);
    uVar11 = (uint)uVar1;
    while (puVar4 = puVar5, puVar4 != (uint *)((long)puVar7 + (ulong)param_4 * 2)) {
      uVar1 = (ushort)*puVar4;
      if (uVar1 == 0xffff) {
        uVar12 = 1;
      }
      else {
        uVar3 = uVar1;
        if (uVar1 <= uVar10) {
          uVar3 = (ushort)uVar10;
        }
        uVar10 = (uint)uVar3;
        if (uVar1 < uVar11) {
          uVar11 = (uint)uVar1;
        }
      }
      puVar5 = puVar8 + 1;
      puVar8 = puVar4;
    }
LAB_10036b2ca:
    *param_5 = uVar11;
  }
  else {
    lVar9 = (ulong)param_4 << 2;
    uVar11 = 0;
    puVar5 = puVar7;
    uVar6 = 0;
    do {
      uVar12 = uVar6;
      puVar8 = puVar5;
      uVar10 = uVar11;
      if (lVar9 == 0) goto LAB_10036b2d7;
      uVar10 = *puVar8;
      lVar9 = lVar9 + -4;
      uVar11 = 0xffffffff;
      puVar5 = puVar8 + 1;
      uVar6 = 1;
      uVar2 = uVar10;
    } while (uVar10 == 0xffffffff);
    while (puVar4 = puVar5, uVar11 = uVar2, puVar4 != puVar7 + param_4) {
      uVar2 = *puVar4;
      if (uVar2 == 0xffffffff) {
        uVar12 = 1;
      }
      else {
        if (uVar10 < uVar2) {
          uVar10 = uVar2;
        }
        if (uVar2 < uVar11) {
          uVar11 = uVar2;
        }
      }
      uVar2 = uVar11;
      puVar5 = puVar8 + 2;
      puVar8 = puVar4;
    }
LAB_10036b2d7:
    *param_5 = uVar11;
  }
  *param_6 = uVar10;
  *param_7 = uVar12;
                    /* WARNING: Could not recover jumptable at 0x00010036b2ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1011c6ed0)(0x8893);
  return;
}

