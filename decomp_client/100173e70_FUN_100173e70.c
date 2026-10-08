
void FUN_100173e70(long param_1,undefined4 param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  Connection local_40 [8];
  QVariant local_38;
  
  uVar3 = 0;
  if ((*(long *)(param_1 + 0xa8) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0xa8) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0xb0);
  }
  FUN_10061abe0(&local_38,uVar3,0);
  iVar1 = QVariant::toInt((bool *)&local_38);
  QVariant::~QVariant(&local_38);
  if (iVar1 == -0x7ffef000) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: failed to obtain license key.");
  }
  else {
    pvVar2 = operator_new(0x28);
    uVar3 = 0;
    if ((*(long *)(param_1 + 0xa8) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0xa8) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0xb0);
    }
    FUN_100221ca0(pvVar2,uVar3,param_2);
    QObject::connect(local_40,pvVar2,"2taskFinished (PRL_RESULT)",param_1,
                     "1onRegisterInstalledSoftwareFinished(PRL_RESULT)",0);
    QMetaObject::Connection::~Connection(local_40);
    CAbstractTask::execute();
  }
  return;
}

