
long FUN_10015cb20(long param_1,QString *param_2)

{
  char cVar1;
  long lVar2;
  QString local_58;
  int *local_50;
  long *local_48;
  long *local_40;
  undefined4 local_38;
  undefined1 local_29;
  
  FUN_100179800(&local_50,param_1 + 200);
  local_48 = (long *)(local_50 + (long)local_50[2] * 2 + 4);
  local_40 = (long *)(local_50 + (long)local_50[3] * 2 + 4);
  local_38 = 1;
  lVar2 = 0;
  if (local_50[2] != local_50[3]) {
    do {
      local_38 = 1;
      lVar2 = *(long *)*local_48;
      if (((lVar2 != 0) && (*(int *)(lVar2 + 4) != 0)) &&
         (lVar2 = ((long *)*local_48)[1], lVar2 != 0)) {
        FUN_100188480(&local_58,lVar2);
        cVar1 = operator==(&local_58,param_2);
        if (*(int *)local_58.field0_0x0 != -1) {
          if (*(int *)local_58.field0_0x0 != 0) {
            LOCK();
            *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
            local_29 = *(int *)local_58.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_10015cbe3;
          }
          QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
        }
LAB_10015cbe3:
        if (cVar1 != '\0') break;
      }
      local_48 = local_48 + 1;
      local_38 = 1;
      lVar2 = 0;
    } while (local_48 != local_40);
  }
  if (*local_50 != -1) {
    if (*local_50 != 0) {
      LOCK();
      *local_50 = *local_50 + -1;
      UNLOCK();
      if (*local_50 != 0) {
        return lVar2;
      }
      local_29 = 0;
    }
    FUN_100179430(&local_50,local_50);
  }
  return lVar2;
}

