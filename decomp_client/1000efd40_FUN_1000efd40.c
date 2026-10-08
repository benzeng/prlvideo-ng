
void FUN_1000efd40(QObject *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  Connection local_50 [8];
  code *local_48;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_1021ee6f0;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  uVar2 = _LSSharedFileListCreate
                    (0,*(undefined8 *)PTR__kLSSharedFileListRecentDocumentItems_1021e19c8,0);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined **)(param_1 + 0x30) = PTR_shared_null_1021e15e8;
  QFutureWatcherBase::QFutureWatcherBase((QFutureWatcherBase *)(param_1 + 0x38),(QObject *)0x0);
  *(undefined ***)(param_1 + 0x38) = &PTR_metaObject_10226d0a0;
  QFutureInterfaceBase::QFutureInterfaceBase((QFutureInterfaceBase *)(param_1 + 0x48),0xe);
  *(undefined ***)(param_1 + 0x48) = &PTR_FUN_10226d138;
  QFutureInterfaceBase::refT();
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    uVar2 = _CFRunLoopGetCurrent();
    _LSSharedFileListAddObserver
              (lVar1,uVar2,*(undefined8 *)PTR__kCFRunLoopDefaultMode_1021e1950,FUN_1000eff20,param_1
              );
  }
  local_38 = PTR_finished_1021e13f0;
  local_30 = 0;
  local_48 = FUN_1000eff40;
  local_40 = 0;
  puVar3 = operator_new(0x20);
  *puVar3 = 1;
  *(code **)(puVar3 + 2) = FUN_1000f13e0;
  *(code **)(puVar3 + 4) = FUN_1000eff40;
  *(undefined8 *)(puVar3 + 6) = 0;
  QObject::connectImpl
            (local_50,(QFutureWatcherBase *)(param_1 + 0x38),&local_38,param_1,&local_48,puVar3,0,0,
             PTR_staticMetaObject_1021e13e8);
  QMetaObject::Connection::~Connection(local_50);
  return;
}

