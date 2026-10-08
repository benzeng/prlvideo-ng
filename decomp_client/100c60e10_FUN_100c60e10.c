
undefined8 FUN_100c60e10(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  
  *(undefined4 *)(param_1 + 0x15) = 0;
  uVar8 = (*(code *)param_1[2])(param_2);
  param_1[0xc] = param_1[0xc] + 1;
  uVar11 = uVar8 % (ulong)*(uint *)((long)param_1 + 0x24);
  iVar7 = (int)uVar11;
  if (uVar11 < *(uint *)(param_1 + 4)) {
    iVar7 = (int)(uVar8 % (ulong)*(uint *)((long)param_1 + 0x1c));
  }
  puVar13 = *(undefined8 **)(*param_1 + (long)iVar7 * 8);
  if (puVar13 != (undefined8 *)0x0) {
    pcVar3 = (code *)param_1[1];
    plVar12 = (long *)(*param_1 + (long)iVar7 * 8);
    do {
      param_1[0x14] = param_1[0x14] + 1;
      if (puVar13[2] == uVar8) {
        param_1[0xd] = param_1[0xd] + 1;
        iVar7 = (*pcVar3)(*puVar13,param_2);
        if (iVar7 == 0) {
          puVar13 = (undefined8 *)*plVar12;
          if (puVar13 != (undefined8 *)0x0) {
            *plVar12 = puVar13[1];
            uVar4 = *puVar13;
            FUN_100bf3910();
            param_1[0x10] = param_1[0x10] + 1;
            lVar9 = param_1[7];
            param_1[7] = lVar9 + -1;
            uVar10 = *(uint *)(param_1 + 3);
            if ((ulong)uVar10 < 0x11) {
              return uVar4;
            }
            if ((ulong)param_1[6] < (ulong)((lVar9 + -1) * 0x100) / (ulong)uVar10) {
              return uVar4;
            }
            iVar7 = (int)param_1[4];
            iVar2 = *(int *)((long)param_1 + 0x24);
            uVar8 = (ulong)(uint)(iVar7 + -1 + iVar2);
            uVar5 = *(undefined8 *)(*param_1 + uVar8 * 8);
            *(undefined8 *)(*param_1 + uVar8 * 8) = 0;
            if (iVar7 == 0) {
              lVar9 = FUN_100bf36a0(*param_1,iVar2 << 3,"lhash.c",0x16b);
              if (lVar9 == 0) {
                *(int *)(param_1 + 0x15) = (int)param_1[0x15] + 1;
                return uVar4;
              }
              param_1[0xb] = param_1[0xb] + 1;
              *(uint *)((long)param_1 + 0x1c) = *(uint *)((long)param_1 + 0x1c) >> 1;
              uVar10 = *(uint *)((long)param_1 + 0x24) >> 1;
              *(uint *)((long)param_1 + 0x24) = uVar10;
              iVar7 = uVar10 - 1;
              *(int *)(param_1 + 4) = iVar7;
              *param_1 = lVar9;
              uVar10 = *(uint *)(param_1 + 3);
            }
            else {
              iVar7 = iVar7 + -1;
              *(int *)(param_1 + 4) = iVar7;
              lVar9 = *param_1;
            }
            *(uint *)(param_1 + 3) = uVar10 - 1;
            param_1[10] = param_1[10] + 1;
            lVar6 = *(long *)(lVar9 + (long)iVar7 * 8);
            if (lVar6 != 0) {
              do {
                lVar9 = lVar6;
                lVar6 = *(long *)(lVar9 + 8);
              } while (lVar6 != 0);
              *(undefined8 *)(lVar9 + 8) = uVar5;
              return uVar4;
            }
            *(undefined8 *)(lVar9 + (long)iVar7 * 8) = uVar5;
            return uVar4;
          }
          break;
        }
      }
      puVar1 = puVar13 + 1;
      plVar12 = puVar13 + 1;
      puVar13 = (undefined8 *)*puVar1;
    } while ((undefined8 *)*puVar1 != (undefined8 *)0x0);
  }
  param_1[0x11] = param_1[0x11] + 1;
  return 0;
}

