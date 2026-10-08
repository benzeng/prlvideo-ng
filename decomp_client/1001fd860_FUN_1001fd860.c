
undefined8 FUN_1001fd860(long param_1)

{
  QString *this;
  char cVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  QObject *pQVar5;
  int *piVar6;
  int *piVar7;
  long lVar8;
  void *pvVar9;
  uint in_stack_fffffffffffffe6c;
  long local_180;
  int *local_178;
  QString local_170;
  QString local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QString local_150;
  long local_148;
  QArrayData *local_140;
  int *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  Data_conflict local_118;
  undefined4 local_110;
  undefined1 local_108;
  undefined1 local_100 [24];
  int *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  Data_conflict local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined1 local_a8 [24];
  QVariant local_90;
  QArrayData *local_80;
  int *local_78 [4];
  QVariant local_58 [2];
  int *local_40;
  undefined1 local_31;
  
  if ((*(long *)(param_1 + 0x68) != 0) && (cVar1 = QThread::isRunning(), cVar1 != '\0')) {
    FUN_100df99c0("","prl_client_app",0,"Warning: backup thread is already running.");
    return 0x80000009;
  }
  local_80 = (QArrayData *)
             QString::fromAscii_helper
                       ("1onErrorMessageClosed(PRL_RESULT, Messaging::ButtonID, const QVariant&)",
                        0x47);
  local_90.field0_0x0.field1_0x8.bitField0_30 = 0x80000000;
  local_90.field0_0x0.field0_0x0.field7 = 0;
  FUN_100a1c600(local_78,param_1,&local_80,&local_90);
  QVariant::~QVariant(&local_90);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001fd92b;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1001fd92b:
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x30);
  }
  uVar4 = FUN_10018c2b0(uVar4);
  this = (QString *)(param_1 + 0x48);
  cVar1 = FUN_100758230(uVar4);
  if (cVar1 == '\0') {
    CAbstractTask::setWaitForSubTaskCompletion();
    iVar3 = CMessageManager::instance();
    if (((*(long *)(param_1 + 0x28) == 0) || (*(int *)(*(long *)(param_1 + 0x28) + 4) == 0)) ||
       (*(long *)(param_1 + 0x30) == 0)) {
      local_a8._16_8_ = QString::fromAscii_helper("",0);
    }
    else {
      FUN_100188480(local_a8 + 0x10);
    }
    local_a8._8_8_ = PTR_shared_null_1021e15e8;
    local_a8._0_8_ = PTR_shared_null_1021e15e8;
    local_e8 = (int *)0x0;
    uStack_e0 = 0;
    local_d0 = 0;
    local_d8 = 0;
    local_c0 = 0x80000000;
    local_c8.field7 = 0;
    local_b8 = 1;
    CMessageManager::showMessageBox
              (iVar3,(QString *)0x3afe,(QStringList *)(local_a8 + 0x10),
               (QStringList *)(local_a8 + 8),(CSlotInfo *)local_a8,SUB81(local_78,0),
               (QWidget *)((ulong)in_stack_fffffffffffffe6c << 0x20),(CSlotInfo *)0x0);
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
    FUN_100039a80(local_a8);
    FUN_100039a80(local_a8 + 8);
    uVar4 = 0;
    if (*(int *)local_a8._16_8_ != -1) {
      if (*(int *)local_a8._16_8_ != 0) {
        LOCK();
        *(int *)local_a8._16_8_ = *(int *)local_a8._16_8_ + -1;
        local_31 = *(int *)local_a8._16_8_ != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001fe200;
      }
      QArrayData::deallocate((QArrayData *)local_a8._16_8_,2,8);
    }
    goto LAB_1001fe200;
  }
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x30);
  }
  uVar4 = FUN_10018c2b0(uVar4);
  cVar1 = FUN_100757e40(uVar4);
  if (cVar1 == '\0') {
    CAbstractTask::setWaitForSubTaskCompletion();
    iVar3 = CMessageManager::instance();
    if (((*(long *)(param_1 + 0x28) == 0) || (*(int *)(*(long *)(param_1 + 0x28) + 4) == 0)) ||
       (*(long *)(param_1 + 0x30) == 0)) {
      local_100._16_8_ = QString::fromAscii_helper("",0);
    }
    else {
      FUN_100188480(local_100 + 0x10);
    }
    local_100._8_8_ = PTR_shared_null_1021e15e8;
    local_100._0_8_ = PTR_shared_null_1021e15e8;
    local_138 = (int *)0x0;
    uStack_130 = 0;
    local_120 = 0;
    local_128 = 0;
    local_110 = 0x80000000;
    local_118.field7 = 0;
    local_108 = 1;
    CMessageManager::showMessageBox
              (iVar3,(QString *)0x3aff,(QStringList *)(local_100 + 0x10),
               (QStringList *)(local_100 + 8),(CSlotInfo *)local_100,SUB81(local_78,0),
               (QWidget *)((ulong)in_stack_fffffffffffffe6c << 0x20),(CSlotInfo *)0x0);
    QVariant::~QVariant((QVariant *)&local_118);
    if (local_138 != (int *)0x0) {
      LOCK();
      *local_138 = *local_138 + -1;
      local_31 = *local_138 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (local_138 != (int *)0x0)) {
        operator_delete(local_138);
      }
    }
    FUN_100039a80(local_100);
    FUN_100039a80(local_100 + 8);
    uVar4 = 0;
    if (*(int *)local_100._16_8_ != -1) {
      if (*(int *)local_100._16_8_ != 0) {
        LOCK();
        *(int *)local_100._16_8_ = *(int *)local_100._16_8_ + -1;
        local_31 = *(int *)local_100._16_8_ != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001fe200;
      }
      QArrayData::deallocate((QArrayData *)local_100._16_8_,2,8);
      uVar4 = 0;
    }
    goto LAB_1001fe200;
  }
  pQVar5 = operator_new(0x68);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x30);
  }
  uVar4 = FUN_10018c2b0(uVar4);
  FUN_100758ba0(&local_140,uVar4);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100143e30(pQVar5,&local_140,uVar4);
  piVar6 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar5);
  piVar7 = *(int **)(param_1 + 0x90);
  if (piVar7 != piVar6) {
    if (piVar6 != (int *)0x0) {
      LOCK();
      *piVar6 = *piVar6 + 1;
      local_31 = *piVar6 != 0;
      UNLOCK();
      piVar7 = *(int **)(param_1 + 0x90);
    }
    if (piVar7 != (int *)0x0) {
      LOCK();
      *piVar7 = *piVar7 + -1;
      local_31 = *piVar7 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (*(void **)(param_1 + 0x90) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x90));
      }
    }
    *(int **)(param_1 + 0x90) = piVar6;
    *(QObject **)(param_1 + 0x98) = pQVar5;
  }
  if (piVar6 != (int *)0x0) {
    LOCK();
    *piVar6 = *piVar6 + -1;
    local_31 = *piVar6 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar6);
    }
  }
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_31 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001fda9f;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_1001fda9f:
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x90) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x90) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x98);
  }
  QObject::connect(&local_148,uVar4,"2canceled()",param_1,"1breakConversion()",0);
  if (local_148 == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_148);
  if (cVar1 == '\0') {
    FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","connected",
                  "Tasks/CTaskConvertOldFormatVmPD.cpp",0xfb,"backupVm");
  }
  (**(code **)(**(long **)(param_1 + 0x98) + 0x1a0))();
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x30);
  }
  uVar4 = FUN_10018c2b0(uVar4);
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmName();
  FUN_100758ff0(&local_158,this,&local_160);
  QString::normalized(&local_150,&local_158,1,0);
  QString::operator=(this,&local_150);
  if (*(int *)local_150.field0_0x0 != -1) {
    if (*(int *)local_150.field0_0x0 != 0) {
      LOCK();
      *(int *)local_150.field0_0x0 = *(int *)local_150.field0_0x0 + -1;
      local_31 = *(int *)local_150.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001fdf0e;
    }
    QArrayData::deallocate((QArrayData *)local_150.field0_0x0,2,8);
  }
LAB_1001fdf0e:
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_31 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001fdf44;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_1001fdf44:
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      local_31 = *(int *)local_160 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001fdf7a;
    }
    QArrayData::deallocate(local_160,2,8);
  }
LAB_1001fdf7a:
  local_170.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QDir::QDir((QDir *)&local_168,&local_170);
  cVar2 = QDir::mkpath(&local_168);
  QDir::~QDir((QDir *)&local_168);
  if (*(int *)local_170.field0_0x0 != -1) {
    if (*(int *)local_170.field0_0x0 != 0) {
      LOCK();
      *(int *)local_170.field0_0x0 = *(int *)local_170.field0_0x0 + -1;
      local_31 = *(int *)local_170.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001fdfee;
    }
    QArrayData::deallocate((QArrayData *)local_170.field0_0x0,2,8);
  }
LAB_1001fdfee:
  if (cVar2 == '\0') {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: failed to create backup directory");
    uVar4 = 0x80000009;
  }
  else {
    FUN_100758a00(&local_178,uVar4);
    if (*(int **)(param_1 + 0x78) != local_178) {
      local_40 = local_178;
      if (*local_178 != -1) {
        if (*local_178 == 0) {
          QListData::detach((int)&local_40);
          iVar3 = local_40[2];
          if (iVar3 != local_40[3]) {
            local_178 = local_178 + (long)local_178[2] * 2 + 4;
            piVar7 = local_40 + (long)iVar3 * 2 + 4;
            lVar8 = (long)local_40[3] * 8 + (long)iVar3 * -8;
            do {
              piVar6 = *(int **)local_178;
              *(int **)piVar7 = piVar6;
              if (1 < *piVar6 + 1U) {
                LOCK();
                *piVar6 = *piVar6 + 1;
                local_31 = *piVar6 != 0;
                UNLOCK();
              }
              piVar7 = piVar7 + 2;
              local_178 = local_178 + 2;
              lVar8 = lVar8 + -8;
            } while (lVar8 != 0);
          }
        }
        else {
          LOCK();
          *local_178 = *local_178 + 1;
          local_31 = *local_178 != 0;
          UNLOCK();
        }
      }
      piVar7 = *(int **)(param_1 + 0x78);
      *(int **)(param_1 + 0x78) = local_40;
      local_40 = piVar7;
      FUN_100039a80(&local_40);
    }
    FUN_100039a80(&local_178);
    pvVar9 = operator_new(0x28);
    uVar4 = FUN_100757f00(uVar4);
    FUN_1001ef020(pvVar9,this,uVar4,0);
    *(void **)(param_1 + 0x60) = pvVar9;
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x90) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x90) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x98);
    }
    QObject::connect(&local_180,pvVar9,"2progressChanged(int)",uVar4,"1setValue(int)",2);
    if (cVar1 == '\0') {
      cVar1 = '\0';
    }
    else if (local_180 == 0) {
      cVar1 = '\0';
    }
    else {
      cVar1 = QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_180);
    if (cVar1 == '\0') {
      FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","connected",
                    "Tasks/CTaskConvertOldFormatVmPD.cpp",0x112,"backupVm");
    }
    CAbstractTask::setWaitForSubTaskCompletion();
    QThread::start(*(undefined8 *)(param_1 + 0x60),7);
    FUN_1001fe6c0(param_1);
    uVar4 = 0;
  }
LAB_1001fe200:
  QVariant::~QVariant(local_58);
  if (local_78[0] != (int *)0x0) {
    LOCK();
    *local_78[0] = *local_78[0] + -1;
    local_31 = *local_78[0] != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_78[0] != (int *)0x0)) {
      operator_delete(local_78[0]);
    }
  }
  return uVar4;
}

