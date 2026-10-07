
undefined8 * FUN_10052d310(undefined8 *param_1)

{
  int *local_70;
  long *local_68;
  long *local_60;
  undefined4 local_58;
  long local_50;
  long local_48;
  long local_40;
  undefined4 local_38;
  QArrayData *local_30;
  undefined1 local_28 [15];
  undefined1 local_19;
  
  *param_1 = PTR_shared_null_100ba2188;
  local_30 = (QArrayData *)PTR_shared_null_100ba20d0;
  FUN_10052c370(local_28,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10052d370;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10052d370:
  FUN_10052efd0(&local_50,local_28);
  local_48 = local_50 + 0x10 + (long)*(int *)(local_50 + 8) * 8;
  local_40 = local_50 + 0x10 + (long)*(int *)(local_50 + 0xc) * 8;
  if (*(int *)(local_50 + 8) != *(int *)(local_50 + 0xc)) {
    do {
      local_38 = 1;
      FUN_10000d8d0(&local_70);
      local_68 = (long *)(local_70 + (long)local_70[2] * 2 + 4);
      local_60 = (long *)(local_70 + (long)local_70[3] * 2 + 4);
      if (local_70[2] != local_70[3]) {
        do {
          local_58 = 1;
          if (*(char *)(*local_68 + 0x18) != '\0') {
            FUN_10052e8c0(param_1);
          }
          local_68 = local_68 + 1;
        } while (local_68 != local_60);
      }
      local_58 = 1;
      if (*local_70 != -1) {
        if (*local_70 != 0) {
          LOCK();
          *local_70 = *local_70 + -1;
          local_19 = *local_70 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_10052d443;
        }
        FUN_10052ea90(&local_70,local_70);
      }
LAB_10052d443:
      local_48 = local_48 + 8;
    } while (local_48 != local_40);
  }
  local_38 = 1;
  FUN_10052ef30(&local_50);
  FUN_10052ef30(local_28);
  return param_1;
}

