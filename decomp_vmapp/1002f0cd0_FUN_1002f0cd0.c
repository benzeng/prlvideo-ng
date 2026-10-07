
bool FUN_1002f0cd0(long param_1)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  QArrayData *local_60;
  undefined1 local_50 [24];
  uint local_38;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_20 = lVar1;
  if (*(char *)(param_1 + 0x168) == '\0') {
    bVar3 = false;
  }
  else {
    bVar3 = true;
    if ((*(char *)(param_1 + 0x1c3) == '\0') && (*(int *)(param_1 + 0x1b8) != 4)) {
      QString::toUtf8();
      iVar2 = FUN_1002f2890(local_60 + *(long *)(local_60 + 0x10),local_50);
      if (iVar2 < 0) {
        bVar3 = iVar2 != -6;
      }
      else {
        bVar3 = (local_38 & 3) == 3;
      }
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_50[0] = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_50[0]) goto LAB_1002f0d40;
        }
        QArrayData::deallocate(local_60,1,8);
      }
    }
  }
LAB_1002f0d40:
  if (lVar1 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return bVar3;
}

