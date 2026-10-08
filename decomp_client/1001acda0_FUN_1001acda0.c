
void FUN_1001acda0(long param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  int *piVar5;
  ulong uVar6;
  undefined *puVar7;
  char cVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  CScreenSaverBlocker *this;
  long lVar13;
  undefined8 *puVar14;
  int *piVar15;
  undefined4 uVar16;
  long lVar17;
  int *piVar18;
  long *plVar19;
  QString *pQVar20;
  long *plVar21;
  long *plVar22;
  undefined8 uVar23;
  QString local_b0;
  int *local_a8;
  QString *local_a0;
  QString *local_98;
  undefined4 local_90;
  int *local_88;
  int *local_80;
  int *local_78;
  undefined4 local_70;
  int *local_68;
  QString local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x18) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  lVar10 = FUN_10015a340();
  plVar3 = *(long **)(lVar10 + 0x180);
  local_58 = (Data *)*plVar3;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_58);
      lVar13 = (long)*(int *)(local_58 + 8);
      lVar10 = *plVar3;
      if (((Data *)(lVar10 + (long)*(int *)(lVar10 + 8) * 8) != local_58 + lVar13 * 8) &&
         (lVar17 = *(int *)(local_58 + 0xc) - lVar13,
         lVar17 != 0 && lVar13 <= *(int *)(local_58 + 0xc))) {
        _memcpy(local_58 + lVar13 * 8 + 0x10,
                (void *)(lVar10 + 0x10 + (long)*(int *)(lVar10 + 8) * 8),lVar17 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    plVar3 = (long *)(param_1 + 0x38);
    do {
      local_40 = 1;
      plVar4 = *(long **)local_50;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0xb8))(&local_60,plVar4);
        plVar11 = (long *)*plVar3;
        uVar1 = *(uint *)(plVar11 + 4);
        if (uVar1 != 0) {
          uVar9 = qHash(&local_60,*(uint *)((long)plVar11 + 0x24));
          uVar6 = (ulong)uVar9 % (ulong)uVar1;
          plVar22 = *(long **)(plVar11[1] + uVar6 * 8);
          if (plVar22 != plVar11) {
            plVar19 = (long *)(plVar11[1] + uVar6 * 8);
            do {
              plVar21 = plVar22;
              plVar12 = plVar11;
              if (*(uint *)(plVar22 + 1) == uVar9) {
                cVar8 = operator==(&local_60,(QString *)(plVar22 + 2));
                plVar11 = (long *)*plVar19;
                plVar21 = plVar11;
                plVar12 = (long *)*plVar3;
                if (cVar8 != '\0') break;
              }
              plVar11 = plVar12;
              plVar22 = (long *)*plVar21;
              plVar19 = plVar21;
              plVar12 = plVar11;
            } while (plVar22 != plVar11);
            if (plVar11 != plVar12) {
              uVar16 = 0;
              if (*(int *)((long)plVar12 + 0x14) != 0) {
                uVar1 = *(uint *)(plVar12 + 4);
                plVar11 = plVar12;
                if (uVar1 != 0) {
                  uVar9 = qHash(&local_60,*(uint *)((long)plVar12 + 0x24));
                  uVar6 = (ulong)uVar9 % (ulong)uVar1;
                  plVar22 = *(long **)(plVar12[1] + uVar6 * 8);
                  if (plVar22 != plVar12) {
                    plVar19 = (long *)(plVar12[1] + uVar6 * 8);
                    do {
                      plVar11 = plVar12;
                      if (*(uint *)(plVar22 + 1) == uVar9) {
                        cVar8 = operator==(&local_60,(QString *)(plVar22 + 2));
                        plVar12 = (long *)*plVar19;
                        plVar22 = plVar12;
                        plVar11 = (long *)*plVar3;
                        if (cVar8 != '\0') break;
                      }
                      plVar12 = plVar11;
                      plVar19 = plVar22;
                      plVar22 = (long *)*plVar19;
                      plVar11 = plVar12;
                    } while (plVar22 != plVar12);
                  }
                }
                uVar16 = 0;
                if (plVar12 != plVar11) {
                  uVar16 = (undefined4)plVar12[3];
                }
              }
              FUN_1001aa9e0(param_1,plVar4,uVar16);
              FUN_1001ae280(plVar3,&local_60);
            }
          }
        }
        if (*(int *)local_60.field0_0x0 != -1) {
          if (*(int *)local_60.field0_0x0 != 0) {
            LOCK();
            *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
            local_31 = *(int *)local_60.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001acfe8;
          }
          QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
        }
      }
LAB_1001acfe8:
      local_50 = local_50 + 8;
    } while (local_50 != local_48);
  }
  local_40 = 1;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001ad02b;
    }
    QListData::dispose(local_58);
  }
LAB_1001ad02b:
  local_68 = (int *)PTR_shared_null_1021e15e8;
  plVar3 = (long *)(param_1 + 0x40);
  local_88 = *(int **)(param_1 + 0x40);
  if (*local_88 != -1) {
    if (*local_88 == 0) {
      QListData::detach((int)&local_88);
      iVar2 = local_88[2];
      if (iVar2 != local_88[3]) {
        puVar14 = (undefined8 *)(*plVar3 + 0x10 + (long)*(int *)(*plVar3 + 8) * 8);
        piVar15 = local_88 + (long)iVar2 * 2 + 4;
        lVar10 = (long)local_88[3] * 8 + (long)iVar2 * -8;
        do {
          piVar18 = (int *)*puVar14;
          *(int **)piVar15 = piVar18;
          if (1 < *piVar18 + 1U) {
            LOCK();
            *piVar18 = *piVar18 + 1;
            local_31 = *piVar18 != 0;
            UNLOCK();
          }
          piVar15 = piVar15 + 2;
          puVar14 = puVar14 + 1;
          lVar10 = lVar10 + -8;
        } while (lVar10 != 0);
      }
    }
    else {
      LOCK();
      *local_88 = *local_88 + 1;
      local_31 = *local_88 != 0;
      UNLOCK();
    }
  }
  piVar15 = local_88 + (long)local_88[2] * 2 + 4;
  local_78 = local_88 + (long)local_88[3] * 2 + 4;
  local_80 = piVar15;
  if (local_88[2] != local_88[3]) {
    do {
      local_70 = 1;
      local_80 = piVar15;
      lVar10 = FUN_1001a9960(param_1,piVar15);
      if (lVar10 == 0) {
        FUN_1000341d0(&local_68,piVar15);
      }
      piVar15 = local_80 + 2;
      local_80 = piVar15;
    } while (piVar15 != local_78);
  }
  local_70 = 1;
  FUN_100039a80(&local_88);
  local_a8 = local_68;
  if (*local_68 != -1) {
    if (*local_68 == 0) {
      QListData::detach((int)&local_a8);
      iVar2 = local_a8[2];
      if (iVar2 != local_a8[3]) {
        piVar15 = local_68 + (long)local_68[2] * 2 + 4;
        piVar18 = local_a8 + (long)iVar2 * 2 + 4;
        lVar10 = (long)local_a8[3] * 8 + (long)iVar2 * -8;
        do {
          piVar5 = *(int **)piVar15;
          *(int **)piVar18 = piVar5;
          if (1 < *piVar5 + 1U) {
            LOCK();
            *piVar5 = *piVar5 + 1;
            local_31 = *piVar5 != 0;
            UNLOCK();
          }
          piVar18 = piVar18 + 2;
          piVar15 = piVar15 + 2;
          lVar10 = lVar10 + -8;
        } while (lVar10 != 0);
      }
    }
    else {
      LOCK();
      *local_68 = *local_68 + 1;
      local_31 = *local_68 != 0;
      UNLOCK();
    }
  }
  pQVar20 = (QString *)(local_a8 + (long)local_a8[2] * 2 + 4);
  local_98 = (QString *)(local_a8 + (long)local_a8[3] * 2 + 4);
  local_a0 = pQVar20;
  if (local_a8[2] != local_a8[3]) {
    do {
      local_90 = 1;
      local_a0 = pQVar20;
      if (((*(long *)(param_1 + 0x48) != 0) && (*(int *)(*(long *)(param_1 + 0x48) + 4) != 0)) &&
         (*(long *)(param_1 + 0x50) != 0)) {
        FUN_100382700(&local_b0);
        cVar8 = operator==(&local_b0,pQVar20);
        if (*(int *)local_b0.field0_0x0 != -1) {
          if (*(int *)local_b0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
            local_31 = *(int *)local_b0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001ad270;
          }
          QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
        }
LAB_1001ad270:
        if (cVar8 != '\0') {
          QWidget::close();
        }
      }
      FUN_1000e5580(plVar3,pQVar20);
      pQVar20 = local_a0 + 1;
      local_a0 = pQVar20;
    } while (pQVar20 != local_98);
  }
  local_90 = 1;
  FUN_100039a80(&local_a8);
  if (*(int *)(*plVar3 + 0xc) != *(int *)(*plVar3 + 8)) {
    FUN_1001ab820(param_1);
  }
  uVar23 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar23 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)
     ) {
    uVar23 = *(undefined8 *)(param_1 + 0x20);
  }
  cVar8 = FUN_1001b4190(uVar23);
  puVar7 = PTR_m_instance_1021e1420;
  this = *(CScreenSaverBlocker **)PTR_m_instance_1021e1420;
  if (cVar8 == '\0') {
    if (this == (CScreenSaverBlocker *)0x0) {
      this = operator_new(0x18);
      CScreenSaverBlocker::CScreenSaverBlocker(this);
      *(CScreenSaverBlocker **)puVar7 = this;
      DAT_10226c8a0 = 1;
    }
    CScreenSaverBlocker::removeBlocker(this,0);
  }
  else {
    if (this == (CScreenSaverBlocker *)0x0) {
      this = operator_new(0x18);
      CScreenSaverBlocker::CScreenSaverBlocker(this);
      *(CScreenSaverBlocker **)puVar7 = this;
      DAT_10226c8a0 = 1;
    }
    CScreenSaverBlocker::addBlocker(this,0);
  }
  FUN_100039a80(&local_68);
  return;
}

