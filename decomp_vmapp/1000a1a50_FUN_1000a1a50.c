
ulong FUN_1000a1a50(long param_1)

{
  long *plVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  QArrayData *local_38;
  QArrayData *local_30;
  long *local_28;
  undefined1 local_19;
  
  lVar2 = *(long *)(param_1 + 0x10830);
  if (lVar2 == 0) {
    return 0x80000001;
  }
  FUN_10011a560(&local_28);
  lVar4 = 0;
  if (local_28 != (long *)0x0) {
    lVar4 = local_28[2];
  }
  FUN_10011ce90(&local_30,lVar4);
  QString::toUtf8();
  if ((1 < *(uint *)local_38) || (*(long *)(local_38 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_38,*(uint *)(local_38 + 4) + 1,*(uint *)(local_38 + 8) >> 0x1f);
  }
  FUN_1008e3970("","vm",0,"RunUtilityInGuest: %s",local_38 + *(long *)(local_38 + 0x10));
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1000a1b1b;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_1000a1b1b:
  bVar3 = FUN_10002cc40(lVar2,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1000a1b59;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1000a1b59:
  if (local_28 != (long *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*local_28 + 0x10))();
    }
  }
  return (ulong)bVar3;
}

