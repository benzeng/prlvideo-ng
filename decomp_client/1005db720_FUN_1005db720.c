
void FUN_1005db720(long param_1)

{
  QString local_30;
  QString local_28;
  QString local_20;
  undefined1 local_11;
  
  CPrlFileDevSelectorWidget::getCurrentSystemName();
  if (*(int *)(local_20.field0_0x0 + 4) == 0) goto LAB_1005db7eb;
  CPrlFileDevSelectorWidget::getCurrentSystemName();
  local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("[VMD]",5);
  SandboxFileAccessHelpers::saveBookmark(&local_28,&local_30);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_11 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1005db7ae;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_1005db7ae:
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      local_11 = *(int *)local_28.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1005db7de;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
LAB_1005db7de:
  QString::operator=((QString *)(param_1 + 0x20),&local_20);
LAB_1005db7eb:
  FUN_1005db8e0(param_1);
  if (*(int *)local_20.field0_0x0 != -1) {
    if (*(int *)local_20.field0_0x0 != 0) {
      LOCK();
      *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_20.field0_0x0 != 0) {
        return;
      }
      local_11 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_20.field0_0x0,2,8);
  }
  return;
}

