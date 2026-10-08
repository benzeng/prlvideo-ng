
bool FUN_100640cb0(undefined8 param_1)

{
  int iVar1;
  QArrayData *local_28;
  QArrayData *local_20;
  undefined1 local_11;
  
  FUN_100640930(&local_20,param_1);
  local_28 = (QArrayData *)QString::fromAscii_helper(";",1);
  iVar1 = QString::indexOf(&local_20,&local_28,0,1);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_11 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100640d23;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_100640d23:
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) goto LAB_100640d53;
      local_11 = 0;
    }
    QArrayData::deallocate(local_20,2,8);
  }
LAB_100640d53:
  return iVar1 != -1;
}

