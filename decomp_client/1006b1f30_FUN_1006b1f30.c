
void FUN_1006b1f30(long param_1)

{
  undefined1 *puVar1;
  QArrayData *local_70;
  QArrayData *local_68;
  long local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined4 local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (1 < DAT_10230ffd0) {
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",2,"%s",local_40 + *(long *)(local_40 + 0x10));
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006b1fb3;
      }
      QArrayData::deallocate(local_40,1,8);
    }
  }
LAB_1006b1fb3:
  FUN_10056ec80(&local_60,param_1 + 0x18);
  local_58 = (undefined8 *)(local_60 + 0x10 + (long)*(int *)(local_60 + 8) * 8);
  local_50 = (undefined8 *)(local_60 + 0x10 + (long)*(int *)(local_60 + 0xc) * 8);
  if (*(int *)(local_60 + 8) != *(int *)(local_60 + 0xc)) {
    do {
      local_48 = 1;
      if (1 < DAT_10230ffd0) {
        puVar1 = (undefined1 *)*local_58;
        FUN_1007170a0(&local_70,puVar1 + 8,2);
        QString::toUtf8();
        FUN_100df99c0("","prl_client_app",2,"%s, %d",local_68 + *(long *)(local_68 + 0x10),*puVar1);
        if (*(int *)local_68 != -1) {
          if (*(int *)local_68 != 0) {
            LOCK();
            *(int *)local_68 = *(int *)local_68 + -1;
            local_31 = *(int *)local_68 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006b208f;
          }
          QArrayData::deallocate(local_68,1,8);
        }
LAB_1006b208f:
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_31 = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006b20c0;
          }
          QArrayData::deallocate(local_70,2,8);
        }
      }
LAB_1006b20c0:
      local_58 = local_58 + 1;
    } while (local_58 != local_50);
  }
  local_48 = 1;
  FUN_10056e3a0(&local_60);
  return;
}

