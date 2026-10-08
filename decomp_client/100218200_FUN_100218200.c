
long * FUN_100218200(long *param_1,long param_2)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  Data *local_20;
  undefined1 local_11;
  
  if (*(char *)(param_2 + 0x168) == '\0') {
    CAbstractTask::getDefaultSubTaskList();
  }
  else {
    local_20 = (Data *)PTR_shared_null_1021e15e8;
    cVar2 = COsInstallationInfo::isNeedToDownloadOsImage();
    if (cVar2 != '\0') {
      local_24 = 3;
      FUN_100129840(&local_20,&local_24);
      local_28 = 4;
      FUN_100129840(&local_20,&local_28);
      local_2c = 5;
      FUN_100129840(&local_20,&local_2c);
      local_30 = 6;
      FUN_100129840(&local_20,&local_30);
    }
    local_34 = 7;
    FUN_100129840(&local_20,&local_34);
    *param_1 = (long)local_20;
    if (*(int *)local_20 != -1) {
      if (*(int *)local_20 == 0) {
        QListData::detach((int)param_1);
        lVar1 = *param_1;
        lVar3 = (long)*(int *)(lVar1 + 8);
        if ((local_20 + (long)*(int *)(local_20 + 8) * 8 != (Data *)(lVar1 + lVar3 * 8)) &&
           (lVar4 = *(int *)(lVar1 + 0xc) - lVar3, lVar4 != 0 && lVar3 <= *(int *)(lVar1 + 0xc))) {
          _memcpy((void *)(lVar1 + 0x10 + lVar3 * 8),
                  local_20 + (long)*(int *)(local_20 + 8) * 8 + 0x10,lVar4 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_20 = *(int *)local_20 + 1;
        local_11 = *(int *)local_20 != 0;
        UNLOCK();
      }
    }
    if (*(int *)local_20 != -1) {
      if (*(int *)local_20 != 0) {
        LOCK();
        *(int *)local_20 = *(int *)local_20 + -1;
        UNLOCK();
        if (*(int *)local_20 != 0) {
          return param_1;
        }
        local_11 = 0;
      }
      QListData::dispose(local_20);
    }
  }
  return param_1;
}

