
void FUN_1007c9840(QObject *param_1)

{
  QObject *pQVar1;
  QObject QVar2;
  undefined8 uVar3;
  QObject *pQVar4;
  int *piVar5;
  int *piVar6;
  long local_38;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10222e100;
  pQVar1 = param_1 + 0x10;
  param_1[0x28] = (QObject)0x0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  uVar3 = FUN_100152280();
  pQVar4 = (QObject *)FUN_1001554a0(uVar3);
  piVar5 = (int *)0x0;
  if (pQVar4 != (QObject *)0x0) {
    piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar4);
  }
  piVar6 = *(int **)pQVar1;
  if (piVar6 != piVar5) {
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      local_2c = *piVar5 != 0;
      UNLOCK();
      piVar6 = *(int **)pQVar1;
    }
    if (piVar6 != (int *)0x0) {
      LOCK();
      *piVar6 = *piVar6 + -1;
      local_2b = *piVar6 != 0;
      UNLOCK();
      if ((!(bool)local_2b) && (*(void **)pQVar1 != (void *)0x0)) {
        operator_delete(*(void **)pQVar1);
      }
    }
    *(int **)(param_1 + 0x10) = piVar5;
    *(QObject **)(param_1 + 0x18) = pQVar4;
  }
  if (piVar5 != (int *)0x0) {
    LOCK();
    *piVar5 = *piVar5 + -1;
    local_2a = *piVar5 != 0;
    UNLOCK();
    if (!(bool)local_2a) {
      operator_delete(piVar5);
    }
  }
  if (((*(long *)pQVar1 != 0) && (*(int *)(*(long *)pQVar1 + 4) != 0)) &&
     (*(long *)(param_1 + 0x18) != 0)) {
    FUN_10015a330();
    CDispCommonPreferences::getWorkspacePreferences();
    QVar2 = (QObject)CDispWorkspacePreferences::isEnableSendStatisticReport();
    param_1[0x28] = QVar2;
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x18);
    }
    QObject::connect(&local_38,uVar3,"2commonPrefsChanged(CDispCommonPreferences)",param_1,
                     "1onServerCommonPrefsChanged()",0);
    if (local_38 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_38);
  }
  return;
}

