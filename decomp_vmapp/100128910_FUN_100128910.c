
undefined8 * FUN_100128910(undefined8 *param_1,long param_2,int param_3)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  QArrayData *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  plVar1 = *(long **)(*(long *)(*(long *)(param_2 + 8) + 0x10) + 0xf8);
  local_58 = (Data *)*plVar1;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_58);
      lVar4 = (long)*(int *)(local_58 + 8);
      lVar2 = *plVar1;
      if (((Data *)(lVar2 + (long)*(int *)(lVar2 + 8) * 8) != local_58 + lVar4 * 8) &&
         (lVar5 = *(int *)(local_58 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar4 * 8 + 0x10,(void *)(lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8),
                lVar5 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    iVar6 = 0;
    do {
      local_40 = 1;
      CVmEventParameter::getParamName();
      iVar3 = QString::compare_helper
                        (local_60 + *(long *)(local_60 + 0x10),*(undefined4 *)(local_60 + 4),
                         "ws_response_cmd_standard_param",0xffffffff,1);
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100128a42;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_100128a42:
      if (iVar3 == 0) {
        if (iVar6 == param_3) {
          CVmEventParameter::getParamValue();
          if (*(int *)local_58 == -1) {
            return param_1;
          }
          if (*(int *)local_58 != 0) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + -1;
            UNLOCK();
            if (*(int *)local_58 != 0) {
              return param_1;
            }
            local_31 = 0;
          }
          QListData::dispose(local_58);
          return param_1;
        }
        iVar6 = iVar6 + 1;
      }
      local_50 = local_50 + 8;
    } while (local_50 != local_48);
  }
  local_40 = 1;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) goto LAB_100128a97;
      local_31 = 0;
    }
    QListData::dispose(local_58);
  }
LAB_100128a97:
  *param_1 = PTR_shared_null_100ba20d0;
  return param_1;
}

