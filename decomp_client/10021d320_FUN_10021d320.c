
/* WARNING: Removing unreachable block (ram,0x00010021d9ff) */
/* WARNING: Removing unreachable block (ram,0x00010021da0d) */
/* WARNING: Removing unreachable block (ram,0x00010021da19) */

QString * FUN_10021d320(long param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  QString *pQVar8;
  uint in_stack_fffffffffffffd9c;
  Data_conflict local_228;
  undefined4 local_220;
  undefined1 local_218;
  Data_conflict local_208;
  undefined4 local_200;
  QArrayData *local_1f8;
  int *local_1f0 [4];
  QVariant local_1d0 [2];
  QArrayData *local_1b8;
  AnonymousUnion0 local_1b0;
  AnonymousUnion0 local_1a8;
  QArrayData *local_1a0;
  QArrayData *local_198;
  undefined1 local_190 [40];
  QVariant local_168;
  undefined1 local_158;
  Data_conflict local_150;
  undefined4 local_148;
  QArrayData *local_140;
  int *local_138 [4];
  QVariant local_118 [2];
  undefined1 local_100 [24];
  int *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  Data_conflict local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  int *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  Data_conflict local_88;
  undefined4 local_80;
  undefined1 local_78;
  AnonymousUnion0 local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  char local_49;
  AnonymousUnion0 local_48;
  char local_3d;
  int local_3c;
  int local_38;
  undefined1 local_31;
  
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
  }
  iVar2 = FUN_10018a9d0(uVar7);
  if (iVar2 != 0x30000001) {
    return (QString *)0x0;
  }
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
  }
  iVar2 = FUN_1001248e0(uVar7);
  local_38 = 0;
  local_3c = 0;
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_10011d910(uVar7,&local_38,&local_3c);
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_10018c2b0(uVar7);
  CVmConfiguration::getVmHardwareList();
  CVmHardware::getMemory();
  iVar3 = CVmMemory::getRamSize();
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar7 = FUN_10018d490(uVar7);
  uVar7 = FUN_1001766b0(uVar7);
  iVar4 = FUN_100615d30(uVar7,2,&local_3d);
  if (local_3d == '\0') {
    FUN_100df99c0("","prl_client_app",0,"No license restriction PLRK_VM_MEMORY_LIMIT.");
  }
  else if (iVar4 < iVar3) {
    local_48.field1 = (Data *)PTR_shared_null_1021e15e8;
    uVar7 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar7 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar7 = FUN_10018d490(uVar7);
    uVar7 = FUN_1001766b0(uVar7);
    uVar5 = FUN_100615d30(uVar7,1,&local_49);
    if (local_49 == '\0') {
      pQVar8 = (QString *)0x80026502;
      FUN_100df99c0("","prl_client_app",0,"No license restriction PLRK_VM_CPU_LIMIT.");
    }
    else {
      uVar7 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar7 = *(undefined8 *)(param_1 + 0x20);
      }
      FUN_10018c2b0(uVar7);
      CVmConfiguration::getVmHardwareList();
      CVmHardware::getCpu();
      uVar6 = CVmCpu::getNumber();
      pQVar8 = (QString *)0x80026502;
      if (uVar5 < uVar6) {
        QString::number((uint)&local_58,uVar5);
        FUN_1000341d0(&local_48,&local_58);
        pQVar8 = (QString *)0x80026505;
        if (*(int *)local_58 != -1) {
          if (*(int *)local_58 != 0) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + -1;
            local_31 = *(int *)local_58 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10021db47;
          }
          QArrayData::deallocate(local_58,2,8);
        }
      }
    }
LAB_10021db47:
    QString::number((int)&local_60,(int)(((uint)(iVar4 >> 0x1f) >> 0x16) + iVar4) >> 10);
    FUN_1000341d0(&local_48,&local_60);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10021dba4;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_10021dba4:
    iVar2 = CMessageManager::instance();
    uVar7 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar7 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_100188480(&local_68,uVar7);
    local_a8 = (int *)0x0;
    uStack_a0 = 0;
    local_90 = 0;
    local_98 = 0;
    local_80 = 0x80000000;
    local_88.field7 = 0;
    local_78 = 1;
    local_e8 = (int *)0x0;
    uStack_e0 = 0;
    local_d0 = 0;
    local_d8 = 0;
    local_c0 = 0x80000000;
    local_c8.field7 = 0;
    local_b8 = 1;
    CMessageManager::showMessageBox
              (iVar2,pQVar8,(QStringList *)&local_68.field0,(QStringList *)&local_48.field0,
               (CSlotInfo *)&local_48,SUB81(&local_a8,0),
               (QWidget *)((ulong)in_stack_fffffffffffffd9c << 0x20),(CSlotInfo *)0x0);
    QVariant::~QVariant((QVariant *)&local_c8);
    if (local_e8 != (int *)0x0) {
      LOCK();
      *local_e8 = *local_e8 + -1;
      local_31 = *local_e8 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (local_e8 != (int *)0x0)) {
        operator_delete(local_e8);
      }
    }
    QVariant::~QVariant((QVariant *)&local_88);
    if (local_a8 != (int *)0x0) {
      LOCK();
      *local_a8 = *local_a8 + -1;
      local_31 = *local_a8 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (local_a8 != (int *)0x0)) {
        operator_delete(local_a8);
      }
    }
    if (*(int *)local_68.field1 != -1) {
      if (*(int *)local_68.field1 != 0) {
        LOCK();
        *(int *)local_68.field1 = *(int *)local_68.field1 + -1;
        local_31 = *(int *)local_68.field1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10021dd13;
      }
      QArrayData::deallocate((QArrayData *)local_68.field1,2,8);
    }
LAB_10021dd13:
    FUN_100039a80(&local_48);
    return pQVar8;
  }
  if (iVar2 < iVar3) {
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("","prl_client_app",2,"(!)Warning: Main memory is above max (%u > %u)",iVar3,
                    iVar2);
    }
    CAbstractTask::setWaitForSubTaskCompletion();
    iVar2 = CMessageManager::instance();
    uVar7 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar7 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_100188480(local_100 + 0x10,uVar7);
    local_100._8_8_ = PTR_shared_null_1021e15e8;
    local_100._0_8_ = PTR_shared_null_1021e15e8;
    local_140 = (QArrayData *)
                QString::fromAscii_helper
                          ("1onWarningMainMemoryClosed(PRL_RESULT, Messaging::ButtonID)",0x3b);
    local_148 = 0x80000000;
    local_150.field7 = 0;
    FUN_100a1c600(local_138,param_1,&local_140,&local_150);
    local_190._8_8_ = (QObject *)0x0;
    local_190._16_8_ = (QMetaObject *)0x0;
    local_190._32_4_ = 0;
    local_190._24_8_ = 0;
    local_168.field0_0x0.field1_0x8.bitField0_30 = 0x80000000;
    local_168.field0_0x0.field0_0x0.field7 = 0;
    local_158 = 1;
    CMessageManager::showMessageBox
              (iVar2,(QString *)0x80027260,(QStringList *)(local_100 + 0x10),
               (QStringList *)(local_100 + 8),(CSlotInfo *)local_100,SUB81(local_138,0),
               (QWidget *)((ulong)in_stack_fffffffffffffd9c << 0x20),(CSlotInfo *)0x0);
    QVariant::~QVariant(&local_168);
    if ((QObject *)local_190._8_8_ != (QObject *)0x0) {
      LOCK();
      *(int *)local_190._8_8_ = *(int *)local_190._8_8_ + -1;
      local_31 = *(int *)local_190._8_8_ != 0;
      UNLOCK();
      if ((!(bool)local_31) && ((QObject *)local_190._8_8_ != (QObject *)0x0)) {
        operator_delete((void *)local_190._8_8_);
      }
    }
    QVariant::~QVariant(local_118);
    if (local_138[0] != (int *)0x0) {
      LOCK();
      *local_138[0] = *local_138[0] + -1;
      local_31 = *local_138[0] != 0;
      UNLOCK();
      if ((!(bool)local_31) && (local_138[0] != (int *)0x0)) {
        operator_delete(local_138[0]);
      }
    }
    QVariant::~QVariant((QVariant *)&local_150);
    if (*(int *)local_140 != -1) {
      if (*(int *)local_140 != 0) {
        LOCK();
        *(int *)local_140 = *(int *)local_140 + -1;
        local_31 = *(int *)local_140 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10021d74a;
      }
      QArrayData::deallocate(local_140,2,8);
    }
LAB_10021d74a:
    FUN_100039a80(local_100);
    FUN_100039a80(local_100 + 8);
    if (*(int *)local_100._16_8_ != -1) {
      if (*(int *)local_100._16_8_ != 0) {
        LOCK();
        *(int *)local_100._16_8_ = *(int *)local_100._16_8_ + -1;
        UNLOCK();
        if (*(int *)local_100._16_8_ != 0) {
          return (QString *)0x0;
        }
        local_31 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_100._16_8_,2,8);
    }
    return (QString *)0x0;
  }
  if ((local_38 <= iVar3) && (iVar3 <= local_3c)) {
    return (QString *)0x0;
  }
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("","prl_client_app",2,
                  "(!)Warning: Main memory is outside of the recommended range");
  }
  CAbstractTask::setWaitForSubTaskCompletion();
  puVar1 = PTR_shared_null_1021e15e8;
  local_190._0_8_ = PTR_shared_null_1021e15e8;
  QString::number((int)&local_198,local_38);
  FUN_1000341d0(local_190,&local_198);
  QString::number((int)&local_1a0,local_3c);
  FUN_1000341d0(local_190,&local_1a0);
  if (*(int *)local_1a0 != -1) {
    if (*(int *)local_1a0 != 0) {
      LOCK();
      *(int *)local_1a0 = *(int *)local_1a0 + -1;
      local_31 = *(int *)local_1a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10021d888;
    }
    QArrayData::deallocate(local_1a0,2,8);
  }
LAB_10021d888:
  if (*(int *)local_198 != -1) {
    if (*(int *)local_198 != 0) {
      LOCK();
      *(int *)local_198 = *(int *)local_198 + -1;
      local_31 = *(int *)local_198 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10021d8be;
    }
    QArrayData::deallocate(local_198,2,8);
  }
LAB_10021d8be:
  iVar2 = CMessageManager::instance();
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100188480(&local_1a8,uVar7);
  local_1b0.field1 = (Data *)puVar1;
  QString::number((int)&local_1b8,iVar3);
  FUN_1000341d0(&local_1b0,&local_1b8);
  local_1f8 = (QArrayData *)
              QString::fromAscii_helper
                        ("1onWarningMainMemoryClosed(PRL_RESULT, Messaging::ButtonID)",0x3b);
  local_200 = 0x80000000;
  local_208.field7 = 0;
  FUN_100a1c600(local_1f0,param_1,&local_1f8,&local_208);
  local_220 = 0x80000000;
  local_228.field7 = 0;
  local_218 = 1;
  CMessageManager::showMessageBox
            (iVar2,(QString *)0x3b0f,(QStringList *)&local_1a8.field0,
             (QStringList *)&local_1b0.field0,(CSlotInfo *)local_190,SUB81(local_1f0,0),
             (QWidget *)((ulong)in_stack_fffffffffffffd9c << 0x20),(CSlotInfo *)0x0);
  QVariant::~QVariant((QVariant *)&local_228);
  QVariant::~QVariant(local_1d0);
  if (local_1f0[0] != (int *)0x0) {
    LOCK();
    *local_1f0[0] = *local_1f0[0] + -1;
    local_31 = *local_1f0[0] != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_1f0[0] != (int *)0x0)) {
      operator_delete(local_1f0[0]);
    }
  }
  QVariant::~QVariant((QVariant *)&local_208);
  if (*(int *)local_1f8 != -1) {
    if (*(int *)local_1f8 != 0) {
      LOCK();
      *(int *)local_1f8 = *(int *)local_1f8 + -1;
      local_31 = *(int *)local_1f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10021da97;
    }
    QArrayData::deallocate(local_1f8,2,8);
  }
LAB_10021da97:
  if (*(int *)local_1b8 != -1) {
    if (*(int *)local_1b8 != 0) {
      LOCK();
      *(int *)local_1b8 = *(int *)local_1b8 + -1;
      local_31 = *(int *)local_1b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10021dacd;
    }
    QArrayData::deallocate(local_1b8,2,8);
  }
LAB_10021dacd:
  FUN_100039a80(&local_1b0);
  if (*(int *)local_1a8.field1 != -1) {
    if (*(int *)local_1a8.field1 != 0) {
      LOCK();
      *(int *)local_1a8.field1 = *(int *)local_1a8.field1 + -1;
      local_31 = *(int *)local_1a8.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10021db0f;
    }
    QArrayData::deallocate((QArrayData *)local_1a8.field1,2,8);
  }
LAB_10021db0f:
  FUN_100039a80(local_190);
  return (QString *)0x0;
}

