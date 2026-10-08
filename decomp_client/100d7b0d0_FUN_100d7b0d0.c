
undefined8 * FUN_100d7b0d0(undefined8 *param_1)

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
  
  *param_1 = PTR_shared_null_1021e15e8;
  local_30 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_100d7a130(local_28,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100d7b130;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100d7b130:
  FUN_100d7cfc0(&local_50,local_28);
  local_48 = local_50 + 0x10 + (long)*(int *)(local_50 + 8) * 8;
  local_40 = local_50 + 0x10 + (long)*(int *)(local_50 + 0xc) * 8;
  if (*(int *)(local_50 + 8) != *(int *)(local_50 + 0xc)) {
    do {
      local_38 = 1;
      FUN_100d7ce80(&local_70);
      local_68 = (long *)(local_70 + (long)local_70[2] * 2 + 4);
      local_60 = (long *)(local_70 + (long)local_70[3] * 2 + 4);
      if (local_70[2] != local_70[3]) {
        do {
          local_58 = 1;
          if (*(char *)(*local_68 + 0x18) != '\0') {
            FUN_100d7c680(param_1);
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
          if ((bool)local_19) goto LAB_100d7b203;
        }
        FUN_100d7c9e0(&local_70,local_70);
      }
LAB_100d7b203:
      local_48 = local_48 + 8;
    } while (local_48 != local_40);
  }
  local_38 = 1;
  FUN_100d7cf20(&local_50);
  FUN_100d7cf20(local_28);
  return param_1;
}

