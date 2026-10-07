
undefined8 * FUN_10084b660(long *param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  
  if (param_2 < 0x800000) {
    if ((*(byte *)((long)param_1 + 0x14) & 2) == 0) {
      puVar3 = (undefined8 *)FUN_10081ddd0(param_2 << 3,"bn_lib.c",0x12f);
      if (puVar3 != (undefined8 *)0x0) {
        puVar13 = (undefined8 *)*param_1;
        if (puVar13 == (undefined8 *)0x0) {
          return puVar3;
        }
        uVar6 = *(uint *)(param_1 + 1);
        uVar9 = (int)uVar6 >> 2;
        puVar5 = puVar3;
        if (0 < (int)uVar9) {
          uVar4 = ~uVar9;
          uVar10 = 0xfffffffe;
          if (-3 < (int)uVar4) {
            uVar10 = uVar4;
          }
          uVar1 = uVar9 + 1 + uVar10;
          puVar5 = puVar13;
          puVar11 = puVar3;
          if ((uVar9 + 2 + uVar10 & 3) != 0) {
            uVar10 = 0xfffffffe;
            if (-3 < (int)uVar4) {
              uVar10 = uVar4;
            }
            iVar8 = -(uVar9 + 2 + uVar10 & 3);
            do {
              uVar7 = puVar5[1];
              uVar12 = puVar5[2];
              uVar2 = puVar5[3];
              *puVar11 = *puVar5;
              puVar11[1] = uVar7;
              puVar11[2] = uVar12;
              puVar11[3] = uVar2;
              uVar9 = uVar9 - 1;
              puVar11 = puVar11 + 4;
              puVar5 = puVar5 + 4;
              iVar8 = iVar8 + 1;
            } while (iVar8 != 0);
          }
          if (2 < uVar1) {
            iVar8 = uVar9 + 1;
            do {
              uVar7 = puVar5[1];
              uVar12 = puVar5[2];
              uVar2 = puVar5[3];
              *puVar11 = *puVar5;
              puVar11[1] = uVar7;
              puVar11[2] = uVar12;
              puVar11[3] = uVar2;
              uVar7 = puVar5[5];
              uVar12 = puVar5[6];
              uVar2 = puVar5[7];
              puVar11[4] = puVar5[4];
              puVar11[5] = uVar7;
              puVar11[6] = uVar12;
              puVar11[7] = uVar2;
              uVar7 = puVar5[9];
              uVar12 = puVar5[10];
              uVar2 = puVar5[0xb];
              puVar11[8] = puVar5[8];
              puVar11[9] = uVar7;
              puVar11[10] = uVar12;
              puVar11[0xb] = uVar2;
              uVar7 = puVar5[0xd];
              uVar12 = puVar5[0xe];
              uVar2 = puVar5[0xf];
              puVar11[0xc] = puVar5[0xc];
              puVar11[0xd] = uVar7;
              puVar11[0xe] = uVar12;
              puVar11[0xf] = uVar2;
              iVar8 = iVar8 + -4;
              puVar5 = puVar5 + 0x10;
              puVar11 = puVar11 + 0x10;
            } while (1 < iVar8);
          }
          puVar13 = puVar13 + (ulong)uVar1 * 4 + 4;
          puVar5 = puVar3 + (ulong)uVar1 * 4 + 4;
        }
        uVar6 = uVar6 & 3;
        if (uVar6 != 1) {
          if (uVar6 != 2) {
            if (uVar6 != 3) {
              return puVar3;
            }
            puVar5[2] = puVar13[2];
          }
          puVar5[1] = puVar13[1];
        }
        *puVar5 = *puVar13;
        return puVar3;
      }
      uVar7 = 0x41;
      uVar12 = 0x131;
    }
    else {
      uVar7 = 0x69;
      uVar12 = 300;
    }
  }
  else {
    uVar7 = 0x72;
    uVar12 = 0x128;
  }
  FUN_100887ce0(3,0x78,uVar7,"bn_lib.c",uVar12);
  return (undefined8 *)0x0;
}

