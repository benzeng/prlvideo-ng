
long * FUN_1008e86a0(long *param_1,long *param_2)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 *puVar4;
  int *piVar5;
  int *local_48;
  int *local_40;
  int *local_38;
  undefined4 local_30;
  undefined1 local_21;
  
  *param_1 = (long)PTR_shared_null_100ba20d0;
  local_48 = (int *)*param_2;
  if (*local_48 != -1) {
    if (*local_48 == 0) {
      QListData::detach((int)&local_48);
      iVar1 = local_48[2];
      if (iVar1 != local_48[3]) {
        puVar4 = (undefined8 *)(*param_2 + 0x10 + (long)*(int *)(*param_2 + 8) * 8);
        piVar5 = local_48 + (long)iVar1 * 2 + 4;
        lVar3 = (long)local_48[3] * 8 + (long)iVar1 * -8;
        do {
          piVar2 = (int *)*puVar4;
          *(int **)piVar5 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_21 = *piVar2 != 0;
            UNLOCK();
          }
          piVar5 = piVar5 + 2;
          puVar4 = puVar4 + 1;
          lVar3 = lVar3 + -8;
        } while (lVar3 != 0);
      }
    }
    else {
      LOCK();
      *local_48 = *local_48 + 1;
      local_21 = *local_48 != 0;
      UNLOCK();
    }
  }
  local_40 = local_48 + (long)local_48[2] * 2 + 4;
  local_38 = local_48 + (long)local_48[3] * 2 + 4;
  if (local_48[2] != local_48[3]) {
    do {
      local_30 = 1;
      if (*(int *)(*param_1 + 4) != 0) {
        QByteArray::append((QByteArray *)param_1);
      }
      QByteArray::append((QByteArray *)param_1);
      local_40 = local_40 + 2;
    } while (local_40 != local_38);
  }
  local_30 = 1;
  FUN_1000506b0(&local_48);
  return param_1;
}

