
void FUN_100b5fa10(QString *param_1,undefined8 param_2)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  QArrayData *local_38;
  QString local_30;
  undefined1 local_21;
  
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  param_1[1].field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  FUN_100b60f50(&local_30);
  QString::operator=(param_1,&local_30);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_21 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b5fa7a;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_100b5fa7a:
  pQVar1 = operator_new(0x130);
  local_38 = (QArrayData *)QString::fromAscii_helper("",0);
  FUN_100b60f40(pQVar1,&local_38);
  param_1[2].field0_0x0 = pQVar1;
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b5fad9;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100b5fad9:
  FUN_100b73f60(param_1[2].field0_0x0,param_2);
  return;
}

