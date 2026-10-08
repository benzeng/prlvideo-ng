
void FUN_100a0fbf0(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  QVariant local_58;
  QArrayData *local_48;
  QMapNodeBase *local_40;
  QVariant local_38;
  undefined1 local_21;
  
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("","WebPortalCommunication",2,"Get image request finished <%p>",param_1);
  }
  QObject::sender();
  uVar3 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e1310);
  QNetworkReply::attribute(&local_38,uVar3,0);
  uVar1 = QVariant::toInt((bool *)&local_38);
  QVariant::~QVariant(&local_38);
  uVar3 = QNetworkReply::rawHeaderPairs();
  FUN_100a0f230(&local_40,uVar3);
  QIODevice::readAll();
  QObject::deleteLater();
  uVar2 = QNetworkReply::error();
  QVariant::QVariant(&local_58,(QByteArray *)&local_48);
  FUN_100a0f410(param_1,uVar2,uVar1,&local_58,&local_40);
  QVariant::~QVariant(&local_58);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100a0fcfe;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_100a0fcfe:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_21 = 0;
    }
    if (*(long *)(local_40 + 0x10) != 0) {
      FUN_100037d60();
      QMapDataBase::freeTree(local_40,(int)*(undefined8 *)(local_40 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)local_40);
  }
  return;
}

