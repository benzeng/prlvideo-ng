
QHostAddress * FUN_100572e30(QHostAddress *param_1)

{
  QString local_68;
  QHostAddress local_60 [8];
  QString local_58;
  QHostAddress local_50 [8];
  QString local_48;
  QHostAddress local_40 [15];
  undefined1 local_31;
  
  QHostAddress::QHostAddress(param_1);
  QHostAddress::QHostAddress(param_1 + 8);
  QHostAddress::QHostAddress(param_1 + 0x10);
  QLineEdit::text();
  QHostAddress::QHostAddress(local_40,&local_48);
  QHostAddress::operator=(param_1,local_40);
  QHostAddress::~QHostAddress(local_40);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100572eca;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_100572eca:
  QLineEdit::text();
  QHostAddress::QHostAddress(local_50,&local_58);
  QHostAddress::operator=(param_1 + 8,local_50);
  QHostAddress::~QHostAddress(local_50);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100572f2d;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100572f2d:
  QLineEdit::text();
  QHostAddress::QHostAddress(local_60,&local_68);
  QHostAddress::operator=(param_1 + 0x10,local_60);
  QHostAddress::~QHostAddress(local_60);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_68.field0_0x0 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
  return param_1;
}

