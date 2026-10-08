
undefined8 * FUN_10044df60(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  _func_void_Node_ptr *local_70;
  undefined8 local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  int local_40;
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_1021e15d0;
  FUN_10044ed90(&local_60,param_2 + 0x48);
  local_58 = local_60;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
      QListData::detach((int)&local_58);
      lVar2 = (long)*(int *)(local_58 + 8);
      if ((local_60 + (long)*(int *)(local_60 + 8) * 8 != local_58 + lVar2 * 8) &&
         (lVar3 = *(int *)(local_58 + 0xc) - lVar2, lVar3 != 0 && lVar2 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar2 * 8 + 0x10,local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10,
                lVar3 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + 1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  local_40 = 1;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
LAB_10044e039:
      QListData::dispose(local_60);
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_10044e039;
    }
    if (local_40 == 0) goto LAB_10044e0c0;
  }
  if (local_50 != local_48) {
    do {
      local_68 = *(undefined8 *)local_50;
      FUN_10044f4d0(&local_70,param_2 + 0x48,&local_68);
      FUN_10044f380(param_1,&local_70);
      if (*(int *)(local_70 + 0x10) != -1) {
        if (*(int *)(local_70 + 0x10) != 0) {
          LOCK();
          pcVar1 = local_70 + 0x10;
          *(int *)pcVar1 = *(int *)pcVar1 + -1;
          local_31 = *(int *)pcVar1 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10044e0a7;
        }
        QHashData::free_helper(local_70);
      }
LAB_10044e0a7:
      local_50 = local_50 + 8;
      local_40 = 1;
    } while (local_50 != local_48);
  }
LAB_10044e0c0:
  if (*(int *)local_58 != -1) {
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
  }
  return param_1;
}

