
undefined4 FUN_1004dba10(undefined8 param_1,undefined8 *param_2,undefined1 param_3)

{
  char cVar1;
  undefined4 uVar2;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  local_30 = (QArrayData *)*param_2;
  if (1 < *(int *)local_30 + 1U) {
    LOCK();
    *(int *)local_30 = *(int *)local_30 + 1;
    local_21 = *(int *)local_30 != 0;
    UNLOCK();
  }
  local_38 = (QArrayData *)QString::fromAscii_helper(".LNK",4);
  cVar1 = QString::endsWith(&local_30,&local_38,0);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004dba91;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1004dba91:
  if (cVar1 != '\0') {
    QString::chop((int)&local_30);
  }
  uVar2 = FUN_1004e5fd0(param_1,&local_30,param_3);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return uVar2;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return uVar2;
}

