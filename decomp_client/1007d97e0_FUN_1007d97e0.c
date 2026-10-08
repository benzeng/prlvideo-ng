
void FUN_1007d97e0(QObject *param_1,QObject *param_2,QObject *param_3)

{
  QObject QVar1;
  long lVar2;
  undefined8 uVar3;
  QObject *pQVar4;
  long local_38 [2];
  
  QObject::QObject(param_1,param_3);
  *(undefined ***)param_1 = &PTR_FUN_10222e290;
  if (param_2 == (QObject *)0x0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    param_1[0x20] = (QObject)0x0;
    pQVar4 = (QObject *)0x0;
  }
  else {
    lVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
    *(long *)(param_1 + 0x10) = lVar2;
    *(QObject **)(param_1 + 0x18) = param_2;
    param_1[0x20] = (QObject)0x0;
    pQVar4 = (QObject *)0x0;
    if ((lVar2 != 0) && (pQVar4 = (QObject *)0x0, *(int *)(lVar2 + 4) != 0)) {
      pQVar4 = param_2;
    }
  }
  FUN_10015a330(pQVar4);
  CDispCommonPreferences::getWorkspacePreferences();
  QVar1 = (QObject)CDispWorkspacePreferences::isEnableSendStatisticReport();
  param_1[0x20] = QVar1;
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  QObject::connect(local_38,uVar3,"2commonPrefsChanged(CDispCommonPreferences)",param_1,
                   "1onCommonPrefsChanged(CDispCommonPreferences)",0);
  if (local_38[0] != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)local_38);
  return;
}

