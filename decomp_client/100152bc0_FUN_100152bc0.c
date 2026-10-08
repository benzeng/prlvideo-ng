
long FUN_100152bc0(long param_1,QString *param_2)

{
  long lVar1;
  char cVar2;
  long lVar3;
  QString local_58;
  int *local_50;
  long *local_48;
  long *local_40;
  undefined4 local_38;
  undefined1 local_29;
  
  FUN_100062ec0(&local_50,param_1 + 0x10);
  local_48 = (long *)(local_50 + (long)local_50[2] * 2 + 4);
  local_40 = (long *)(local_50 + (long)local_50[3] * 2 + 4);
  local_38 = 1;
  lVar3 = 0;
  if (local_50[2] != local_50[3]) {
    do {
      local_38 = 1;
      lVar1 = *(long *)*local_48;
      lVar3 = 0;
      if ((lVar1 != 0) && (lVar3 = 0, *(int *)(lVar1 + 4) != 0)) {
        lVar3 = ((long *)*local_48)[1];
      }
      FUN_10015a2b0(&local_58,lVar3);
      cVar2 = operator==(&local_58,param_2);
      if (*(int *)local_58.field0_0x0 != -1) {
        if (*(int *)local_58.field0_0x0 != 0) {
          LOCK();
          *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
          local_29 = *(int *)local_58.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100152c89;
        }
        QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
      }
LAB_100152c89:
      if (cVar2 != '\0') break;
      local_48 = local_48 + 1;
      local_38 = 1;
      lVar3 = 0;
    } while (local_48 != local_40);
  }
  if (*local_50 != -1) {
    if (*local_50 != 0) {
      LOCK();
      *local_50 = *local_50 + -1;
      UNLOCK();
      if (*local_50 != 0) {
        return lVar3;
      }
      local_29 = 0;
    }
    FUN_100063050(&local_50,local_50);
  }
  return lVar3;
}

