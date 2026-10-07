
long FUN_10041d810(long param_1,int param_2)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  QString local_38;
  undefined1 local_29;
  
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  QString::setNum((ulonglong)&local_38,param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x658) + 0x10);
  lVar6 = 0;
  if (lVar1 != 0) {
    lVar5 = lVar6;
    do {
      while (lVar4 = lVar1, cVar2 = operator<((QString *)(lVar4 + 0x18),&local_38), cVar2 == '\0') {
        lVar1 = *(long *)(lVar4 + 8);
        lVar5 = lVar4;
        if (*(long *)(lVar4 + 8) == 0) goto LAB_10041d89c;
      }
      lVar1 = *(long *)(lVar4 + 0x10);
    } while (*(long *)(lVar4 + 0x10) != 0);
    lVar6 = 0;
    lVar4 = lVar5;
    if (lVar5 != 0) {
LAB_10041d89c:
      cVar2 = operator<(&local_38,(QString *)(lVar4 + 0x18));
      lVar6 = 0;
      if (cVar2 == '\0') {
        plVar3 = (long *)FUN_10041ef70(param_1 + 0x658,&local_38);
        lVar6 = *plVar3;
        FUN_10041f030(param_1 + 0x658,&local_38);
      }
    }
  }
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return lVar6;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return lVar6;
}

