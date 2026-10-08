
void FUN_1007b6b80(long param_1,undefined8 param_2,long *param_3)

{
  QStringList *pQVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  void *pvVar9;
  char *pcVar10;
  uint in_stack_fffffffffffffe3c;
  QArrayData *local_1a8;
  QArrayData *local_1a0;
  int *local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined4 local_180;
  Data_conflict local_178;
  undefined4 local_170;
  undefined1 local_168;
  QVariant local_158;
  QArrayData *local_148;
  int *local_140 [4];
  QVariant local_120 [2];
  undefined1 local_108 [24];
  QArrayData *local_f0;
  int *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  Data_conflict local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  QVariant local_a8;
  QArrayData *local_98;
  int *local_90 [4];
  QVariant local_70 [2];
  ExternalRefCountData *local_58;
  AnonymousUnion0 local_50;
  QArrayData *local_48;
  QString local_40 [2];
  
  if (((*param_3 == 0) || (*(int *)(*param_3 + 4) == 0)) || (param_3[1] == 0)) {
    pcVar10 = "(!)Error: CDeviceWrap is null.";
LAB_1007b6c8a:
    FUN_100df99c0("","prl_client_app",0,pcVar10);
    return;
  }
  uVar5 = FUN_100152280();
  pQVar1 = (QStringList *)(param_1 + 0x10);
  lVar6 = FUN_1001547d0(uVar5,pQVar1);
  if (lVar6 == 0) {
    pcVar10 = "(!)Error: can\'t get server instance.";
    goto LAB_1007b6c8a;
  }
  lVar7 = FUN_10015a340(lVar6);
  FUN_1007b5c80(local_40,param_2);
  plVar8 = (long *)FUN_100113a40(*(undefined8 *)(lVar7 + 0x180),local_40);
  if (plVar8 == (long *)0x0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get CHwGenericDevice instance.");
    goto LAB_1007b7282;
  }
  iVar4 = (**(code **)(*plVar8 + 0xd8))(plVar8);
  if ((iVar4 == 1) || (iVar4 = (**(code **)(*plVar8 + 0xd8))(plVar8), iVar4 == 3)) {
    (**(code **)(*plVar8 + 0xb8))(&local_f0,plVar8);
    cVar3 = FUN_1001b35f0(&local_f0);
    if (cVar3 == '\0') {
      iVar4 = (**(code **)(*plVar8 + 0xd8))(plVar8);
      if (iVar4 == 3) {
        (**(code **)(*plVar8 + 200))(local_108 + 0x10,plVar8);
        cVar3 = QtPrivate::QStringList_contains(local_108 + 0x10,pQVar1,1);
        FUN_100039a80(local_108 + 0x10);
      }
      else {
        cVar3 = '\0';
      }
    }
    else {
      cVar3 = '\0';
    }
    if (*(int *)local_f0 != -1) {
      if (*(int *)local_f0 != 0) {
        LOCK();
        *(int *)local_f0 = *(int *)local_f0 + -1;
        local_40[1].field0_0x0._7_1_ = *(int *)local_f0 != 0;
        UNLOCK();
        if ((bool)local_40[1].field0_0x0._7_1_) goto LAB_1007b6fc2;
      }
      QArrayData::deallocate(local_f0,2,8);
    }
LAB_1007b6fc2:
    if (cVar3 != '\0') {
      iVar4 = CMessageManager::instance();
      local_108._8_8_ = PTR_shared_null_1021e15e8;
      local_108._0_8_ = PTR_shared_null_1021e15e8;
      local_148 = (QArrayData *)
                  QString::fromAscii_helper
                            ("1finishUsbQuestion( PRL_RESULT, Messaging::ButtonID, const QVariant & )"
                             ,0x47);
      QVariant::QVariant(&local_158,local_40);
      FUN_100a1c600(local_140,param_1,&local_148,&local_158);
      local_198 = (int *)0x0;
      uStack_190 = 0;
      local_180 = 0;
      local_188 = 0;
      local_170 = 0x80000000;
      local_178.field7 = 0;
      local_168 = 1;
      CMessageManager::showMessageBox
                (iVar4,(QString *)0x36c7,pQVar1,(QStringList *)(local_108 + 8),
                 (CSlotInfo *)local_108,SUB81(local_140,0),
                 (QWidget *)((ulong)in_stack_fffffffffffffe3c << 0x20),(CSlotInfo *)0x0);
      QVariant::~QVariant((QVariant *)&local_178);
      if (local_198 != (int *)0x0) {
        LOCK();
        *local_198 = *local_198 + -1;
        local_40[1].field0_0x0._7_1_ = *local_198 != 0;
        UNLOCK();
        if ((!(bool)local_40[1].field0_0x0._7_1_) && (local_198 != (int *)0x0)) {
          operator_delete(local_198);
        }
      }
      QVariant::~QVariant(local_120);
      if (local_140[0] != (int *)0x0) {
        LOCK();
        *local_140[0] = *local_140[0] + -1;
        local_40[1].field0_0x0._7_1_ = *local_140[0] != 0;
        UNLOCK();
        if ((!(bool)local_40[1].field0_0x0._7_1_) && (local_140[0] != (int *)0x0)) {
          operator_delete(local_140[0]);
        }
      }
      QVariant::~QVariant(&local_158);
      if (*(int *)local_148 != -1) {
        if (*(int *)local_148 != 0) {
          LOCK();
          *(int *)local_148 = *(int *)local_148 + -1;
          local_40[1].field0_0x0._7_1_ = *(int *)local_148 != 0;
          UNLOCK();
          if ((bool)local_40[1].field0_0x0._7_1_) goto LAB_1007b7163;
        }
        QArrayData::deallocate(local_148,2,8);
      }
LAB_1007b7163:
      FUN_100039a80(local_108);
      FUN_100039a80(local_108 + 8);
      goto LAB_1007b7282;
    }
    bVar2 = 0;
LAB_1007b7183:
    lVar7 = FUN_10015cb20(lVar6,pQVar1);
    if ((bool)(bVar2 & lVar7 != 0)) {
      (**(code **)(*plVar8 + 0xa8))(&local_1a0,plVar8);
      FUN_1001b3d20(lVar7,local_40,&local_1a0);
      if (*(int *)local_1a0 != -1) {
        if (*(int *)local_1a0 != 0) {
          LOCK();
          *(int *)local_1a0 = *(int *)local_1a0 + -1;
          local_40[1].field0_0x0._7_1_ = *(int *)local_1a0 != 0;
          UNLOCK();
          if ((bool)local_40[1].field0_0x0._7_1_) goto LAB_1007b7207;
        }
        QArrayData::deallocate(local_1a0,2,8);
      }
    }
LAB_1007b7207:
    pvVar9 = operator_new(0x48);
    (**(code **)(*plVar8 + 0xb8))(&local_1a8,plVar8);
    FUN_1002cc100(pvVar9,lVar6,&local_1a8,pQVar1);
    if (*(int *)local_1a8 != -1) {
      if (*(int *)local_1a8 != 0) {
        LOCK();
        *(int *)local_1a8 = *(int *)local_1a8 + -1;
        local_40[1].field0_0x0._7_1_ = *(int *)local_1a8 != 0;
        UNLOCK();
        if ((bool)local_40[1].field0_0x0._7_1_) goto LAB_1007b727a;
      }
      QArrayData::deallocate(local_1a8,2,8);
    }
LAB_1007b727a:
    CAbstractTask::execute();
    goto LAB_1007b7282;
  }
  cVar3 = FUN_1001b4060(plVar8);
  if (cVar3 == '\0') {
    (**(code **)(*plVar8 + 0xb8))(&local_48,plVar8);
    cVar3 = FUN_1001b4140(lVar6,&local_48);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_40[1].field0_0x0._7_1_ = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_40[1].field0_0x0._7_1_) goto LAB_1007b6dde;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_1007b6dde:
    bVar2 = 1;
    if (cVar3 == '\0') goto LAB_1007b7183;
  }
  iVar4 = CMessageManager::instance();
  local_50.field1 = (Data *)PTR_shared_null_1021e15e8;
  local_58 = (ExternalRefCountData *)PTR_shared_null_1021e15e8;
  local_98 = (QArrayData *)
             QString::fromAscii_helper
                       ("1finishUsbQuestion( PRL_RESULT, Messaging::ButtonID, const QVariant & )",
                        0x47);
  QVariant::QVariant(&local_a8,local_40);
  FUN_100a1c600(local_90,param_1,&local_98,&local_a8);
  local_e8 = (int *)0x0;
  uStack_e0 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_c0 = 0x80000000;
  local_c8.field7 = 0;
  local_b8 = 1;
  CMessageManager::showMessageBox
            (iVar4,(QString *)0x3add,pQVar1,(QStringList *)&local_50.field0,(CSlotInfo *)&local_58,
             SUB81(local_90,0),(QWidget *)((ulong)in_stack_fffffffffffffe3c << 0x20),
             (CSlotInfo *)0x0);
  QVariant::~QVariant((QVariant *)&local_c8);
  if (local_e8 != (int *)0x0) {
    LOCK();
    *local_e8 = *local_e8 + -1;
    local_40[1].field0_0x0._7_1_ = *local_e8 != 0;
    UNLOCK();
    if ((!(bool)local_40[1].field0_0x0._7_1_) && (local_e8 != (int *)0x0)) {
      operator_delete(local_e8);
    }
  }
  QVariant::~QVariant(local_70);
  if (local_90[0] != (int *)0x0) {
    LOCK();
    *local_90[0] = *local_90[0] + -1;
    local_40[1].field0_0x0._7_1_ = *local_90[0] != 0;
    UNLOCK();
    if ((!(bool)local_40[1].field0_0x0._7_1_) && (local_90[0] != (int *)0x0)) {
      operator_delete(local_90[0]);
    }
  }
  QVariant::~QVariant(&local_a8);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_40[1].field0_0x0._7_1_ = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_40[1].field0_0x0._7_1_) goto LAB_1007b6f72;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1007b6f72:
  FUN_100039a80(&local_58);
  FUN_100039a80(&local_50);
LAB_1007b7282:
  if (*(int *)local_40[0].field0_0x0 != -1) {
    if (*(int *)local_40[0].field0_0x0 != 0) {
      LOCK();
      *(int *)local_40[0].field0_0x0 = *(int *)local_40[0].field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40[0].field0_0x0 != 0) {
        return;
      }
      local_40[1].field0_0x0._7_1_ = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40[0].field0_0x0,2,8);
  }
  return;
}

