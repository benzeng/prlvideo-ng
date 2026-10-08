
bool FUN_1009a1510(long param_1)

{
  int iVar1;
  bool bVar2;
  QArrayData *local_30;
  QArrayData *local_28;
  
  QLineEdit::text();
  iVar1 = *(int *)(local_28 + 4);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) goto LAB_1009a1562;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1009a1562:
  if (iVar1 == 0) {
    return false;
  }
  CPrlFileDevSelectorWidget::getCurrentSystemName();
  iVar1 = *(int *)(local_30 + 4);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) goto LAB_1009a15aa;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1009a15aa:
  if (iVar1 == 0) {
    bVar2 = false;
  }
  else if (*(char *)(param_1 + 0x68) == '\0') {
    bVar2 = *(char *)(param_1 + 0x69) != '\0';
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

