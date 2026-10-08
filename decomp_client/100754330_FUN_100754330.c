
void FUN_100754330(long param_1)

{
  QArrayData *pQVar1;
  long *plVar2;
  long *local_28;
  undefined1 local_19;
  
  plVar2 = (long *)FUN_1007537f0();
  if (plVar2 == (long *)0x0) {
    return;
  }
  pQVar1 = (QArrayData *)plVar2[1];
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_19 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  local_28 = plVar2;
  FUN_1007534d0();
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_19 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1007543a1;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1007543a1:
  FUN_1007544a0(param_1 + 0x10,&local_28);
  (**(code **)(*plVar2 + 8))(plVar2);
  FUN_1007541e0(param_1,0);
  return;
}

