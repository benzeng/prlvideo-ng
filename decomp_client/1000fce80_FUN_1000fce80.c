
void FUN_1000fce80(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  QMapNodeBase *pQVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int *piVar10;
  QMapNodeBase *pQVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  QArrayData *pQVar15;
  undefined8 uVar16;
  QMapNodeBase *pQVar17;
  long lVar18;
  QArrayData *pQVar19;
  uint uVar20;
  QArrayData *pQVar21;
  ulong uVar22;
  int iVar23;
  QArrayData *pQVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  int *piVar28;
  ulong uVar29;
  QArrayData *pQVar30;
  QArrayData *local_90;
  QArrayData *local_78;
  QString local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QMapNodeBase *local_48;
  undefined8 local_40;
  undefined1 local_31;
  
  local_48 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
  piVar28 = &DAT_102311ef8;
  uVar29 = 0;
  do {
    iVar3 = (&DAT_102311ef4)[uVar29 * 9];
    piVar10 = piVar28;
    local_50 = (QArrayData *)PTR_shared_null_1021e1288;
    pQVar30 = (QArrayData *)PTR_shared_null_1021e1288;
    while (iVar3 != 0) {
      iVar23 = *(int *)(pQVar30 + 4);
      uVar12 = iVar23 + 1;
      uVar20 = *(uint *)(pQVar30 + 8) & 0x7fffffff;
      if ((*(uint *)pQVar30 < 2) && (uVar12 <= uVar20)) {
        *(int *)(pQVar30 + (long)iVar23 * 4 + *(long *)(pQVar30 + 0x10)) = iVar3;
      }
      else {
        uVar7 = uVar20;
        if (uVar20 < uVar12) {
          uVar7 = uVar12;
        }
        FUN_1000e7fd0(&local_50,iVar23,uVar7,(ulong)(uVar20 < uVar12) << 3);
        *(int *)(local_50 + (long)*(int *)(local_50 + 4) * 4 + *(long *)(local_50 + 0x10)) = iVar3;
        iVar23 = *(int *)(local_50 + 4);
        pQVar30 = local_50;
      }
      *(int *)(pQVar30 + 4) = iVar23 + 1;
      iVar3 = *piVar10;
      piVar10 = piVar10 + 1;
    }
    if (1 < *(uint *)local_48) {
      FUN_1000ff180(&local_48);
    }
    if (*(long *)(local_48 + 0x10) == 0) {
LAB_1000fd00f:
      local_40 = 0;
      lVar13 = FUN_1000ff080(&local_48,&DAT_102311ef0 + uVar29 * 0x24,&local_40);
    }
    else {
      uVar12 = *(uint *)(&DAT_102311ef0 + uVar29 * 0x24);
      lVar5 = *(long *)(local_48 + 0x10);
      lVar18 = 0;
      do {
        while (lVar13 = lVar5, uVar20 = *(uint *)(lVar13 + 0x18), uVar12 <= uVar20) {
          lVar5 = *(long *)(lVar13 + 8);
          lVar18 = lVar13;
          if (*(long *)(lVar13 + 8) == 0) goto LAB_1000fd00b;
        }
        lVar5 = *(long *)(lVar13 + 0x10);
      } while (*(long *)(lVar13 + 0x10) != 0);
      if (lVar18 == 0) goto LAB_1000fd00f;
      uVar20 = *(uint *)(lVar18 + 0x18);
      lVar13 = lVar18;
LAB_1000fd00b:
      if (uVar12 < uVar20) goto LAB_1000fd00f;
    }
    plVar14 = operator_new(0x28);
    if (*(int *)pQVar30 == 0) {
      if ((int)*(uint *)(pQVar30 + 8) < 0) {
        local_90 = (QArrayData *)QArrayData::allocate(4,8,*(uint *)(pQVar30 + 8) & 0x7fffffff,0);
        local_58 = local_90;
        if (local_90 == (QArrayData *)0x0) {
          qBadAlloc();
        }
        local_90[0xb] = (QArrayData)((byte)local_90[0xb] | 0x80);
        local_78 = local_90;
      }
      else {
        local_90 = (QArrayData *)QArrayData::allocate(4,8,(long)*(int *)(pQVar30 + 4),0);
        local_78 = local_90;
        local_58 = local_90;
        if (local_90 == (QArrayData *)0x0) {
          qBadAlloc();
          local_78 = (QArrayData *)0x0;
        }
      }
      if ((*(uint *)(local_78 + 8) & 0x7fffffff) != 0) {
        iVar3 = *(int *)(pQVar30 + 4);
        uVar26 = (ulong)iVar3;
        if ((uVar26 & 0x3fffffffffffffff) != 0) {
          lVar5 = *(long *)(pQVar30 + 0x10);
          pQVar19 = pQVar30 + lVar5;
          lVar18 = *(long *)(local_78 + 0x10);
          pQVar21 = local_78 + lVar18;
          uVar22 = uVar26 * 4 - 4;
          uVar25 = (uVar22 >> 2) + 1;
          uVar27 = uVar25 & 0x7ffffffffffffff8;
          if (uVar27 == 0) {
            uVar27 = 0;
          }
          else if ((pQVar30 + lVar5 + uVar22 < local_78 + lVar18) ||
                  (local_78 + uVar22 + lVar18 < pQVar19)) {
            pQVar21 = pQVar21 + uVar27 * 4;
            pQVar19 = pQVar19 + uVar27 * 4;
            pQVar15 = local_78 + lVar18 + 0x10;
            pQVar24 = pQVar30 + lVar5 + 0x10;
            uVar22 = uVar25 & 0xfffffffffffffff8;
            do {
              uVar16 = *(undefined8 *)(pQVar24 + -8);
              uVar8 = *(undefined8 *)pQVar24;
              uVar9 = *(undefined8 *)(pQVar24 + 8);
              *(undefined8 *)(pQVar15 + -0x10) = *(undefined8 *)(pQVar24 + -0x10);
              *(undefined8 *)(pQVar15 + -8) = uVar16;
              *(undefined8 *)pQVar15 = uVar8;
              *(undefined8 *)(pQVar15 + 8) = uVar9;
              pQVar15 = pQVar15 + 0x20;
              pQVar24 = pQVar24 + 0x20;
              uVar22 = uVar22 - 8;
            } while (uVar22 != 0);
          }
          else {
            uVar27 = 0;
          }
          if (uVar25 != uVar27) {
            do {
              uVar4 = *(undefined4 *)pQVar19;
              pQVar19 = pQVar19 + 4;
              *(undefined4 *)pQVar21 = uVar4;
              pQVar21 = pQVar21 + 4;
            } while (pQVar30 + lVar5 + uVar26 * 4 != pQVar19);
          }
        }
        *(int *)(local_78 + 4) = iVar3;
      }
    }
    else {
      local_90 = pQVar30;
      local_78 = pQVar30;
      local_58 = pQVar30;
      if (*(int *)pQVar30 != -1) {
        LOCK();
        *(int *)pQVar30 = *(int *)pQVar30 + 1;
        local_31 = *(int *)pQVar30 != 0;
        UNLOCK();
      }
    }
    QString::QString(&local_60,*(undefined4 *)(&DAT_102311f08 + uVar29 * 0x24));
    FUN_1000fe720(plVar14,&local_58,&local_60,*(undefined4 *)(&DAT_102311f0c + uVar29 * 0x24));
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    plVar6 = *(long **)(lVar13 + 0x20);
    *(long **)(lVar13 + 0x20) = plVar14;
    if (plVar6 != (long *)0x0) {
      LOCK();
      plVar1 = plVar6 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)(*plVar6 + 0x10))();
      }
    }
    LOCK();
    plVar6 = plVar14 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_31 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000fd2b9;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
LAB_1000fd2b9:
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 == 0) {
        local_90 = local_78;
      }
      else {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000fd304;
      }
      QArrayData::deallocate(local_90,4,8);
    }
LAB_1000fd304:
    if (*(int *)pQVar30 != -1) {
      if (*(int *)pQVar30 != 0) {
        LOCK();
        *(int *)pQVar30 = *(int *)pQVar30 + -1;
        local_31 = *(int *)pQVar30 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000fd331;
      }
      QArrayData::deallocate(pQVar30,4,8);
    }
LAB_1000fd331:
    uVar29 = uVar29 + 1;
    piVar28 = piVar28 + 9;
    if (10 < uVar29) {
      FUN_1000fd580(param_1,&local_48);
      uVar16 = FUN_1000fe380(param_1 + 0x20,param_2);
      FUN_1000fe4e0(uVar16,&local_48);
      pQVar11 = local_48;
      if (*(long *)(local_48 + 0x10) != 0) {
        pQVar2 = local_48 + 8;
        pQVar17 = *(QMapNodeBase **)(local_48 + 0x20);
        while (pQVar17 != pQVar2) {
          lVar5 = *(long *)(pQVar17 + 0x20);
          FUN_1000fa130(param_3,*(undefined4 *)(pQVar17 + 0x18),lVar5 + 0x18,
                        *(undefined4 *)(lVar5 + 0x20),*(undefined1 *)(lVar5 + 0x24));
          pQVar17 = (QMapNodeBase *)QMapNodeBase::nextNode();
        }
      }
      if (*(int *)pQVar11 != -1) {
        if (*(int *)pQVar11 != 0) {
          LOCK();
          *(int *)pQVar11 = *(int *)pQVar11 + -1;
          local_31 = *(int *)pQVar11 != 0;
          UNLOCK();
          if ((bool)local_31) {
            return;
          }
        }
        if (*(long *)(pQVar11 + 0x10) != 0) {
          FUN_1000e5b20();
          QMapDataBase::freeTree(pQVar11,(int)*(undefined8 *)(pQVar11 + 0x10));
        }
        QMapDataBase::freeData((QMapDataBase *)pQVar11);
      }
      return;
    }
  } while( true );
}

