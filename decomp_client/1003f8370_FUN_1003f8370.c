
long * FUN_1003f8370(QString *param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  QString local_58;
  Data *local_50;
  Data *local_48;
  Data *local_40;
  undefined4 local_38;
  undefined1 local_29;
  
  lVar2 = FUN_10015a340(param_2);
  plVar5 = *(long **)(lVar2 + 0x180);
  local_50 = (Data *)*plVar5;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 == 0) {
      QListData::detach((int)&local_50);
      lVar3 = (long)*(int *)(local_50 + 8);
      lVar2 = *plVar5;
      if (((Data *)(lVar2 + (long)*(int *)(lVar2 + 8) * 8) != local_50 + lVar3 * 8) &&
         (lVar4 = *(int *)(local_50 + 0xc) - lVar3, lVar4 != 0 && lVar3 <= *(int *)(local_50 + 0xc))
         ) {
        _memcpy(local_50 + lVar3 * 8 + 0x10,(void *)(lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8),
                lVar4 * 8);
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
  local_38 = 1;
  plVar5 = (long *)0x0;
  if (*(int *)(local_50 + 8) != *(int *)(local_50 + 0xc)) {
    do {
      local_38 = 1;
      plVar5 = *(long **)local_48;
      (**(code **)(*plVar5 + 0xb8))(&local_58,plVar5);
      cVar1 = operator==(&local_58,param_1);
      if (*(int *)local_58.field0_0x0 != -1) {
        if (*(int *)local_58.field0_0x0 != 0) {
          LOCK();
          *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
          local_29 = *(int *)local_58.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1003f8473;
        }
        QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
      }
LAB_1003f8473:
      if (cVar1 != '\0') break;
      local_48 = local_48 + 8;
      local_38 = 1;
      plVar5 = (long *)0x0;
    } while (local_48 != local_40);
  }
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return plVar5;
      }
      local_29 = 0;
    }
    QListData::dispose(local_50);
  }
  return plVar5;
}

