
QString * FUN_1009fd8d0(QString *param_1,undefined8 param_2)

{
  QArrayData *local_58;
  QTypedArrayData<unsigned_short> *local_50;
  QString local_48;
  QArrayData *local_40;
  QRegExp local_38 [8];
  QArrayData *local_30;
  undefined1 local_21;
  
  local_40 = (QArrayData *)QString::fromAscii_helper("(\\d+(\\.\\d+)+).+\\((\\d+)\\)",0x18);
  QRegExp::QRegExp(local_38,&local_40,1,0);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009fd93c;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1009fd93c:
  QRegExp::indexIn(local_38,param_2,0,0);
  QRegExp::cap((int)&local_50);
  local_48.field0_0x0 = local_50;
  if (1 < *(int *)local_50 + 1U) {
    LOCK();
    *(int *)local_50 = *(int *)local_50 + 1;
    local_21 = *(int *)local_50 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_30,0x1db6a71);
  QString::append(&local_48);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009fd9c9;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1009fd9c9:
  QRegExp::cap((int)&local_58);
  param_1->field0_0x0 = local_48.field0_0x0;
  if (1 < *(int *)local_48.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
    local_21 = *(int *)local_48.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(param_1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009fda2f;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1009fda2f:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_21 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009fda5f;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1009fda5f:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009fda8f;
    }
    QArrayData::deallocate((QArrayData *)local_50,2,8);
  }
LAB_1009fda8f:
  QRegExp::~QRegExp(local_38);
  return param_1;
}

