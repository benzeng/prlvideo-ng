
undefined8 FUN_1008859e0(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  
  *(undefined4 *)(param_1 + 0x15) = 0;
  if ((ulong)param_1[5] <= (ulong)(param_1[7] << 8) / (ulong)*(uint *)(param_1 + 3)) {
    *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) + 1;
    param_1[8] = param_1[8] + 1;
    uVar6 = *(uint *)(param_1 + 4);
    uVar13 = (ulong)uVar6;
    *(uint *)(param_1 + 4) = uVar6 + 1;
    lVar8 = *param_1;
    uVar2 = *(uint *)((long)param_1 + 0x24);
    uVar9 = (ulong)(uVar2 + uVar6);
    *(undefined8 *)(lVar8 + uVar9 * 8) = 0;
    uVar3 = *(uint *)((long)param_1 + 0x1c);
    lVar11 = *(long *)(lVar8 + uVar13 * 8);
    if (lVar11 != 0) {
      plVar12 = (long *)(lVar8 + uVar13 * 8);
      do {
        while (*(ulong *)(lVar11 + 0x10) % (ulong)uVar3 != uVar13) {
          *plVar12 = *(long *)(lVar11 + 8);
          *(undefined8 *)(lVar11 + 8) = *(undefined8 *)(lVar8 + uVar9 * 8);
          *(long *)(lVar8 + uVar9 * 8) = lVar11;
          lVar11 = *plVar12;
          if (lVar11 == 0) goto LAB_100885aaf;
        }
        plVar12 = (long *)(lVar11 + 8);
        lVar11 = *plVar12;
      } while (lVar11 != 0);
    }
LAB_100885aaf:
    if (uVar2 <= uVar6 + 1) {
      lVar8 = FUN_10081df30(*param_1,uVar3 << 4,"lhash.c",0x150);
      if (lVar8 == 0) {
        *(int *)(param_1 + 0x15) = (int)param_1[0x15] + 1;
        *(undefined4 *)(param_1 + 4) = 0;
      }
      else {
        uVar3 = uVar3 * 2;
        uVar6 = *(uint *)((long)param_1 + 0x1c);
        if (uVar6 < uVar3) {
          ___bzero(lVar8 + (ulong)uVar6 * 8,(ulong)((uVar3 - 1) - uVar6) * 8 + 8);
          uVar6 = *(uint *)((long)param_1 + 0x1c);
        }
        *(uint *)((long)param_1 + 0x24) = uVar6;
        *(uint *)((long)param_1 + 0x1c) = uVar3;
        param_1[9] = param_1[9] + 1;
        *(undefined4 *)(param_1 + 4) = 0;
        *param_1 = lVar8;
      }
    }
  }
  uVar9 = (*(code *)param_1[2])(param_2);
  param_1[0xc] = param_1[0xc] + 1;
  uVar13 = uVar9 % (ulong)*(uint *)((long)param_1 + 0x24);
  iVar7 = (int)uVar13;
  if (uVar13 < *(uint *)(param_1 + 4)) {
    iVar7 = (int)(uVar9 % (ulong)*(uint *)((long)param_1 + 0x1c));
  }
  plVar12 = (long *)(*param_1 + (long)iVar7 * 8);
  puVar10 = *(undefined8 **)(*param_1 + (long)iVar7 * 8);
  if (puVar10 != (undefined8 *)0x0) {
    pcVar4 = (code *)param_1[1];
    do {
      param_1[0x14] = param_1[0x14] + 1;
      if (puVar10[2] == uVar9) {
        param_1[0xd] = param_1[0xd] + 1;
        iVar7 = (*pcVar4)(*puVar10,param_2);
        if (iVar7 == 0) {
          puVar10 = (undefined8 *)*plVar12;
          if (puVar10 != (undefined8 *)0x0) {
            uVar5 = *puVar10;
            *puVar10 = param_2;
            param_1[0xf] = param_1[0xf] + 1;
            return uVar5;
          }
          break;
        }
      }
      puVar1 = puVar10 + 1;
      plVar12 = puVar10 + 1;
      puVar10 = (undefined8 *)*puVar1;
    } while ((undefined8 *)*puVar1 != (undefined8 *)0x0);
  }
  puVar10 = (undefined8 *)FUN_10081ddd0(0x18,"lhash.c",0xbf);
  if (puVar10 == (undefined8 *)0x0) {
    *(int *)(param_1 + 0x15) = (int)param_1[0x15] + 1;
  }
  else {
    *puVar10 = param_2;
    puVar10[1] = 0;
    puVar10[2] = uVar9;
    *plVar12 = (long)puVar10;
    param_1[0xe] = param_1[0xe] + 1;
    param_1[7] = param_1[7] + 1;
  }
  return 0;
}

