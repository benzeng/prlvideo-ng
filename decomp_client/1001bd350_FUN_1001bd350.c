
void FUN_1001bd350(long param_1)

{
  QNetworkProxy *pQVar1;
  char cVar2;
  ushort uVar3;
  QObject *pQVar4;
  int *piVar5;
  int *piVar6;
  undefined8 uVar7;
  QString *pQVar8;
  long local_58;
  long local_50;
  QArrayData *local_48;
  QString local_40;
  QString local_38;
  QString local_30;
  undefined1 local_21;
  
  *(undefined1 *)(param_1 + 0x2a) = 0;
  if (*(char *)(param_1 + 0x28) == '\0') {
    *(undefined1 *)(param_1 + 0x28) = 1;
    local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    pQVar1 = (QNetworkProxy *)(param_1 + 0x10);
    cVar2 = ProxyAuthUtils::getProxyCredentials(pQVar1,&local_30,&local_38);
    if (cVar2 != '\0') {
      QNetworkProxy::setUser((QString *)pQVar1);
      QNetworkProxy::setPassword((QString *)pQVar1);
      FUN_1001bd750(param_1);
    }
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_21 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1001bd3f5;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
LAB_1001bd3f5:
    if (*(int *)local_30.field0_0x0 != -1) {
      if (*(int *)local_30.field0_0x0 != 0) {
        LOCK();
        *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
        local_21 = *(int *)local_30.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1001bd425;
      }
      QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
    }
LAB_1001bd425:
    if (cVar2 != '\0') {
      return;
    }
  }
  if (((*(long *)(param_1 + 0x18) != 0) && (*(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) &&
     (*(long *)(param_1 + 0x20) != 0)) {
    return;
  }
  QNetworkProxy::hostName();
  uVar3 = QNetworkProxy::port();
  pQVar4 = (QObject *)
           CProxyAuthenticator::createAuthDialog(&local_40,(uint)uVar3,*(bool *)(param_1 + 0x29));
  piVar5 = (int *)0x0;
  if (pQVar4 != (QObject *)0x0) {
    piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar4);
  }
  piVar6 = *(int **)(param_1 + 0x18);
  if (piVar6 != piVar5) {
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      local_21 = *piVar5 != 0;
      UNLOCK();
      piVar6 = *(int **)(param_1 + 0x18);
    }
    if (piVar6 != (int *)0x0) {
      LOCK();
      *piVar6 = *piVar6 + -1;
      local_21 = *piVar6 != 0;
      UNLOCK();
      if ((!(bool)local_21) && (*(void **)(param_1 + 0x18) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x18));
      }
    }
    *(int **)(param_1 + 0x18) = piVar5;
    *(QObject **)(param_1 + 0x20) = pQVar4;
  }
  if (piVar5 != (int *)0x0) {
    LOCK();
    *piVar5 = *piVar5 + -1;
    local_21 = *piVar5 != 0;
    UNLOCK();
    if (!(bool)local_21) {
      operator_delete(piVar5);
    }
  }
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_21 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001bd514;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1001bd514:
  pQVar8 = (QString *)0x0;
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (pQVar8 = (QString *)0x0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
    pQVar8 = *(QString **)(param_1 + 0x20);
  }
  local_48 = (QArrayData *)QString::fromAscii_helper("",0);
  CUserAuthDialog::setUsername(pQVar8);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001bd579;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1001bd579:
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
  }
  cVar2 = '\0';
  QObject::connect(&local_50,uVar7,"2finished(int)",param_1,"1onAuthDialogFinished(int)",0);
  if (local_50 != 0) {
    cVar2 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_50);
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
  }
  QObject::connect(&local_58,uVar7,"2finished(int)",uVar7,"1deleteLater()",0);
  if ((cVar2 != '\0') && (local_58 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_58);
  QWidget::show();
  return;
}

