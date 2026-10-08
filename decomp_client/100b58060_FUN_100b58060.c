
void FUN_100b58060(undefined8 param_1,QString *param_2,QString *param_3)

{
  long lVar1;
  undefined1 local_38 [8];
  QString QStack_30;
  undefined1 local_21;
  
  register0x00001208 = (int)PTR_shared_null_1021e1288;
  local_38 = (undefined1  [8])PTR_shared_null_1021e1288;
  register0x0000120c = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  lVar1 = FUN_100b57f50();
  if (lVar1 == 0) {
    QString::operator=((QString *)local_38,param_2);
    QString::operator=((QString *)(local_38 + 8),param_3);
    FUN_100b58cb0(param_1,local_38);
  }
  else {
    QString::operator=((QString *)(lVar1 + 8),param_3);
  }
  if (*(int *)QStack_30.field0_0x0 != -1) {
    if (*(int *)QStack_30.field0_0x0 != 0) {
      LOCK();
      *(int *)QStack_30.field0_0x0 = *(int *)QStack_30.field0_0x0 + -1;
      local_21 = *(int *)QStack_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b580fc;
    }
    QArrayData::deallocate((QArrayData *)QStack_30.field0_0x0,2,8);
  }
LAB_100b580fc:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38,2,8);
  }
  return;
}

