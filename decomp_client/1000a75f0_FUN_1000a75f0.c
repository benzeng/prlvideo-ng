
void FUN_1000a75f0(QObject *param_1,undefined1 *param_2)

{
  int *piVar1;
  long lVar2;
  undefined *puVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  void *pvVar8;
  undefined8 uVar9;
  int iVar10;
  bool bVar11;
  undefined1 auVar12 [16];
  Connection local_90 [8];
  long local_88;
  int *local_80;
  int *local_78;
  int *local_70;
  int *local_68;
  uint local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  undefined1 local_31;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_1021f8900;
  puVar3 = PTR_shared_null_1021e15d0;
  auVar12._8_4_ = (int)PTR_shared_null_1021e15d0;
  auVar12._0_8_ = PTR_shared_null_1021e15d0;
  auVar12._12_4_ = (int)((ulong)PTR_shared_null_1021e15d0 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x10) = auVar12;
  *(undefined **)(param_1 + 0x20) = puVar3;
  param_1[0x28] = (QObject)0x0;
  pvVar8 = operator_new(0x28);
  FUN_1000eeda0(pvVar8);
  *(void **)(param_1 + 0x30) = pvVar8;
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 0;
  }
  FUN_1000aa470("hwndList_t",0,1);
  uVar9 = FUN_100370280();
  QObject::connect(&local_40,uVar9,"2afterConsoleCreated(const QString &, VmDisplayId)",param_1,
                   "1onAfterConsoleCreated(const QString &, VmDisplayId)",0);
  bVar5 = 1;
  if ((local_40 != 0) && (cVar4 = QMetaObject::Connection::isConnected_helper(), cVar4 != '\0')) {
    uVar9 = FUN_100370280();
    QObject::connect(&local_48,uVar9,
                     "2beforeConsoleRemoved(const QString&, const QString &, VmDisplayId)",param_1,
                     "1onBeforeConsoleRemoved(const QString&, const QString &, VmDisplayId)",0);
    bVar5 = 1;
    if (local_48 != 0) {
      bVar5 = QMetaObject::Connection::isConnected_helper();
      bVar5 = bVar5 ^ 1;
    }
    QMetaObject::Connection::~Connection((Connection *)&local_48);
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  if (bVar5 != 0) {
    FUN_100df99c0("SGAD","prl_client_app",0,"Error: failed to connect to console manager slots");
    return;
  }
  uVar9 = FUN_100152280();
  QObject::connect(&local_50,uVar9,"2afterServerAdded(CServerWrap&)",param_1,
                   "1onAfterServerAdded(CServerWrap&)",0);
  bVar5 = 1;
  if ((local_50 != 0) && (cVar4 = QMetaObject::Connection::isConnected_helper(), cVar4 != '\0')) {
    QObject::connect(&local_58,param_1,"2sigSdkEventReceived(SdkHandleWrap, void *)",param_1,
                     "1onSdkEventReceived(SdkHandleWrap, void *)",0);
    bVar5 = 1;
    if (local_58 != 0) {
      bVar5 = QMetaObject::Connection::isConnected_helper();
      bVar5 = bVar5 ^ 1;
    }
    QMetaObject::Connection::~Connection((Connection *)&local_58);
  }
  QMetaObject::Connection::~Connection((Connection *)&local_50);
  if (bVar5 != 0) {
    FUN_100df99c0("SGAD","prl_client_app",0,"Error: failed to connect to server manager slots");
    return;
  }
  uVar9 = FUN_100152280();
  FUN_100154d10(&local_80,uVar9);
  FUN_100062ec0(&local_78,&local_80);
  local_70 = local_78 + (long)local_78[2] * 2 + 4;
  local_68 = local_78 + (long)local_78[3] * 2 + 4;
  local_60 = 1;
  if (*local_80 == -1) {
LAB_1000a7860:
    do {
      iVar10 = 0x10;
      if (local_70 == local_68) break;
      piVar1 = (int *)**(undefined8 **)local_70;
      lVar2 = (*(undefined8 **)local_70)[1];
      if (piVar1 != (int *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        local_31 = *piVar1 != 0;
        UNLOCK();
      }
      iVar10 = 0x13;
      if (local_60 != 0) {
        if (((piVar1 != (int *)0x0) && (lVar2 != 0)) && (piVar1[1] != 0)) {
          FUN_10015aa20(&local_88);
          iVar6 = _PrlSrv_RegEventHandler(local_88,FUN_1000a7520,param_1);
          if (local_88 != 0) {
            _PrlHandle_Free();
          }
          if (iVar6 < 0) {
            iVar10 = 1;
            FUN_100df99c0("SGAD","prl_client_app",0,"Error: failed to register event handler");
            goto LAB_1000a78de;
          }
        }
        local_60 = 0;
      }
LAB_1000a78de:
      if (piVar1 != (int *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        local_31 = *piVar1 != 0;
        UNLOCK();
        if (!(bool)local_31) {
          operator_delete(piVar1);
        }
      }
      if (iVar10 != 0x13) break;
      local_70 = local_70 + 2;
      uVar7 = local_60 ^ 1;
      bVar11 = local_60 != 1;
      iVar10 = 0x10;
      local_60 = uVar7;
    } while (bVar11);
  }
  else {
    if (*local_80 == 0) {
LAB_1000a7835:
      FUN_100063050(&local_80,local_80);
    }
    else {
      LOCK();
      *local_80 = *local_80 + -1;
      local_31 = *local_80 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1000a7835;
    }
    iVar10 = 0x10;
    if (local_60 != 0) goto LAB_1000a7860;
  }
  if (*local_78 != -1) {
    if (*local_78 != 0) {
      LOCK();
      *local_78 = *local_78 + -1;
      local_31 = *local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000a797c;
    }
    FUN_100063050(&local_78,local_78);
  }
LAB_1000a797c:
  if (iVar10 == 0x10) {
    if (DAT_1023108e0 == (void *)0x0) {
      pvVar8 = operator_new(0x18);
      FUN_1001a61d0(pvVar8);
      DAT_10226c110 = 1;
      DAT_1023108e0 = pvVar8;
    }
    QObject::connect(local_90,DAT_1023108e0,"2appPreferencesChanged()",param_1,
                     "1onAppPreferencesChanged()",0);
    QMetaObject::Connection::~Connection(local_90);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 1;
    }
  }
  return;
}

