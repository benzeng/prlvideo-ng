
undefined8 * FUN_10015ccc0(undefined8 *param_1,long param_2,QString *param_3)

{
  long lVar1;
  char cVar2;
  QString local_68;
  long local_60;
  int *local_58;
  long *local_50;
  long *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_1021e15e8;
  FUN_100179800(&local_58,param_2 + 200);
  local_50 = (long *)(local_58 + (long)local_58[2] * 2 + 4);
  local_48 = (long *)(local_58 + (long)local_58[3] * 2 + 4);
  if (local_58[2] != local_58[3]) {
    do {
      local_40 = 1;
      lVar1 = *(long *)*local_50;
      local_60 = 0;
      if ((lVar1 != 0) && (local_60 = 0, *(int *)(lVar1 + 4) != 0)) {
        local_60 = ((long *)*local_50)[1];
      }
      FUN_10018c2b0();
      CVmConfiguration::getVmIdentification();
      CVmIdentification::getLinkedVmUuid();
      cVar2 = operator==(&local_68,param_3);
      if (*(int *)local_68.field0_0x0 != -1) {
        if (*(int *)local_68.field0_0x0 != 0) {
          LOCK();
          *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
          local_31 = *(int *)local_68.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10015cda8;
        }
        QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
      }
LAB_10015cda8:
      if (cVar2 != '\0') {
        FUN_10012c6e0(param_1,&local_60);
      }
      local_50 = local_50 + 1;
    } while (local_50 != local_48);
  }
  local_40 = 1;
  if (*local_58 != -1) {
    if (*local_58 != 0) {
      LOCK();
      *local_58 = *local_58 + -1;
      UNLOCK();
      if (*local_58 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    FUN_100179430(&local_58,local_58);
  }
  return param_1;
}

