
undefined1 FUN_1005f77d0(long param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  char cVar5;
  undefined1 uVar6;
  uint uVar7;
  void *pvVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  _func_void_Node_ptr *p_Var13;
  QArrayData *local_150;
  QArrayData *local_148;
  Connection local_140 [8];
  QArrayData *local_138;
  Data_conflict local_130;
  undefined4 local_128;
  QArrayData *local_120;
  int *local_118;
  undefined8 local_110;
  QVariant local_f8 [2];
  QArrayData *local_e0;
  uint local_d8;
  QArrayData *local_d0;
  long local_c8;
  QArrayData *local_c0;
  _func_void_Node_ptr *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80;
  undefined *local_78;
  undefined4 local_70;
  undefined1 local_6c;
  char local_68;
  long local_60;
  undefined8 local_58;
  undefined4 local_50;
  QString local_48;
  uint local_40;
  undefined1 local_31;
  
  FUN_1005f3d00(&local_48,param_1);
  FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x38);
  FUN_1005fa410(&local_b8);
  if ((*(int *)(local_b8 + 0x14) != 0) && (uVar2 = *(uint *)(local_b8 + 0x20), uVar2 != 0)) {
    uVar7 = qHash(&local_48,*(uint *)(local_b8 + 0x24));
    uVar7 = (uVar7 << 0x10 | uVar7 >> 0x10) ^ local_40;
    uVar4 = (ulong)uVar7 % (ulong)uVar2;
    p_Var13 = *(_func_void_Node_ptr **)(*(long *)(local_b8 + 8) + uVar4 * 8);
    if (p_Var13 != local_b8) {
      plVar12 = (long *)(*(long *)(local_b8 + 8) + uVar4 * 8);
      do {
        if (((*(uint *)(p_Var13 + 8) == uVar7) &&
            (cVar5 = operator==(&local_48,(QString *)(p_Var13 + 0x10)), cVar5 != '\0')) &&
           (local_40 == *(uint *)(p_Var13 + 0x18))) {
          if ((_func_void_Node_ptr *)*plVar12 != local_b8) {
            FUN_100260700(&local_b0);
            goto LAB_1005f7935;
          }
          break;
        }
        plVar12 = (long *)*plVar12;
        p_Var13 = (_func_void_Node_ptr *)*plVar12;
      } while (p_Var13 != local_b8);
    }
  }
  local_b0 = 0xff;
  local_ac = 0;
  local_a8 = 0;
  local_a0._8_4_ = (int)PTR_shared_null_1021e1288;
  local_a0._0_8_ = PTR_shared_null_1021e1288;
  local_a0._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  local_90._8_4_ = (int)PTR_shared_null_1021e15e8;
  local_90._0_8_ = PTR_shared_null_1021e15e8;
  local_90._12_4_ = (int)((ulong)PTR_shared_null_1021e15e8 >> 0x20);
  local_80 = 0;
  local_78 = PTR_shared_null_1021e1288;
  local_70 = 0;
  local_6c = 0;
  local_68 = '\0';
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
LAB_1005f7935:
  if (*(int *)(local_b8 + 0x10) != -1) {
    if (*(int *)(local_b8 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_b8 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005f7968;
    }
    QHashData::free_helper(local_b8);
  }
LAB_1005f7968:
  if ((local_68 == '\0') || (local_60 == 0)) {
    cVar5 = FUN_1005f3ea0(param_1);
    if (cVar5 != '\0') {
      lVar11 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x38);
      *(undefined1 *)(lVar11 + 0x148) = 0;
    }
    lVar11 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x38);
    local_d0 = (QArrayData *)QString::fromAscii_helper(".hdd",4);
    uVar6 = QString::endsWith(&local_48,&local_d0,1);
    *(undefined1 *)(lVar11 + 0x1a0) = uVar6;
    if (*(int *)local_d0 != -1) {
      if (*(int *)local_d0 != 0) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        local_31 = *(int *)local_d0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005f7a61;
      }
      QArrayData::deallocate(local_d0,2,8);
    }
LAB_1005f7a61:
    uVar9 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x38);
    uVar3 = *(undefined4 *)(param_1 + 0x24);
    local_e0 = (QArrayData *)local_48.field0_0x0;
    if (1 < *(int *)local_48.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
    }
    local_d8 = local_40;
    FUN_1005bcce0(uVar9,uVar3,&local_e0);
    if (*(int *)local_e0 != -1) {
      if (*(int *)local_e0 != 0) {
        LOCK();
        *(int *)local_e0 = *(int *)local_e0 + -1;
        local_31 = *(int *)local_e0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005f7adc;
      }
      QArrayData::deallocate(local_e0,2,8);
    }
LAB_1005f7adc:
    lVar11 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x38);
    uVar6 = 1;
    if (*(int *)(lVar11 + 0x38) != 0) goto LAB_1005f7e59;
    if (*(int *)(param_1 + 0x24) != 0) {
      *(undefined4 *)(param_1 + 0x24) = 0;
      goto LAB_1005f7e59;
    }
    local_120 = (QArrayData *)QString::fromAscii_helper("1onChooseOsDialogFinished(int)",0x1e);
    local_128 = 0x80000000;
    local_130.field7 = 0;
    FUN_100a1c600(&local_118,param_1,&local_120,&local_130);
    QVariant::~QVariant((QVariant *)&local_130);
    if (*(int *)local_120 != -1) {
      if (*(int *)local_120 != 0) {
        LOCK();
        *(int *)local_120 = *(int *)local_120 + -1;
        local_31 = *(int *)local_120 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005f7c55;
      }
      QArrayData::deallocate(local_120,2,8);
    }
LAB_1005f7c55:
    plVar12 = operator_new(0x78);
    uVar9 = FUN_1005ec9b0(*(long *)(param_1 + 0x10) + 0x38);
    local_138 = (QArrayData *)PTR_shared_null_1021e1288;
    CAbstractWizardPage::wizardCtrl();
    uVar10 = CWizardController::parentWidget();
    FUN_100600ed0(plVar12,uVar9,&local_138,uVar10);
    if (*(int *)local_138 != -1) {
      if (*(int *)local_138 != 0) {
        LOCK();
        *(int *)local_138 = *(int *)local_138 + -1;
        local_31 = *(int *)local_138 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005f7cdc;
      }
      QArrayData::deallocate(local_138,2,8);
    }
LAB_1005f7cdc:
    QWidget::setAttribute(plVar12,0x37,1);
    cVar5 = FUN_10019cd90(&local_118);
    if (cVar5 != '\0') {
      uVar9 = 0;
      if ((local_118 != (int *)0x0) && (uVar9 = 0, local_118[1] != 0)) {
        uVar9 = local_110;
      }
      FUN_100a1c770(&local_150,&local_118);
      QString::toLatin1();
      if ((1 < *(uint *)local_148) || (*(long *)(local_148 + 0x10) != 0x18)) {
        QByteArray::reallocData
                  (&local_148,*(uint *)(local_148 + 4) + 1,*(uint *)(local_148 + 8) >> 0x1f);
      }
      QObject::connect(local_140,plVar12,"2finished(int)",uVar9,
                       local_148 + *(long *)(local_148 + 0x10),0);
      QMetaObject::Connection::~Connection(local_140);
      if (*(int *)local_148 != -1) {
        if (*(int *)local_148 != 0) {
          LOCK();
          *(int *)local_148 = *(int *)local_148 + -1;
          local_31 = *(int *)local_148 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005f7ddb;
        }
        QArrayData::deallocate(local_148,1,8);
      }
LAB_1005f7ddb:
      if (*(int *)local_150 != -1) {
        if (*(int *)local_150 != 0) {
          LOCK();
          *(int *)local_150 = *(int *)local_150 + -1;
          local_31 = *(int *)local_150 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005f7e11;
        }
        QArrayData::deallocate(local_150,2,8);
      }
    }
LAB_1005f7e11:
    (**(code **)(*plVar12 + 0x1a0))(plVar12);
    QVariant::~QVariant(local_f8);
    if (local_118 != (int *)0x0) {
      LOCK();
      *local_118 = *local_118 + -1;
      local_31 = *local_118 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (local_118 != (int *)0x0)) {
        operator_delete(local_118);
      }
    }
    uVar6 = 0;
    goto LAB_1005f7e59;
  }
  pvVar8 = operator_new(0xd0);
  CAbstractWizardPage::wizardCtrl();
  uVar9 = CWizardController::parentWidget();
  cVar5 = FUN_100da0de0(&local_48);
  if (cVar5 == '\0') {
    local_c0 = (QArrayData *)QString::fromAscii_helper("",0);
  }
  else {
    uVar10 = FUN_1005ec9b0(*(long *)(param_1 + 0x10) + 0x38);
    FUN_100109c10(&local_c0,uVar10);
  }
  FUN_1002bb5f0(pvVar8,&local_48,&local_b0,uVar9,&local_c0);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005f7b75;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1005f7b75:
  QObject::connect(&local_c8,pvVar8,"2taskFinished(PRL_RESULT)",param_1,
                   "1onPrepareMavericImageFinished(PRL_RESULT)",0);
  if (local_c8 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_c8);
  CAbstractTask::execute();
  uVar6 = 0;
LAB_1005f7e59:
  FUN_10005e410(&local_b0);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      local_b0 = CONCAT31(local_b0._1_3_,*(int *)local_48.field0_0x0 != 0);
      if (*(int *)local_48.field0_0x0 != 0) {
        return uVar6;
      }
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return uVar6;
}

