
int FUN_1004d93e0(long param_1,undefined8 *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  long *plVar8;
  undefined **ppuVar9;
  QFileInfo local_d0 [8];
  QArrayData *local_c8;
  QString local_c0;
  QArrayData *local_b8;
  long *local_b0;
  QString local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  QString local_88;
  undefined4 local_80;
  undefined1 local_79;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  uint local_40;
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_88.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_2;
  if (1 < *(int *)local_88.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + 1;
    UNLOCK();
  }
  local_90 = DAT_100b45130;
  local_98 = DAT_100b45128;
  local_a0 = DAT_100b45120;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_40 = 0;
  local_48 = 0;
  local_38 = lVar2;
  QString::toUtf8_helper(&local_a8);
  iVar7 = _getattrlist((char *)(local_a8.field0_0x0 + *(long *)(local_a8.field0_0x0 + 0x10)),
                       &local_a0,&local_78,0x3c,9);
  if (*(int *)local_a8.field0_0x0 != -1) {
    if (*(int *)local_a8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
      local_79 = *(int *)local_a8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_79) goto LAB_1004d94d7;
    }
    QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,1,8);
  }
LAB_1004d94d7:
  uVar5 = local_40;
  if (iVar7 == 0) {
    if (((local_40 & 0xf000) == 0xa000) || ((local_58 & 0x80) != 0)) {
      plVar8 = operator_new(0x40);
      FUN_1004e5bf0(plVar8,&local_88,param_1);
LAB_1004d96e8:
      ppuVar9 = &PTR_FUN_100bc34a8;
LAB_1004d96ef:
      *plVar8 = (long)ppuVar9;
    }
    else {
      cVar6 = FUN_100761c10(local_40);
      if (cVar6 == '\0') {
        cVar6 = FUN_100761c30(uVar5);
        if (cVar6 == '\0') {
          plVar8 = operator_new(0x40);
          FUN_1004e5bf0(plVar8,&local_88,param_1);
          goto LAB_1004d96e8;
        }
        cVar6 = FUN_1004f6880();
        if ((cVar6 != '\0') && (cVar6 = FUN_1004f6890(&local_88), cVar6 != '\0')) {
          plVar8 = operator_new(0x50);
          FUN_1004db3e0(plVar8,&local_88,param_1);
          goto LAB_1004d96f3;
        }
        plVar8 = operator_new(0x40);
        FUN_1004e5bf0(plVar8,&local_88,param_1);
        ppuVar9 = &PTR_FUN_100bc31e8;
        goto LAB_1004d96ef;
      }
      plVar8 = operator_new(0x60);
      FUN_1004e5bf0(plVar8,&local_88,param_1);
      *plVar8 = (long)&PTR_FUN_100bc3168;
      QMutex::QMutex((QMutex *)(plVar8 + 8),0);
      plVar8[0xb] = 0;
      plVar8[10] = 0;
      plVar8[9] = (long)(plVar8 + 10);
    }
LAB_1004d96f3:
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    plVar3 = (long *)*param_3;
    *param_3 = (long)plVar8;
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    LOCK();
    plVar3 = plVar8 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    iVar7 = 0;
    if ((int)lVar4 == 1) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      iVar7 = 0;
    }
  }
  else {
    cVar6 = FUN_1004c5f70();
    if (((cVar6 != '\0') && (cVar6 = QString::endsWith(&local_88,&DAT_1011bc078,0), cVar6 != '\0'))
       && (FUN_100503450(&local_b0,*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x28),&local_88),
          local_b0 != (long *)0x0)) {
      if (local_b0[2] != 0) {
        local_b8 = *(QArrayData **)(local_b0[2] + 0x60);
        if (1 < *(int *)local_b8 + 1U) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + 1;
          local_79 = *(int *)local_b8 != 0;
          UNLOCK();
        }
        plVar8 = operator_new(0x48);
        FUN_1004e5bf0(plVar8,&local_b8,param_1);
        *plVar8 = (long)&PTR_FUN_100bc33d8;
        plVar8[8] = (long)local_b0;
        if (local_b0 != (long *)0x0) {
          LOCK();
          *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
          UNLOCK();
        }
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        plVar3 = (long *)*param_3;
        *param_3 = (long)plVar8;
        if (plVar3 != (long *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)(*plVar3 + 0x10))();
          }
        }
        LOCK();
        plVar3 = plVar8 + 1;
        lVar4 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
        if (*(int *)local_b8 != -1) {
          if (*(int *)local_b8 != 0) {
            LOCK();
            *(int *)local_b8 = *(int *)local_b8 + -1;
            local_79 = *(int *)local_b8 != 0;
            UNLOCK();
            if ((bool)local_79) goto LAB_1004d9618;
          }
          QArrayData::deallocate(local_b8,2,8);
        }
LAB_1004d9618:
        iVar7 = 0;
        if (local_b0 != (long *)0x0) {
          LOCK();
          plVar8 = local_b0 + 1;
          lVar4 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          iVar7 = 0;
          if ((int)lVar4 == 1) {
            (**(code **)(*local_b0 + 0x10))();
          }
        }
        goto LAB_1004d98f1;
      }
      LOCK();
      plVar8 = local_b0 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*local_b0 + 0x10))();
      }
    }
    QFileInfo::QFileInfo(local_d0,&local_88);
    QFileInfo::absolutePath();
    QString::toUtf8_helper(&local_c0);
    local_80 = 0;
    cVar6 = FUN_100761b20((QArrayData *)
                          (local_c0.field0_0x0 + *(long *)(local_c0.field0_0x0 + 0x10)),&local_80,1,
                          0);
    if (cVar6 == '\0') {
      cVar6 = '\0';
    }
    else {
      cVar6 = FUN_100761c10(local_80);
    }
    if (*(int *)local_c0.field0_0x0 != -1) {
      if (*(int *)local_c0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
        local_79 = *(int *)local_c0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_79) goto LAB_1004d98a4;
      }
      QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,1,8);
    }
LAB_1004d98a4:
    if (*(int *)local_c8 != -1) {
      if (*(int *)local_c8 != 0) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + -1;
        local_79 = *(int *)local_c8 != 0;
        UNLOCK();
        if ((bool)local_79) goto LAB_1004d98da;
      }
      QArrayData::deallocate(local_c8,2,8);
    }
LAB_1004d98da:
    QFileInfo::~QFileInfo(local_d0);
    iVar7 = (cVar6 == '\0') + 0xf0000019;
  }
LAB_1004d98f1:
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      UNLOCK();
      local_78 = CONCAT71(local_78._1_7_,*(int *)local_88.field0_0x0 != 0);
      if (*(int *)local_88.field0_0x0 != 0) goto LAB_1004d9921;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_1004d9921:
  if (lVar2 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar7;
}

