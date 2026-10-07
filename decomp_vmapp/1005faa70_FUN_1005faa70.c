
undefined8 FUN_1005faa70(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  if ((int)param_1[8] == 1) {
    puVar1 = operator_new(0x20,(nothrow_t *)PTR_nothrow_100ba21c8);
    if (puVar1 != (undefined8 *)0x0) {
      puVar2 = operator_new(8,(nothrow_t *)PTR_nothrow_100ba21c8);
      *puVar1 = puVar2;
      if (puVar2 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar1 + 1) = 1;
        *puVar2 = *param_2;
        puVar2 = (undefined8 *)param_1[4];
        param_1[4] = (long)(puVar1 + 2);
        puVar1[2] = param_1 + 3;
        puVar1[3] = puVar2;
        *puVar2 = puVar1 + 2;
        *(int *)(param_1 + 5) = (int)param_1[5] + 1;
        return 0;
      }
      (**(code **)(*param_1 + 0xa0))(&local_60,param_1,param_2);
      QString::toLocal8Bit();
      FUN_1008e3970("","vdisk",0,"Error allocating memory for data for entry %s",
                    local_58 + *(long *)(local_58 + 0x10));
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_29 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1005facd4;
        }
        QArrayData::deallocate(local_58,1,8);
      }
LAB_1005facd4:
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_29 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1005fad04;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_1005fad04:
      operator_delete(puVar1);
      return 0x80000002;
    }
    (**(code **)(*param_1 + 0xa0))(&local_50,param_1,param_2);
    QString::toLocal8Bit();
    FUN_1008e3970("","vdisk",0,"Error allocating memory for entry %s",
                  local_48 + *(long *)(local_48 + 0x10));
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_29 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005fac1a;
      }
      QArrayData::deallocate(local_48,1,8);
    }
LAB_1005fac1a:
    uVar3 = 0x80000002;
    if (*(int *)local_50 == -1) {
      return 0x80000002;
    }
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return 0x80000002;
      }
      local_29 = 0;
    }
    goto LAB_1005fac48;
  }
  FUN_1005fcd30(&local_40);
  QString::toLocal8Bit();
  FUN_1008e3970("","vdisk",0,"Add file called in incorrect filter state (%s)",
                local_38 + *(long *)(local_38 + 0x10));
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005fab6b;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_1005fab6b:
  uVar3 = 0x80000516;
  if (*(int *)local_40 == -1) {
    return 0x80000516;
  }
  local_50 = local_40;
  if (*(int *)local_40 != 0) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + -1;
    UNLOCK();
    if (*(int *)local_40 != 0) {
      return 0x80000516;
    }
    local_29 = 0;
  }
LAB_1005fac48:
  QArrayData::deallocate(local_50,2,8);
  return uVar3;
}

