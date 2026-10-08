
undefined8 * FUN_10011e480(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined8 local_78;
  Data *local_70;
  Data *local_68;
  Data *local_60;
  undefined4 local_58;
  Data *local_50;
  Data *local_48;
  Data *local_40;
  undefined4 local_38;
  undefined1 local_29;
  
  *param_1 = PTR_shared_null_1021e15e8;
  plVar1 = *(long **)(param_2 + 0x150);
  local_50 = (Data *)*plVar1;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 == 0) {
      QListData::detach((int)&local_50);
      lVar5 = (long)*(int *)(local_50 + 8);
      lVar2 = *plVar1;
      if (((Data *)(lVar2 + (long)*(int *)(lVar2 + 8) * 8) != local_50 + lVar5 * 8) &&
         (lVar6 = *(int *)(local_50 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(local_50 + 0xc))
         ) {
        _memcpy(local_50 + lVar5 * 8 + 0x10,(void *)(lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8),
                lVar6 * 8);
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
  if (*(int *)(local_50 + 8) != *(int *)(local_50 + 0xc)) {
    do {
      local_38 = 1;
      lVar2 = *(long *)local_48;
      local_70 = *(Data **)(lVar2 + 0x98);
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 == 0) {
          QListData::detach((int)&local_70);
          lVar5 = (long)*(int *)(local_70 + 8);
          lVar2 = *(long *)(lVar2 + 0x98);
          if (((Data *)(lVar2 + (long)*(int *)(lVar2 + 8) * 8) != local_70 + lVar5 * 8) &&
             (lVar6 = *(int *)(local_70 + 0xc) - lVar5,
             lVar6 != 0 && lVar5 <= *(int *)(local_70 + 0xc))) {
            _memcpy(local_70 + lVar5 * 8 + 0x10,
                    (void *)(lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8),lVar6 * 8);
          }
        }
        else {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + 1;
          local_29 = *(int *)local_70 != 0;
          UNLOCK();
        }
      }
      local_68 = local_70 + (long)*(int *)(local_70 + 8) * 8 + 0x10;
      local_60 = local_70 + (long)*(int *)(local_70 + 0xc) * 8 + 0x10;
      if (*(int *)(local_70 + 8) != *(int *)(local_70 + 0xc)) {
        do {
          local_58 = 1;
          local_78 = *(undefined8 *)local_68;
          uVar4 = CHwHddPartition::getType();
          cVar3 = FUN_100cd0010(uVar4);
          if (cVar3 != '\0') {
            FUN_10012ba30(param_1,&local_78);
          }
          local_68 = local_68 + 8;
        } while (local_68 != local_60);
      }
      local_58 = 1;
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_29 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10011e651;
        }
        QListData::dispose(local_70);
      }
LAB_10011e651:
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
        return param_1;
      }
      local_29 = 0;
    }
    QListData::dispose(local_50);
  }
  return param_1;
}

