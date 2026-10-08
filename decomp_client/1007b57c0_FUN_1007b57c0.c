
void FUN_1007b57c0(QString *param_1,uint param_2,undefined8 param_3,undefined8 *param_4,
                  undefined1 param_5)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  undefined *puVar2;
  QString local_58;
  QString local_50;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  puVar2 = PTR_shared_null_1021e1288;
  local_40 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_1001323b0(param_1,&local_40);
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)&PTR_FUN_10222d8a0;
  *(undefined4 *)((long)&param_1[2].field0_0x0 + 4) = 5;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007b5836;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1007b5836:
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)&PTR_FUN_10222d938;
  pQVar1 = (QTypedArrayData<unsigned_short> *)*param_4;
  param_1[3].field0_0x0 = pQVar1;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_31 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  *(undefined1 *)&param_1[4].field0_0x0 = param_5;
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar2;
  if ((param_2 & 0xfffffffe) == 10) {
    QMetaObject::tr((char *)&local_50,PTR_staticMetaObject_1021e1520,0x1e17f7d);
    QString::operator=(&local_48,&local_50);
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_31 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007b592b;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
  }
  else {
    QMetaObject::tr((char *)&local_58,PTR_staticMetaObject_1021e1520,0x1e17f94);
    QString::operator=(&local_48,&local_58);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_31 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007b592b;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
  }
LAB_1007b592b:
  QAction::setText(param_1);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return;
}

