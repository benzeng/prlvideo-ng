
void FUN_1007b5cf0(QString *param_1,int param_2,undefined8 *param_3,int param_4,undefined8 param_5)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  QArrayData *local_38;
  undefined1 local_2c;
  undefined1 local_2b;
  
  FUN_1001323b0(param_1,param_3,param_5);
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)&PTR_FUN_10222d8a0;
  *(int *)((long)&param_1[2].field0_0x0 + 4) = param_2;
  if (param_2 == 0) {
    QAction::setSeparator(SUB81(param_1,0));
  }
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)&PTR_FUN_10222da58;
  pQVar1 = (QTypedArrayData<unsigned_short> *)*param_3;
  param_1[3].field0_0x0 = pQVar1;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_2c = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  *(int *)&param_1[4].field0_0x0 = param_4;
  if (param_4 == -1) {
    QMetaObject::tr((char *)&local_38,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Default_Adapter_10226e7b8);
    QAction::setText(param_1);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_2b = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_2b) goto LAB_1007b5dc7;
      }
      QArrayData::deallocate(local_38,2,8);
    }
  }
LAB_1007b5dc7:
  QAction::setCheckable(SUB81(param_1,0));
  return;
}

