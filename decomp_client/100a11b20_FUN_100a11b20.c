
void FUN_100a11b20(long param_1)

{
  long *plVar1;
  char cVar2;
  undefined8 uVar3;
  QArrayData *local_48;
  QArrayData *local_40;
  long local_38;
  undefined1 local_29;
  
  plVar1 = (long *)(param_1 + 0x30);
  cVar2 = FUN_10019cd90(plVar1);
  if (cVar2 == '\0') goto LAB_100a11c2a;
  uVar3 = 0;
  if ((*plVar1 != 0) && (uVar3 = 0, *(int *)(*plVar1 + 4) != 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x38);
  }
  FUN_100a1c770(&local_48,plVar1);
  QString::toLatin1();
  QObject::connect(&local_38,param_1,
                   "2invokeCompletionHandler(PRL_RESULT, const QVariant&, const QVariantMap&)",uVar3
                   ,local_40 + *(long *)(local_40 + 0x10),0);
  if (local_38 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a11be3;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100a11be3:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a11c13;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100a11c13:
  FUN_100a1b720(param_1,*(undefined4 *)(param_1 + 0x68),param_1 + 0x70,param_1 + 0x80);
LAB_100a11c2a:
  QObject::deleteLater();
  return;
}

