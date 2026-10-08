
void FUN_1001be000(QObject *param_1,int param_2)

{
  QNetworkProxy *pQVar1;
  char cVar2;
  QString local_48;
  QString local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  if (param_2 != 1) {
    QMetaObject::activate(param_1,(QMetaObject *)&DAT_1021eed30,1,(void **)0x0);
    return;
  }
  param_1[0x29] = (QObject)0x1;
  pQVar1 = (QNetworkProxy *)(param_1 + 0x10);
  CUserAuthDialog::username();
  QNetworkProxy::setUser((QString *)pQVar1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001be080;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1001be080:
  CUserAuthDialog::password();
  QNetworkProxy::setPassword((QString *)pQVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001be0de;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1001be0de:
  cVar2 = CUserAuthDialog::savePasswordRequired();
  if (cVar2 == '\0') goto LAB_1001be18a;
  QNetworkProxy::user();
  QNetworkProxy::password();
  ProxyAuthUtils::saveProxyCredentials(pQVar1,&local_40,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_21 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001be15a;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1001be15a:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_21 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001be18a;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1001be18a:
  FUN_1001bd750(param_1);
  return;
}

