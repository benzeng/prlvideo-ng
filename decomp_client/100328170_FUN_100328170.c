
void FUN_100328170(long param_1)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  undefined8 uVar4;
  Connection local_30 [8];
  
  QMutex::lock();
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
  }
  lVar1 = FUN_100319390(uVar4);
  if (lVar1 == 0) {
    FUN_100df99c0("","prl_client_app",0,
                  "Failed to initialize Coherence gate. VM object does not exist!");
  }
  else {
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
    }
    plVar2 = (long *)FUN_100ac9fe0(uVar4);
    *(long **)(param_1 + 0x48) = plVar2;
    if (plVar2 == (long *)0x0) {
      FUN_100df99c0("","prl_client_app",0,
                    "Failed to initialize Coherence gate. IChrClient::CreateChrClientInstance has returned 0!"
                   );
    }
    else {
      if (DAT_102310a08 == (void *)0x0) {
        pvVar3 = operator_new(0x220);
        FUN_1007cc3f0(pvVar3);
        DAT_102273890 = 1;
        plVar2 = *(long **)(param_1 + 0x48);
        DAT_102310a08 = pvVar3;
      }
      pvVar3 = DAT_102310a08;
      uVar4 = (**(code **)(*plVar2 + 0xc0))(plVar2);
      FUN_1007d2920(pvVar3,uVar4);
      if (DAT_1023108e0 == (void *)0x0) {
        pvVar3 = operator_new(0x18);
        FUN_1001a61d0(pvVar3);
        DAT_10226c110 = 1;
        DAT_1023108e0 = pvVar3;
      }
      FUN_1001a6390(DAT_1023108e0,*(undefined8 *)(param_1 + 0x48),"2vmActivated(const QString&)",
                    "2coherenceWndActivated(const QString&)",0);
      if (DAT_1023108e0 == (void *)0x0) {
        pvVar3 = operator_new(0x18);
        FUN_1001a61d0(pvVar3);
        DAT_10226c110 = 1;
        DAT_1023108e0 = pvVar3;
      }
      FUN_1001a6390(DAT_1023108e0,*(undefined8 *)(param_1 + 0x48),"2stubActivated(const QString&)",
                    "2coherenceStubActivated(const QString&)",0);
      if (DAT_1023108e0 == (void *)0x0) {
        pvVar3 = operator_new(0x18);
        FUN_1001a61d0(pvVar3);
        DAT_10226c110 = 1;
        DAT_1023108e0 = pvVar3;
      }
      FUN_1001a6390(DAT_1023108e0,*(undefined8 *)(param_1 + 0x48),"2vmDeactivated(const QString&)",
                    "2coherenceWndDeactivated(const QString&)",0);
      plVar2 = *(long **)(param_1 + 0x48);
      uVar4 = (**(code **)(*plVar2 + 0xc0))(plVar2);
      QObject::connect(local_30,plVar2,"2coherenceAppActivated()",uVar4,"1onCoherenceAppActivated()"
                       ,0);
      QMetaObject::Connection::~Connection(local_30);
      lVar1 = FUN_100adb0d0(0);
      *(long *)(param_1 + 0x58) = lVar1;
      if (lVar1 == 0) {
        FUN_100df99c0("","prl_client_app",0,
                      "Failed to initialize Coherence gate. oherenceClient::CCoherenceDesktopManager::GetInstance has returned 0!"
                     );
      }
    }
  }
  QMutex::unlock();
  return;
}

