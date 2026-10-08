
QString * FUN_1005dca60(QString *param_1,undefined8 param_2,undefined8 *param_3)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  QString *pQVar2;
  QString local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  pQVar1 = (QTypedArrayData<unsigned_short> *)*param_3;
  param_1->field0_0x0 = pQVar1;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_19 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  local_28 = (QArrayData *)QString::fromAscii_helper("/",1);
  local_30 = (QArrayData *)QString::fromAscii_helper(" ",1);
  pQVar2 = (QString *)QString::replace(param_1,&local_28,&local_30,1);
  QString::operator=(param_1,pQVar2);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005dcaff;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1005dcaff:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005dcb2f;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1005dcb2f:
  local_38 = (QArrayData *)QString::fromAscii_helper("\\",1);
  local_40 = (QArrayData *)QString::fromAscii_helper(" ",1);
  pQVar2 = (QString *)QString::replace(param_1,&local_38,&local_40,1);
  QString::operator=(param_1,pQVar2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005dcba9;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1005dcba9:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005dcbd9;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1005dcbd9:
  QString::trimmed();
  QString::operator=(param_1,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return param_1;
}

