
void FUN_100a0ecc0(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  QArrayData *pQVar5;
  QUrl local_a8 [8];
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QVariant local_78;
  QArrayData *local_68;
  char local_59;
  Data_conflict local_58;
  undefined4 local_50;
  QMapNodeBase *local_48;
  QVariant local_40;
  undefined1 local_29;
  
  QObject::sender();
  uVar3 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e1310);
  QNetworkReply::attribute(&local_40,uVar3,0);
  uVar1 = QVariant::toInt((bool *)&local_40);
  QVariant::~QVariant(&local_40);
  uVar3 = QNetworkReply::rawHeaderPairs();
  FUN_100a0f230(&local_48,uVar3);
  local_50 = 0x80000000;
  local_58.field7 = 0;
  local_59 = '\x01';
  QIODevice::readAll();
  if (*(int *)(local_68 + 4) != 0) {
    pQVar5 = local_68 + *(long *)(local_68 + 0x10);
    if (pQVar5 != (QArrayData *)0x0) {
      _strlen((char *)pQVar5);
    }
    QString::fromUtf8_helper((char *)&local_88,(int)pQVar5);
    QString::normalized(&local_80,&local_88,1,0);
    FUN_100a08c00(&local_78,&local_80,&local_59);
    QVariant::operator=((QVariant *)&local_58,&local_78);
    QVariant::~QVariant(&local_78);
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_29 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a0ede1;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_100a0ede1:
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_29 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a0ee11;
      }
      QArrayData::deallocate(local_88,2,8);
    }
  }
LAB_100a0ee11:
  if (local_59 == '\0') {
    QByteArray::left((int)&local_90);
    QNetworkReply::url();
    QUrl::toString(&local_a0,local_a8,0);
    QString::toUtf8();
    if (*(int *)(local_90 + 4) == *(int *)(local_68 + 4)) {
      pcVar4 = "";
    }
    else {
      pcVar4 = " (...truncated to 10000)";
    }
    FUN_100df99c0("","WebPortalCommunication",0,"Reply to [%s] is not a well-formed JSON:\n%s %s",
                  local_98 + *(long *)(local_98 + 0x10),local_90 + *(long *)(local_90 + 0x10),pcVar4
                 );
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_29 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a0eef7;
      }
      QArrayData::deallocate(local_98,1,8);
    }
LAB_100a0eef7:
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_29 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a0ef2d;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
LAB_100a0ef2d:
    QUrl::~QUrl(local_a8);
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_29 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a0ef6f;
      }
      QArrayData::deallocate(local_90,1,8);
    }
  }
LAB_100a0ef6f:
  QObject::deleteLater();
  uVar2 = QNetworkReply::error();
  FUN_100a0f410(param_1,uVar2,uVar1,&local_58,&local_48);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a0efc4;
    }
    QArrayData::deallocate(local_68,1,8);
  }
LAB_100a0efc4:
  QVariant::~QVariant((QVariant *)&local_58);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return;
      }
      local_29 = 0;
    }
    if (*(long *)(local_48 + 0x10) != 0) {
      FUN_100037d60();
      QMapDataBase::freeTree(local_48,(int)*(undefined8 *)(local_48 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)local_48);
  }
  return;
}

