
void FUN_100a25b10(QObject *param_1)

{
  int *piVar1;
  undefined *puVar2;
  QObject QVar3;
  void *pvVar4;
  QObject *pQVar5;
  undefined1 auVar6 [16];
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  undefined1 local_49;
  undefined1 local_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_102237cb0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102237d38;
  pvVar4 = operator_new(0x1a0);
  FUN_100a30ca0(pvVar4,param_1 + 0x10);
  *(void **)(param_1 + 0x18) = pvVar4;
  FUN_100dda3c0(local_48);
  FUN_100dda260(param_1 + 0x28,local_48);
  puVar2 = PTR_shared_null_1021e12f0;
  *(undefined **)(param_1 + 0x30) = PTR_shared_null_1021e12f0;
  *(undefined **)(param_1 + 0x38) = puVar2;
  puVar2 = PTR_shared_null_1021e15e8;
  auVar6._8_4_ = (int)PTR_shared_null_1021e15e8;
  auVar6._0_8_ = PTR_shared_null_1021e15e8;
  auVar6._12_4_ = (int)((ulong)PTR_shared_null_1021e15e8 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x40) = auVar6;
  *(undefined **)(param_1 + 0x50) = puVar2;
  piVar1 = *(int **)(param_1 + 0x28);
  *(int **)(param_1 + 0x58) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_49 = *piVar1 != 0;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(QObject **)(param_1 + 0x68) = param_1 + 0x68;
  *(QObject **)(param_1 + 0x70) = param_1 + 0x68;
  *(undefined8 *)(param_1 + 0x78) = 0;
  FUN_100a29760();
  *(undefined ***)(param_1 + 0x80) = &PTR_FUN_102237c20;
  *(QObject **)(param_1 + 0x128) = param_1;
  QVar3 = (QObject)(**(code **)(**(long **)(param_1 + 0x18) + 0x38))();
  param_1[0x20] = QVar3;
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("CPTOOL","CPClientCommunicator",2,"CPInterceptor::Initialize returns %d",QVar3);
    QVar3 = param_1[0x20];
  }
  if (QVar3 != (QObject)0x0) {
    QVar3 = (QObject)(**(code **)(**(long **)(param_1 + 0x18) + 0x48))();
    param_1[0x21] = QVar3;
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("CPTOOL","CPClientCommunicator",2,"CPInterceptor::Start returns %d",QVar3);
    }
  }
  FUN_1001ce5a0("SdkHandleWrap",0,1);
  FUN_100a28e30("std::list<std::string>",0,0);
  FUN_10009bee0("CP_TOOL_FORMAT",0,0);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar4 = operator_new(0x18);
    FUN_1001a61d0(pvVar4);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar4;
  }
  QObject::connect(&local_58,DAT_1023108e0,"2vmAdded(GUI::VmId)",param_1,"1onVmAdded(GUI::VmId)",0);
  if (local_58 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_58);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar4 = operator_new(0x18);
    FUN_1001a61d0(pvVar4);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar4;
  }
  QObject::connect(&local_60,DAT_1023108e0,"2vmRemoved(GUI::VmId)",param_1,"1onVmRemoved(GUI::VmId)"
                   ,0);
  if (local_60 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_60);
  QObject::connect(&local_68,param_1,
                   "2resolvePathesFromVm(QString, CP_TOOL_FORMAT, std::list<std::string>)",param_1,
                   "1resolvePathesFromVmSlot(QString, CP_TOOL_FORMAT, const std::list<std::string> &)"
                   ,0);
  if (local_68 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_68);
  QObject::connect(&local_70,param_1,
                   "2resolvePathesToVm(SdkHandleWrap, QString, std::list<std::string>, int, CP_TOOL_FORMAT)"
                   ,param_1,
                   "1resolvePathesToVmSlot(SdkHandleWrap, QString, const std::list<std::string> &, int, CP_TOOL_FORMAT)"
                   ,0);
  if (local_70 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_70);
  FUN_1000341d0(param_1 + 0x50,param_1 + 0x28);
  pQVar5 = param_1 + 0x100;
  if (((ulong)pQVar5 & 1) == 0) {
    QReadWriteLock::lockForWrite();
    pQVar5 = (QObject *)((ulong)pQVar5 | 1);
  }
  param_1[0x114] = (QObject)0x1;
  if (((ulong)pQVar5 & 1) != 0) {
    QReadWriteLock::unlock();
  }
  if (*(long *)PTR____stack_chk_guard_1021e1840 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

