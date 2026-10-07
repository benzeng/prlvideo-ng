
int FUN_100128720(long param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  QArrayData *local_58;
  Data *local_50;
  Data *local_48;
  Data *local_40;
  undefined4 local_38;
  undefined1 local_29;
  
  plVar1 = *(long **)(*(long *)(*(long *)(param_1 + 8) + 0x10) + 0xf8);
  local_50 = (Data *)*plVar1;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 == 0) {
      QListData::detach((int)&local_50);
      lVar4 = (long)*(int *)(local_50 + 8);
      lVar2 = *plVar1;
      if (((Data *)(lVar2 + (long)*(int *)(lVar2 + 8) * 8) != local_50 + lVar4 * 8) &&
         (lVar5 = *(int *)(local_50 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(local_50 + 0xc))
         ) {
        _memcpy(local_50 + lVar4 * 8 + 0x10,(void *)(lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8),
                lVar5 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + 1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
    }
  }
  local_48 = local_50 + (long)*(int *)(local_50 + 8) * 8 + 0x10;
  local_40 = local_50 + (long)*(int *)(local_50 + 0xc) * 8 + 0x10;
  iVar6 = 0;
  if (*(int *)(local_50 + 8) != *(int *)(local_50 + 0xc)) {
    iVar6 = 0;
    do {
      local_38 = 1;
      CVmEventParameter::getParamName();
      iVar3 = QString::compare_helper
                        (local_58 + *(long *)(local_58 + 0x10),*(undefined4 *)(local_58 + 4),
                         "ws_response_cmd_standard_param",0xffffffff,1);
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_29 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10012883e;
        }
        QArrayData::deallocate(local_58,2,8);
      }
LAB_10012883e:
      iVar6 = iVar6 + (uint)(iVar3 == 0);
      local_48 = local_48 + 8;
    } while (local_48 != local_40);
  }
  local_38 = 1;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return iVar6;
      }
      local_29 = 0;
    }
    QListData::dispose(local_50);
  }
  return iVar6;
}

