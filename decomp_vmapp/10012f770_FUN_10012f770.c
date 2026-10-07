
undefined8 * FUN_10012f770(undefined8 *param_1,undefined8 param_2)

{
  QArrayData *pQVar1;
  undefined8 uVar2;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  pQVar1 = (QArrayData *)QString::fromAscii_helper("backup_cmd_server_hostname",0x1a);
  local_38 = pQVar1;
  FUN_10011cdb0(&local_30,param_2,&local_38);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_21 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10012f7d8;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10012f7d8:
  if (*(int *)(local_30 + 4) == 0) {
    uVar2 = QString::fromAscii_helper("127.0.0.1",9);
    *param_1 = uVar2;
  }
  else {
    *param_1 = local_30;
    if (1 < *(int *)local_30 + 1U) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + 1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
    }
  }
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return param_1;
}

