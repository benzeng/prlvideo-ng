
void FUN_1004428b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  QString *pQVar2;
  char cVar3;
  uint uVar4;
  long local_a8;
  long local_a0;
  QArrayData *local_98;
  Data_conflict local_90;
  undefined4 local_88;
  Data_conflict local_80;
  Data_conflict local_78;
  undefined4 local_70;
  Data_conflict local_68;
  Data_conflict local_60;
  undefined4 local_58;
  Data_conflict local_50;
  QString local_48;
  QString local_40;
  QString local_38;
  undefined1 local_29;
  
  FUN_100443a80(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x50);
  QMetaObject::tr(&local_50.field0,"",0x1df4a07);
  local_58 = 0x80000000;
  local_60.field7 = 0;
  uVar4 = QComboBox::count();
  QIcon::QIcon((QIcon *)&local_48);
  QComboBox::insertItem((int)uVar1,(QIcon *)(ulong)uVar4,&local_48,(QVariant *)&local_50);
  QIcon::~QIcon((QIcon *)&local_48);
  QVariant::~QVariant((QVariant *)&local_60);
  if (*(int *)local_50.field15 != -1) {
    if (*(int *)local_50.field15 != 0) {
      LOCK();
      *(int *)local_50.field15 = *(int *)local_50.field15 + -1;
      local_29 = *(int *)local_50.field15 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100442978;
    }
    QArrayData::deallocate((QArrayData *)local_50.field15,2,8);
  }
LAB_100442978:
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x50);
  QMetaObject::tr(&local_68.field0,"",0x1df4a0f);
  local_70 = 0x80000000;
  local_78.field7 = 0;
  uVar4 = QComboBox::count();
  QIcon::QIcon((QIcon *)&local_40);
  QComboBox::insertItem((int)uVar1,(QIcon *)(ulong)uVar4,&local_40,(QVariant *)&local_68);
  QIcon::~QIcon((QIcon *)&local_40);
  QVariant::~QVariant((QVariant *)&local_78);
  if (*(int *)local_68.field15 != -1) {
    if (*(int *)local_68.field15 != 0) {
      LOCK();
      *(int *)local_68.field15 = *(int *)local_68.field15 + -1;
      local_29 = *(int *)local_68.field15 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100442a1b;
    }
    QArrayData::deallocate((QArrayData *)local_68.field15,2,8);
  }
LAB_100442a1b:
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x50);
  QMetaObject::tr(&local_80.field0,"",0x1df4a15);
  local_88 = 0x80000000;
  local_90.field7 = 0;
  uVar4 = QComboBox::count();
  QIcon::QIcon((QIcon *)&local_38);
  QComboBox::insertItem((int)uVar1,(QIcon *)(ulong)uVar4,&local_38,(QVariant *)&local_80);
  QIcon::~QIcon((QIcon *)&local_38);
  QVariant::~QVariant((QVariant *)&local_90);
  if (*(int *)local_80.field15 != -1) {
    if (*(int *)local_80.field15 != 0) {
      LOCK();
      *(int *)local_80.field15 = *(int *)local_80.field15 + -1;
      local_29 = *(int *)local_80.field15 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100442ac7;
    }
    QArrayData::deallocate((QArrayData *)local_80.field15,2,8);
  }
LAB_100442ac7:
  QDateTimeEdit::setTimeSpec(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x90),0);
  pQVar2 = *(QString **)(*(long *)(param_1 + 0x18) + 0x90);
  FUN_100d3f2e0(&local_98,1,1,1);
  QDateTimeEdit::setDisplayFormat(pQVar2);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_29 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100442b43;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100442b43:
  FUN_100442de0(param_1,param_2);
  QObject::connect(&local_a0,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x98),"2accepted()",param_1
                   ,"1onAccepted()",0);
  if (local_a0 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_a0);
    QObject::connect(&local_a8,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x98),"2rejected()",
                     param_1,"1onRejected()",0);
  }
  else {
    cVar3 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_a0);
    QObject::connect(&local_a8,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x98),"2rejected()",
                     param_1,"1onRejected()",0);
    if ((cVar3 != '\0') && (local_a8 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_a8);
  return;
}

