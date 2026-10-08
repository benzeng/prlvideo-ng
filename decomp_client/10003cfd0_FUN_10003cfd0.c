
void FUN_10003cfd0(QObject *param_1,undefined8 param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  undefined *local_58;
  undefined1 auStack_50 [16];
  undefined *local_40;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_1021f8b20;
  *(undefined **)(param_1 + 0x10) = PTR_shared_null_1021e15d0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSMachPort_10226a938,PTR_s_alloc_102268b58);
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_init_102268ca8);
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSConnection_10226a940,PTR_s_alloc_102268b58);
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (uVar4,PTR_s_initWithReceivePort_sendPort__102269990,uVar3,0);
  (*(code *)PTR__objc_msgSend_1021e1c68)
            (uVar3,PTR_s_addRequestMode__102269998,
             *(undefined8 *)PTR__NSRunLoopCommonModes_1021e1138);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_enableMultipleThreads_1022699a0);
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(PTR_Server_10226a948,PTR_s_alloc_102268b58);
  DAT_102311d98 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_init_102268ca8);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_setRootObject__1022699a8,DAT_102311d98);
  cVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_registerName__1022699b0,&cf_PDSERVER);
  if (cVar1 == '\0') {
    if (0 < DAT_10230ffd0) {
      FUN_100df99c0("SGA_SERVER","prl_client_app",1,"CStubServer: set name failed");
    }
  }
  else {
    pvVar5 = operator_new(0x88);
    uVar3 = FUN_100a6e930((param_4 & 0xff) * 2);
    local_58 = PTR_shared_null_1021e1288;
    auStack_50._8_4_ = (int)PTR_shared_null_1021e1288;
    auStack_50._0_8_ = PTR_shared_null_1021e1288;
    auStack_50._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
    local_40 = PTR_shared_null_1021e15e8;
    FUN_100a725b0(pvVar5,uVar3,2,param_2,param_3,0,&local_58);
    *(void **)(param_1 + 0x18) = pvVar5;
    FUN_10003f090(&local_58);
    if (*(long *)(param_1 + 0x18) == 0) {
      if (0 < DAT_10230ffd0) {
        FUN_100df99c0("SGA_SERVER","prl_client_app",1,"Failed to create IOServer");
      }
    }
    else {
      QObject::connect(&local_60,*(long *)(param_1 + 0x18),
                       "2onPackageReceived(IOSender::Handle, const SmartPtr<IOPackage>)",param_1,
                       "1packageReceived(IOSender::Handle, const SmartPtr<IOPackage>)",0);
      bVar2 = 1;
      if (local_60 != 0) {
        bVar2 = QMetaObject::Connection::isConnected_helper();
        bVar2 = bVar2 ^ 1;
      }
      QMetaObject::Connection::~Connection((Connection *)&local_60);
      if ((0 < DAT_10230ffd0) && (bVar2 == 1)) {
        FUN_100df99c0("SGA_SERVER","prl_client_app",1,"Cannot connect to onPackageReceived");
      }
      QObject::connect(&local_68,*(undefined8 *)(param_1 + 0x18),
                       "2onServerStateChanged(IOSender::State)",param_1,
                       "1stateChanged(IOSender::State)",0);
      if (local_68 == 0) {
        cVar1 = '\0';
      }
      else {
        cVar1 = QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)&local_68);
      if (cVar1 == '\0' && 0 < DAT_10230ffd0) {
        FUN_100df99c0("SGA_SERVER","prl_client_app",1,"Cannot connect to onServerStateChanged");
      }
      QObject::connect(&local_70,*(undefined8 *)(param_1 + 0x18),
                       "2onClientConnected(IOSender::Handle)",param_1,
                       "1clientConnected(IOSender::Handle)",0);
      if (local_70 == 0) {
        cVar1 = '\0';
      }
      else {
        cVar1 = QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)&local_70);
      if (cVar1 == '\0' && 0 < DAT_10230ffd0) {
        FUN_100df99c0("SGA_SERVER","prl_client_app",1,"Cannot connect to onClientConnected");
      }
      QObject::connect(&local_78,*(undefined8 *)(param_1 + 0x18),
                       "2onClientDisconnected(IOSender::Handle)",param_1,
                       "1clientDisconnected(IOSender::Handle)",0);
      if (local_78 == 0) {
        cVar1 = '\0';
      }
      else {
        cVar1 = QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)&local_78);
      if (cVar1 == '\0' && 0 < DAT_10230ffd0) {
        FUN_100df99c0("SGA_SERVER","prl_client_app",1,"Cannot connect to onClientDisconnected");
      }
    }
  }
  return;
}

