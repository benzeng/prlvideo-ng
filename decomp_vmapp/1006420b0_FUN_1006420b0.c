
bool FUN_1006420b0(long param_1)

{
  long lVar1;
  long lVar2;
  QArrayData *local_28;
  undefined1 local_1a;
  
  local_28 = (QArrayData *)QString::fromAscii_helper("",0);
  lVar1 = FUN_100642cc0(&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_1a = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_1a) goto LAB_10064210c;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_10064210c:
  lVar2 = 0;
  if (lVar1 != 0) {
    FUN_100642e20(lVar1,param_1);
    lVar2 = lVar1;
  }
  *(long *)(param_1 + 0x28) = lVar2;
  return lVar2 != 0;
}

