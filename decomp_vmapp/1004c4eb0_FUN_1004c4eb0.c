
undefined1 FUN_1004c4eb0(undefined8 param_1)

{
  QMapNodeBase *pQVar1;
  char cVar2;
  undefined1 uVar3;
  QMapNodeBase *local_28;
  undefined1 local_1a;
  
  local_28 = (QMapNodeBase *)PTR_shared_null_100ba20d8;
  cVar2 = FUN_1004c4800(&local_28);
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_1004c4bd0(&local_28,"business",param_1);
  }
  pQVar1 = local_28;
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_1a = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_1a) {
        return uVar3;
      }
    }
    if (*(long *)(local_28 + 0x10) != 0) {
      FUN_1004a11c0();
      QMapDataBase::freeTree(pQVar1,(int)*(undefined8 *)(pQVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar1);
  }
  return uVar3;
}

