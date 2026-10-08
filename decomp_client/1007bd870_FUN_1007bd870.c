
long FUN_1007bd870(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  int *local_40;
  long *local_38;
  long *local_30;
  undefined4 local_28;
  undefined1 local_19;
  
  FUN_1007c5b80(&local_40,param_1 + 0x38);
  local_38 = (long *)(local_40 + (long)local_40[2] * 2 + 4);
  local_30 = (long *)(local_40 + (long)local_40[3] * 2 + 4);
  local_28 = 1;
  lVar2 = 0;
  if (local_40[2] != local_40[3]) {
    do {
      local_28 = 1;
      lVar2 = *(long *)*local_38;
      if ((((lVar2 != 0) && (*(int *)(lVar2 + 4) != 0)) &&
          (lVar2 = ((long *)*local_38)[1], lVar2 != 0)) &&
         (iVar1 = FUN_1007b57b0(lVar2), iVar1 == param_2)) break;
      local_38 = local_38 + 1;
      local_28 = 1;
      lVar2 = 0;
    } while (local_38 != local_30);
  }
  if (*local_40 != -1) {
    if (*local_40 != 0) {
      LOCK();
      *local_40 = *local_40 + -1;
      UNLOCK();
      if (*local_40 != 0) {
        return lVar2;
      }
      local_19 = 0;
    }
    FUN_1007c5ae0(&local_40,local_40);
  }
  return lVar2;
}

