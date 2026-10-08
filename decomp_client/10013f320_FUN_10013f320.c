
void FUN_10013f320(QString *param_1,QObject *param_2)

{
  char cVar1;
  QTypedArrayData<unsigned_short> *pQVar2;
  QTypedArrayData<unsigned_short> *pQVar3;
  QString local_38;
  QString local_30;
  undefined1 local_21;
  
  pQVar2 = (QTypedArrayData<unsigned_short> *)0x0;
  if (param_2 != (QObject *)0x0) {
    pQVar2 = (QTypedArrayData<unsigned_short> *)
             QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  pQVar3 = param_1[6].field0_0x0;
  if (pQVar3 != pQVar2) {
    if (pQVar2 != (QTypedArrayData<unsigned_short> *)0x0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + 1;
      local_21 = *(int *)pQVar2 != 0;
      UNLOCK();
      pQVar3 = param_1[6].field0_0x0;
    }
    if (pQVar3 != (QTypedArrayData<unsigned_short> *)0x0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_21 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((!(bool)local_21) && (param_1[6].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0)) {
        operator_delete(param_1[6].field0_0x0);
      }
    }
    param_1[6].field0_0x0 = pQVar2;
    param_1[7].field0_0x0 = (QTypedArrayData<unsigned_short> *)param_2;
  }
  if (pQVar2 != (QTypedArrayData<unsigned_short> *)0x0) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + -1;
    local_21 = *(int *)pQVar2 != 0;
    UNLOCK();
    if (!(bool)local_21) {
      operator_delete(pQVar2);
    }
  }
  QLineEdit::text();
  QDir::toNativeSeparators(&local_38);
  cVar1 = operator==(&local_30,&local_38);
  if (cVar1 == '\0') {
    QLineEdit::setText(param_1);
  }
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10013f40b;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_10013f40b:
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return;
}

