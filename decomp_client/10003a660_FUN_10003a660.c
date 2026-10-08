
bool FUN_10003a660(undefined8 param_1)

{
  int iVar1;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_11;
  
  local_20 = 0;
  iVar1 = _GetProcessForPID(param_1,&local_20);
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = _CopyProcessName(&local_20,&local_28);
  if (iVar1 != 0) {
    return false;
  }
  FUN_100deed00(&local_30,local_28);
  _CFRelease(local_28);
  local_38 = (QArrayData *)QString::fromAscii_helper("Dock",4);
  iVar1 = QString::compare(&local_30,&local_38,1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_11 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10003a70c;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10003a70c:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return iVar1 == 0;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return iVar1 == 0;
}

