
void FUN_1000fe720(undefined8 *param_1,long *param_2,QString *param_3,undefined4 param_4,
                  undefined1 param_5)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  QArrayData *pQVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  int *piVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  int *piVar20;
  ulong uVar21;
  
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_10226d590;
  puVar10 = PTR_shared_null_1021e1288;
  param_1[2] = PTR_shared_null_1021e1288;
  param_1[3] = puVar10;
  piVar11 = (int *)*param_2;
  if (piVar11 != (int *)puVar10) {
    if (*piVar11 == 0) {
      if (piVar11[2] < 0) {
        piVar11 = (int *)QArrayData::allocate(4,8,piVar11[2] & 0x7fffffff,0);
        if (piVar11 == (int *)0x0) {
          qBadAlloc();
        }
        *(byte *)((long)piVar11 + 0xb) = *(byte *)((long)piVar11 + 0xb) | 0x80;
        piVar20 = piVar11;
      }
      else {
        piVar11 = (int *)QArrayData::allocate(4,8,(long)piVar11[1],0);
        piVar20 = piVar11;
        if (piVar11 == (int *)0x0) {
          qBadAlloc();
          piVar20 = (int *)0x0;
        }
      }
      if ((piVar20[2] & 0x7fffffffU) != 0) {
        lVar3 = *param_2;
        iVar1 = *(int *)(lVar3 + 4);
        uVar18 = (ulong)iVar1;
        if ((uVar18 & 0x3fffffffffffffff) != 0) {
          lVar4 = *(long *)(lVar3 + 0x10);
          puVar14 = (undefined4 *)(lVar3 + lVar4);
          lVar5 = *(long *)(piVar20 + 4);
          puVar15 = (undefined4 *)((long)piVar20 + lVar5);
          uVar13 = uVar18 * 4 - 4;
          uVar17 = (uVar13 >> 2) + 1;
          uVar21 = uVar17 & 0x7ffffffffffffff8;
          if (uVar21 == 0) {
            uVar19 = 0;
          }
          else {
            uVar19 = 0;
            if ((lVar4 + uVar13 + lVar3 < (ulong)((long)piVar20 + lVar5)) ||
               ((undefined4 *)(uVar13 + lVar5 + (long)piVar20) < puVar14)) {
              puVar15 = puVar15 + uVar21;
              puVar14 = puVar14 + uVar21;
              puVar12 = (undefined8 *)(lVar5 + 0x10 + (long)piVar20);
              puVar16 = (undefined8 *)(lVar4 + 0x10 + lVar3);
              uVar13 = uVar17 & 0xfffffffffffffff8;
              do {
                uVar7 = puVar16[-1];
                uVar8 = *puVar16;
                uVar9 = puVar16[1];
                puVar12[-2] = puVar16[-2];
                puVar12[-1] = uVar7;
                *puVar12 = uVar8;
                puVar12[1] = uVar9;
                puVar12 = puVar12 + 4;
                puVar16 = puVar16 + 4;
                uVar13 = uVar13 - 8;
                uVar19 = uVar21;
              } while (uVar13 != 0);
            }
          }
          if (uVar17 != uVar19) {
            do {
              uVar2 = *puVar14;
              puVar14 = puVar14 + 1;
              *puVar15 = uVar2;
              puVar15 = puVar15 + 1;
            } while ((undefined4 *)(lVar3 + lVar4 + uVar18 * 4) != puVar14);
          }
        }
        piVar20[1] = iVar1;
      }
    }
    else if (*piVar11 != -1) {
      LOCK();
      *piVar11 = *piVar11 + 1;
      UNLOCK();
      piVar11 = (int *)*param_2;
    }
    pQVar6 = (QArrayData *)param_1[2];
    param_1[2] = piVar11;
    if (*(int *)pQVar6 != -1) {
      if (*(int *)pQVar6 != 0) {
        LOCK();
        *(int *)pQVar6 = *(int *)pQVar6 + -1;
        UNLOCK();
        if (*(int *)pQVar6 != 0) goto LAB_1000fe936;
      }
      QArrayData::deallocate(pQVar6,4,8);
    }
  }
LAB_1000fe936:
  QString::operator=((QString *)(param_1 + 3),param_3);
  *(undefined4 *)(param_1 + 4) = param_4;
  *(undefined1 *)((long)param_1 + 0x24) = param_5;
  return;
}

