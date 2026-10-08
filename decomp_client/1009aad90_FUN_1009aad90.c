
void FUN_1009aad90(QString *param_1)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  pQVar1 = (QTypedArrayData<unsigned_short> *)0x0;
  if ((param_1[8].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) &&
     (pQVar1 = (QTypedArrayData<unsigned_short> *)0x0, *(int *)(param_1[8].field0_0x0 + 4) != 0)) {
    pQVar1 = param_1[9].field0_0x0;
  }
  FUN_100d31140(pQVar1 + 0x18,2);
  *(undefined8 *)(pQVar1 + 0x10) = 0;
  CAbstractProgressOperation::setProgress((int)param_1);
  QMetaObject::tr((char *)&local_30,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Transferring_your_PC_10227df68);
  CAbstractProgressOperation::setName(param_1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009aae37;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1009aae37:
  QMetaObject::tr((char *)&local_38,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Preparing_to_transfer____10227df70);
  CAbstractProgressOperation::setDescription(param_1);
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
    QArrayData::deallocate(local_38,2,8);
  }
  return;
}

