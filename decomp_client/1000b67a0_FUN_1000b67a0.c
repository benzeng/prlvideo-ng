
void FUN_1000b67a0(QObject *param_1)

{
  int iVar1;
  QArrayData *pQVar2;
  QArrayData *local_38;
  
  *(undefined ***)param_1 = &PTR_FUN_1021f8be0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1021f8c80;
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("SGAL","prl_client_app",2,"Deinitializing: Shared Guest Applications client");
  }
  iVar1 = FUN_100a4a070(param_1 + 0x10);
  if (iVar1 < 0) {
    QString::toUtf8();
    FUN_100df99c0("SGAL","prl_client_app",0,
                  "Error: failed to unregister Shared Guest Applications client tool: this=%p, vmUuid=\"%s\""
                  ,param_1,local_38 + *(long *)(local_38 + 0x10));
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        if (*(int *)local_38 != 0) goto LAB_1000b6874;
      }
      QArrayData::deallocate(local_38,1,8);
    }
  }
LAB_1000b6874:
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("SGAL","prl_client_app",2,"Deinitialized: Shared Guest Applications client");
  }
  pQVar2 = *(QArrayData **)(param_1 + 0x20);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_1000b68cb;
      pQVar2 = *(QArrayData **)(param_1 + 0x20);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1000b68cb:
  FUN_100a4a040(param_1 + 0x10);
  QObject::~QObject(param_1);
  return;
}

