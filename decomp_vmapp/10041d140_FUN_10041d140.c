
void FUN_10041d140(undefined8 param_1,char *param_2,int param_3)

{
  int *piVar1;
  QArrayData *local_28;
  undefined1 local_20;
  undefined7 uStack_1f;
  undefined1 local_11;
  
  local_28 = (QArrayData *)PTR_shared_null_100ba20d0;
  QString::sprintf((char *)&local_28,"%04u",(ulong)(param_3 + 1));
  QString::toUtf8();
  QByteArray::append(param_2);
  piVar1 = (int *)CONCAT71(uStack_1f,local_20);
  if (*piVar1 != -1) {
    if (*piVar1 != 0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      local_11 = *piVar1 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10041d1b4;
    }
    QArrayData::deallocate((QArrayData *)CONCAT71(uStack_1f,local_20),1,8);
  }
LAB_10041d1b4:
  QByteArray::append(param_2);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
      local_20 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return;
}

