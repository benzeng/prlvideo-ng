
undefined8 FUN_1008a2310(int param_1,long *param_2)

{
  int *piVar1;
  byte *pbVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  byte bVar14;
  int iVar15;
  int local_34;
  
  param_2 = (long *)*param_2;
  if (param_1 == 5) {
    uVar7 = FUN_100891760();
    FUN_1008bf4a0(param_2,uVar7,param_2 + 9,0);
    puVar8 = (undefined8 *)FUN_1008bc670(param_2,0x302,0,0);
    param_2[5] = (long)puVar8;
    if (puVar8 != (undefined8 *)0x0) {
      uVar13 = *(uint *)(param_2 + 6);
      uVar12 = uVar13 | 1;
      *(uint *)(param_2 + 6) = uVar12;
      iVar4 = *(int *)(puVar8 + 1);
      if (0 < iVar4) {
        uVar12 = uVar13 | 5;
        *(uint *)(param_2 + 6) = uVar12;
      }
      bVar14 = 0 < iVar4;
      if (0 < *(int *)((long)puVar8 + 0xc)) {
        bVar14 = bVar14 + 1;
        uVar12 = uVar12 | 8;
        *(uint *)(param_2 + 6) = uVar12;
      }
      if (0 < *(int *)((long)puVar8 + 0x1c)) {
        bVar14 = bVar14 + 1;
        uVar12 = uVar12 | 0x10;
        *(uint *)(param_2 + 6) = uVar12;
      }
      if (1 < bVar14) {
        uVar12 = uVar12 | 2;
        *(uint *)(param_2 + 6) = uVar12;
      }
      if (0 < *(int *)(puVar8 + 3)) {
        uVar12 = uVar12 | 0x20;
        *(uint *)(param_2 + 6) = uVar12;
      }
      piVar1 = (int *)puVar8[2];
      if (piVar1 != (int *)0x0) {
        *(uint *)(param_2 + 6) = uVar12 | 0x40;
        iVar4 = *piVar1;
        if (iVar4 < 1) {
          uVar13 = *(uint *)((long)param_2 + 0x34);
        }
        else {
          pbVar2 = *(byte **)(piVar1 + 2);
          bVar14 = *pbVar2;
          uVar13 = (uint)bVar14;
          *(uint *)((long)param_2 + 0x34) = (uint)bVar14;
          if (1 < iVar4) {
            uVar13 = (uint)CONCAT11(pbVar2[1],bVar14);
            *(uint *)((long)param_2 + 0x34) = uVar13;
          }
        }
        *(uint *)((long)param_2 + 0x34) = uVar13 & 0x807f;
      }
      FUN_1008c9510(*puVar8,*(undefined8 *)(*param_2 + 0x10));
    }
    lVar9 = FUN_1008bc670(param_2,0x5a,0,0);
    param_2[4] = lVar9;
    lVar9 = FUN_1008bc670(param_2,0x58,0,0);
    param_2[7] = lVar9;
    lVar9 = FUN_1008bc670(param_2,0x8c,0,0);
    param_2[8] = lVar9;
    if ((lVar9 != 0) && (param_2[7] == 0)) {
      *(byte *)((long)param_2 + 0x1c) = *(byte *)((long)param_2 + 0x1c) | 0x80;
    }
    uVar7 = *(undefined8 *)(*param_2 + 0x30);
    iVar4 = FUN_100885600(uVar7);
    if (0 < iVar4) {
      iVar4 = 0;
      do {
        puVar8 = (undefined8 *)FUN_100885620(uVar7,iVar4);
        iVar5 = FUN_100821ab0(*puVar8);
        if (iVar5 == 0x359) {
          *(byte *)((long)param_2 + 0x1d) = *(byte *)((long)param_2 + 0x1d) | 0x10;
        }
        if (0 < *(int *)(puVar8 + 1)) {
          if (((iVar5 != 0x5a) && (iVar5 != 0x8c)) && (iVar5 != 0x302)) {
            *(byte *)((long)param_2 + 0x1d) = *(byte *)((long)param_2 + 0x1d) | 2;
          }
          break;
        }
        iVar4 = iVar4 + 1;
        iVar5 = FUN_100885600(uVar7);
      } while (iVar4 < iVar5);
    }
    uVar7 = *(undefined8 *)(*param_2 + 0x28);
    iVar4 = FUN_100885600(uVar7);
    if (0 < iVar4) {
      iVar4 = 0;
      lVar9 = 0;
      do {
        lVar10 = FUN_100885620(uVar7,iVar4);
        lVar11 = FUN_1008bc870(lVar10,0x303,&local_34,0);
        if ((lVar11 == 0) && (local_34 != -1)) {
LAB_1008a2701:
          *(byte *)((long)param_2 + 0x1c) = *(byte *)((long)param_2 + 0x1c) | 0x80;
          break;
        }
        if (lVar11 != 0) {
          lVar9 = param_2[0xc];
          if (lVar9 == 0) {
            lVar9 = FUN_100884e10();
            param_2[0xc] = lVar9;
            if (lVar9 == 0) {
              return 0;
            }
          }
          iVar5 = FUN_1008852e0(lVar9,lVar11);
          lVar9 = lVar11;
          if (iVar5 == 0) {
            return 0;
          }
        }
        *(long *)(lVar10 + 0x18) = lVar9;
        lVar11 = FUN_1008bc870(lVar10,0x8d,&local_34,0);
        if ((lVar11 == 0) && (local_34 != -1)) goto LAB_1008a2701;
        if (lVar11 == 0) {
          *(undefined4 *)(lVar10 + 0x20) = 0xffffffff;
        }
        else {
          uVar6 = FUN_10089cb20(lVar11);
          *(undefined4 *)(lVar10 + 0x20) = uVar6;
          FUN_1008a82a0(lVar11);
        }
        uVar3 = *(undefined8 *)(lVar10 + 0x10);
        local_34 = 0;
        iVar5 = FUN_100885600(uVar3);
        if (0 < iVar5) {
          do {
            puVar8 = (undefined8 *)FUN_100885620(uVar3,local_34);
            if ((0 < *(int *)(puVar8 + 1)) && (iVar5 = FUN_100821ab0(*puVar8), iVar5 != 0x303)) {
              *(byte *)((long)param_2 + 0x1d) = *(byte *)((long)param_2 + 0x1d) | 2;
              break;
            }
            iVar15 = local_34 + 1;
            local_34 = iVar15;
            iVar5 = FUN_100885600(uVar3);
          } while (iVar15 < iVar5);
        }
        iVar4 = iVar4 + 1;
        iVar5 = FUN_100885600(uVar7);
      } while (iVar4 < iVar5);
    }
    if ((*(code **)(param_2[0xd] + 8) != (code *)0x0) &&
       (iVar4 = (**(code **)(param_2[0xd] + 8))(), iVar4 == 0)) {
      return 0;
    }
  }
  else if (param_1 == 3) {
    if ((*(code **)(param_2[0xd] + 0x10) != (code *)0x0) &&
       (iVar4 = (**(code **)(param_2[0xd] + 0x10))(param_2), iVar4 == 0)) {
      return 0;
    }
    if (param_2[4] != 0) {
      FUN_1008cb930();
    }
    if (param_2[5] != 0) {
      FUN_1008c90e0();
    }
    FUN_1008a8220(param_2[7]);
    FUN_1008a8220(param_2[8]);
    FUN_100885590(param_2[0xc],FUN_1008c5460);
  }
  else if (param_1 == 1) {
    *(undefined8 *)((long)param_2 + 0x2c) = 0;
    *(undefined8 *)((long)param_2 + 0x24) = 0;
    *(undefined8 *)((long)param_2 + 0x1c) = 0;
    *(undefined4 *)((long)param_2 + 0x34) = 0x807f;
    param_2[0xd] = (long)PTR_DAT_1011af820;
    param_2[0xe] = 0;
    param_2[0xc] = 0;
    param_2[8] = 0;
    param_2[7] = 0;
  }
  return 1;
}

