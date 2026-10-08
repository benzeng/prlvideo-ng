
void FUN_1000a0da0(QObject *param_1)

{
  int iVar1;
  QArrayData *pQVar2;
  QArrayData *local_30;
  
  *(undefined ***)param_1 = &PTR_FUN_1021f8710;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1021f8790;
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("VSDC","prl_client_app",3,"Deinitializing: CVSDebugClient client");
  }
  iVar1 = FUN_100a4a070(param_1 + 0x10);
  if (iVar1 < 0) {
    QString::toUtf8();
    FUN_100df99c0("VSDC","prl_client_app",0,
                  "Failed to unregister SharedHostApps client tool: this=%p, vmUuid=\"%s\"",param_1,
                  local_30 + *(long *)(local_30 + 0x10));
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        UNLOCK();
        if (*(int *)local_30 != 0) goto LAB_1000a0e6f;
      }
      QArrayData::deallocate(local_30,1,8);
    }
  }
LAB_1000a0e6f:
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("VSDC","prl_client_app",3,"Deinitialized: CVSDebugClient client");
  }
  pQVar2 = *(QArrayData **)(param_1 + 0x30);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_1000a0ec6;
      pQVar2 = *(QArrayData **)(param_1 + 0x30);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1000a0ec6:
  pQVar2 = *(QArrayData **)(param_1 + 0x20);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_1000a0ef6;
      pQVar2 = *(QArrayData **)(param_1 + 0x20);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1000a0ef6:
  FUN_100a4a040(param_1 + 0x10);
  QObject::~QObject(param_1);
  return;
}

