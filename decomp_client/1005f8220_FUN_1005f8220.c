
void FUN_1005f8220(long param_1,int param_2)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  QStringList *pQVar9;
  long lVar10;
  long *plVar11;
  _func_void_Node_ptr *p_Var12;
  QString local_1a8;
  QString local_1a0;
  undefined1 local_198 [104];
  QArrayData *local_130;
  uint local_128;
  QString local_120;
  QArrayData *local_118;
  uint local_110;
  _func_void_Node_ptr *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0;
  undefined *local_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  QString local_98;
  uint local_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined4 local_70;
  Data_conflict local_68;
  undefined4 local_60;
  undefined1 local_58;
  ExternalRefCountData *local_48;
  AnonymousUnion0 local_40;
  undefined1 local_31;
  
  if (param_2 == -0x7ffffd8b) {
    return;
  }
  if (param_2 < 0) {
    iVar6 = CMessageManager::instance();
    CAbstractWizardPage::wizardCtrl();
    pQVar9 = (QStringList *)CWizardController::parentWidget();
    local_40.field1 = (Data *)PTR_shared_null_1021e15e8;
    local_48 = (ExternalRefCountData *)PTR_shared_null_1021e15e8;
    local_88 = (undefined1  [16])0x0;
    local_70 = 0;
    local_78 = 0;
    local_60 = 0x80000000;
    local_68.field7 = 0;
    local_58 = 1;
    CMessageManager::showMessageBox
              (iVar6,(QWidget *)0x80015450,pQVar9,(QStringList *)&local_40.field0,
               (CSlotInfo *)&local_48,SUB81(local_88,0));
    QVariant::~QVariant((QVariant *)&local_68);
    if ((int *)local_88._0_8_ != (int *)0x0) {
      LOCK();
      *(int *)local_88._0_8_ = *(int *)local_88._0_8_ + -1;
      local_31 = *(int *)local_88._0_8_ != 0;
      UNLOCK();
      if ((!(bool)local_31) && ((int *)local_88._0_8_ != (int *)0x0)) {
        operator_delete((void *)local_88._0_8_);
      }
    }
    FUN_100039a80(&local_48);
    FUN_100039a80(&local_40);
    return;
  }
  QObject::sender();
  lVar7 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102208250);
  local_98.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(lVar7 + 0x18);
  iVar6 = *(int *)local_98.field0_0x0;
  if (1 < iVar6 + 1U) {
    LOCK();
    *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + 1;
    local_31 = *(int *)local_98.field0_0x0 != 0;
    UNLOCK();
    iVar6 = *(int *)local_98.field0_0x0;
  }
  if (1 < iVar6 + 1U) {
    LOCK();
    *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + 1;
    local_31 = *(int *)local_98.field0_0x0 != 0;
    UNLOCK();
    iVar6 = *(int *)local_98.field0_0x0;
  }
  local_90 = 2;
  if (iVar6 != -1) {
    if (iVar6 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
      local_31 = *(int *)local_98.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005f82c6;
    }
    QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
  }
LAB_1005f82c6:
  uVar8 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x38);
  FUN_1005fa410(&local_108,uVar8);
  if ((*(int *)(local_108 + 0x14) != 0) && (uVar2 = *(uint *)(local_108 + 0x20), uVar2 != 0)) {
    uVar5 = qHash(&local_98,*(uint *)(local_108 + 0x24));
    uVar5 = (uVar5 << 0x10 | uVar5 >> 0x10) ^ local_90;
    uVar3 = (ulong)uVar5 % (ulong)uVar2;
    p_Var12 = *(_func_void_Node_ptr **)(*(long *)(local_108 + 8) + uVar3 * 8);
    if (p_Var12 != local_108) {
      plVar11 = (long *)(*(long *)(local_108 + 8) + uVar3 * 8);
      do {
        if (((*(uint *)(p_Var12 + 8) == uVar5) &&
            (cVar4 = operator==(&local_98,(QString *)(p_Var12 + 0x10)), cVar4 != '\0')) &&
           (local_90 == *(uint *)(p_Var12 + 0x18))) {
          if ((_func_void_Node_ptr *)*plVar11 != local_108) {
            FUN_100260700(&local_100,(_func_void_Node_ptr *)*plVar11 + 0x20);
            goto LAB_1005f8508;
          }
          break;
        }
        plVar11 = (long *)*plVar11;
        p_Var12 = (_func_void_Node_ptr *)*plVar11;
      } while (p_Var12 != local_108);
    }
  }
  local_100 = 0xff;
  local_fc = 0;
  local_f8 = 0;
  local_f0._8_4_ = (int)PTR_shared_null_1021e1288;
  local_f0._0_8_ = PTR_shared_null_1021e1288;
  local_f0._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  local_e0._8_4_ = (int)PTR_shared_null_1021e15e8;
  local_e0._0_8_ = PTR_shared_null_1021e15e8;
  local_e0._12_4_ = (int)((ulong)PTR_shared_null_1021e15e8 >> 0x20);
  local_d0 = 0;
  local_c8 = PTR_shared_null_1021e1288;
  local_c0 = 0;
  local_bc = 0;
  local_b8 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
LAB_1005f8508:
  if (*(int *)(local_108 + 0x10) != -1) {
    if (*(int *)(local_108 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_108 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005f8544;
    }
    QHashData::free_helper(local_108);
  }
LAB_1005f8544:
  local_b8 = 0;
  local_b0 = 0;
  lVar10 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x38);
  local_118 = (QArrayData *)local_98.field0_0x0;
  if (1 < *(int *)local_98.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + 1;
    local_31 = *(int *)local_98.field0_0x0 != 0;
    UNLOCK();
  }
  local_110 = local_90;
  FUN_1005b6b10(lVar10 + 0x140,&local_118);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_31 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005f85d9;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_1005f85d9:
  local_120.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(lVar7 + 0x20);
  if (1 < *(int *)local_120.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + 1;
    local_31 = *(int *)local_120.field0_0x0 != 0;
    UNLOCK();
  }
  QString::operator=(&local_98,&local_120);
  if (*(int *)local_120.field0_0x0 != -1) {
    if (*(int *)local_120.field0_0x0 != 0) {
      LOCK();
      *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
      local_31 = *(int *)local_120.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005f863e;
    }
    QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
  }
LAB_1005f863e:
  uVar8 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x38);
  local_130 = (QArrayData *)local_98.field0_0x0;
  if (1 < *(int *)local_98.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + 1;
    local_31 = *(int *)local_98.field0_0x0 != 0;
    UNLOCK();
  }
  local_128 = local_90;
  FUN_100260700(local_198,&local_100);
  FUN_1005bca00(uVar8,&local_130,local_198);
  FUN_10005e410(local_198);
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_31 = *(int *)local_130 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005f86e4;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_1005f86e4:
  cVar4 = FUN_1005f3ea0(param_1);
  if (cVar4 == '\0') {
    local_1a0.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(lVar7 + 0x20);
    if (1 < *(int *)local_1a0.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_1a0.field0_0x0 = *(int *)local_1a0.field0_0x0 + 1;
      local_31 = *(int *)local_1a0.field0_0x0 != 0;
      UNLOCK();
    }
    QString::operator=((QString *)(param_1 + 0x28),&local_1a0);
    if (*(int *)local_1a0.field0_0x0 != -1) {
      if (*(int *)local_1a0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_1a0.field0_0x0 = *(int *)local_1a0.field0_0x0 + -1;
        local_31 = *(int *)local_1a0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005f87e1;
      }
      QArrayData::deallocate((QArrayData *)local_1a0.field0_0x0,2,8);
    }
  }
  else {
    lVar10 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102220780);
    local_1a8.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(lVar7 + 0x20);
    if (1 < *(int *)local_1a8.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_1a8.field0_0x0 = *(int *)local_1a8.field0_0x0 + 1;
      local_31 = *(int *)local_1a8.field0_0x0 != 0;
      UNLOCK();
    }
    QString::operator=((QString *)(lVar10 + 0x78),&local_1a8);
    if (*(int *)local_1a8.field0_0x0 != -1) {
      if (*(int *)local_1a8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_1a8.field0_0x0 = *(int *)local_1a8.field0_0x0 + -1;
        local_31 = *(int *)local_1a8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005f87e1;
      }
      QArrayData::deallocate((QArrayData *)local_1a8.field0_0x0,2,8);
    }
  }
LAB_1005f87e1:
  cVar4 = FUN_1005f77d0(param_1);
  if (cVar4 != '\0') {
    CAbstractWizardPage::wizardCtrl();
    CWizardController::goNext();
  }
  FUN_10005e410(&local_100);
  if (*(int *)local_98.field0_0x0 != -1) {
    if (*(int *)local_98.field0_0x0 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_98.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
  }
  return;
}

