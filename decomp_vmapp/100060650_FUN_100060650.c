
void FUN_100060650(QObject *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  undefined *puVar4;
  byte bVar5;
  int iVar6;
  void *pvVar7;
  undefined8 uVar8;
  QObject *pQVar9;
  undefined8 in_stack_ffffffffffffff08;
  undefined **ppuVar10;
  undefined4 uVar11;
  long local_b8;
  Connection local_b0 [8];
  Connection local_a8 [8];
  Connection local_a0 [8];
  undefined *local_98;
  undefined1 auStack_90 [16];
  undefined *local_80;
  QArrayData *local_70;
  undefined *local_68;
  undefined1 auStack_60 [16];
  undefined *local_50;
  long *local_40;
  undefined1 local_31;
  
  uVar11 = (undefined4)((ulong)in_stack_ffffffffffffff08 >> 0x20);
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_100ba9f90;
  *(undefined8 *)(param_1 + 0x10) = 0;
  piVar2 = (int *)*param_3;
  *(int **)(param_1 + 0x18) = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    local_31 = *piVar2 != 0;
    UNLOCK();
  }
  piVar2 = (int *)*param_4;
  *(int **)(param_1 + 0x20) = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    local_31 = *piVar2 != 0;
    UNLOCK();
  }
  param_1[0x30] = (QObject)0x1;
  QWaitCondition::QWaitCondition((QWaitCondition *)(param_1 + 0x38));
  QMutex::QMutex((QMutex *)(param_1 + 0x40),0);
  FUN_100795ca0(param_1 + 0x48);
  QReadWriteLock::QReadWriteLock((QReadWriteLock *)(param_1 + 0x50),0);
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  QMutex::QMutex((QMutex *)(param_1 + 0x68),0);
  puVar4 = PTR_shared_null_100ba2188;
  *(undefined **)(param_1 + 0x70) = PTR_shared_null_100ba2188;
  FUN_1008e3970("","vm",0,"Parallels Virtual Machine Constructed");
  iVar6 = FUN_1006d65a0();
  param_1[0x5c] = (QObject)(iVar6 == 0);
  DAT_1011c3650 = param_1;
  if ((*param_2 == 0) || (*(long *)(*param_2 + 0x10) == 0)) {
    pvVar7 = operator_new(0x80);
    uVar8 = FUN_100795490(2);
    FUN_1006e6fe0(&local_70);
    local_98 = PTR_shared_null_100ba20d0;
    auStack_90._8_4_ = (int)PTR_shared_null_100ba20d0;
    auStack_90._0_8_ = PTR_shared_null_100ba20d0;
    auStack_90._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
    local_80 = puVar4;
    ppuVar10 = &local_98;
    FUN_10078d9f0(pvVar7,uVar8,1,&local_70,0,1,ppuVar10);
    uVar11 = (undefined4)((ulong)ppuVar10 >> 0x20);
    *(void **)(param_1 + 0x28) = pvVar7;
    FUN_1000697c0(&local_98);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100060911;
      }
      QArrayData::deallocate(local_70,2,8);
    }
  }
  else {
    pvVar7 = operator_new(0x80);
    uVar8 = FUN_100795490(2);
    local_40 = (long *)*param_2;
    if (local_40 != (long *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
    }
    local_68 = PTR_shared_null_100ba20d0;
    auStack_60._8_4_ = (int)PTR_shared_null_100ba20d0;
    auStack_60._0_8_ = PTR_shared_null_100ba20d0;
    auStack_60._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
    local_50 = puVar4;
    FUN_10078d620(pvVar7,uVar8,1,&local_40,&local_68);
    *(void **)(param_1 + 0x28) = pvVar7;
    FUN_1000697c0(&local_68);
    if (local_40 != (long *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)(*local_40 + 0x10))();
      }
    }
  }
LAB_100060911:
  pQVar9 = param_1 + 0x28;
  QObject::connect(local_a0,*(undefined8 *)pQVar9,"2onStateChanged(IOSender::State)",param_1,
                   "1innerHandleStateChange(IOSender::State)",2);
  QMetaObject::Connection::~Connection(local_a0);
  QObject::connect(local_a8,*(undefined8 *)pQVar9,"2onPackageReceived(const SmartPtr<IOPackage>)",
                   param_1,"1innerHandlePackage(const SmartPtr<IOPackage>)",2);
  QMetaObject::Connection::~Connection(local_a8);
  QObject::connect(local_b0,*(undefined8 *)pQVar9,
                   "2onDetachedClientReceived( const SmartPtr<IOPackage>, const IOCommunication::DetachedClient)"
                   ,param_1,
                   "1innerDetachedClientReceived( const SmartPtr<IOPackage>, const IOCommunication::DetachedClient)"
                   ,2);
  QMetaObject::Connection::~Connection(local_b0);
  FUN_1004135d0();
  iVar6 = FUN_1006d65a0();
  if (iVar6 != 0) {
    uVar8 = FUN_1004135d0();
    QObject::connect(&local_b8,uVar8,"2sigWebStateChanged( bool )",param_1,
                     "1parentalSettingsChanged( bool )",2);
    bVar5 = 1;
    if (local_b8 != 0) {
      bVar5 = QMetaObject::Connection::isConnected_helper();
      bVar5 = bVar5 ^ 1;
    }
    QMetaObject::Connection::~Connection((Connection *)&local_b8);
    if (bVar5 != 0) {
      FUN_1008e3970("","vm",0,"failed to connect to FC changes notifier");
      FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","FALSE","CVmController.cpp",
                    CONCAT44(uVar11,0xb1),"CVMController");
    }
  }
  return;
}

