
QString * FUN_1006b3200(QString *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  char cVar2;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  local_30 = (QArrayData *)PTR_shared_null_100ba20d0;
  QString::toUtf8();
  QString::sprintf((char *)&local_30,"VLAN (%s)",local_38 + *(long *)(local_38 + 0x10));
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006b3274;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_1006b3274:
  cVar2 = QString::startsWith(param_3,&local_30,1);
  if (cVar2 == '\0') {
    pQVar1 = (QTypedArrayData<unsigned_short> *)*param_3;
    param_1->field0_0x0 = pQVar1;
    if (1 < *(int *)pQVar1 + 1U) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + 1;
      local_21 = *(int *)pQVar1 != 0;
      UNLOCK();
    }
  }
  else {
    QString::right((int)&local_40);
    pQVar1 = (QTypedArrayData<unsigned_short> *)*param_4;
    param_1->field0_0x0 = pQVar1;
    if (1 < *(int *)pQVar1 + 1U) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + 1;
      local_21 = *(int *)pQVar1 != 0;
      UNLOCK();
    }
    QString::append(param_1);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_21 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1006b334d;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_1006b334d:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return param_1;
}

