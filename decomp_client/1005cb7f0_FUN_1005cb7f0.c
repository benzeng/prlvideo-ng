
QString * FUN_1005cb7f0(QString *param_1,undefined8 *param_2)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  int iVar2;
  QString local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  pQVar1 = (QTypedArrayData<unsigned_short> *)*param_2;
  param_1->field0_0x0 = pQVar1;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_21 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  QMetaObject::tr((char *)&local_30,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Administrator_10226f230);
  iVar2 = QString::compare(param_1,&local_30,0);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005cb879;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1005cb879:
  if (iVar2 == 0) {
    QMetaObject::tr((char *)&local_38,PTR_staticMetaObject_1021e1520,(int)PTR_s_root_10226f240);
    QString::operator=(param_1,&local_38);
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_38.field0_0x0 != 0) {
          return param_1;
        }
        local_21 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
  }
  return param_1;
}

