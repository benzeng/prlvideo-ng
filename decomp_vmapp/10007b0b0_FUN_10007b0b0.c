
undefined8 FUN_10007b0b0(void)

{
  long *plVar1;
  char cVar2;
  undefined4 *puVar3;
  long lVar4;
  QArrayData *local_130;
  CVmEvent local_128 [16];
  int local_118;
  QEvent local_48 [32];
  long *local_28;
  undefined1 local_19;
  
  FUN_10011a560(&local_28);
  cVar2 = (**(code **)(*(long *)local_28[2] + 0x10))();
  if (cVar2 == '\0') {
    puVar3 = (undefined4 *)___cxa_allocate_exception(4);
    *puVar3 = 0x80000083;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar3,PTR_typeinfo_100ba22d8,0);
  }
  lVar4 = 0;
  if (local_28 != (long *)0x0) {
    lVar4 = local_28[2];
  }
  FUN_10011ce90(&local_130,lVar4);
  CVmEvent::CVmEvent(local_128,(QTypedArrayData<unsigned_short> *)&local_130);
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_19 = *(int *)local_130 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10007b144;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_10007b144:
  if (local_118 < 0) {
    puVar3 = (undefined4 *)___cxa_allocate_exception(4);
    *puVar3 = 0x80000083;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar3,PTR_typeinfo_100ba22d8,0);
  }
  cVar2 = FUN_100075330(DAT_1011c3698 + 0x110,local_128);
  if (cVar2 == '\0') {
    puVar3 = (undefined4 *)___cxa_allocate_exception(4);
    *puVar3 = 0x80000083;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar3,PTR_typeinfo_100ba22d8,0);
  }
  QMutex::lock();
  lVar4 = DAT_1011cc808;
  if (DAT_1011cc808 != 0) {
    DAT_1011cc810 = DAT_1011cc810 + 1;
  }
  QMutex::unlock();
  if (lVar4 != 0) {
    if (*(long *)(lVar4 + 0x60) != 0) {
      FUN_10003c420();
    }
    FUN_100026030(&DAT_1011cc7f8);
  }
  QEvent::~QEvent(local_48);
  CVmEventBase::~CVmEventBase((CVmEventBase *)local_128);
  if (local_28 != (long *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*local_28 + 0x10))();
    }
  }
  return 1;
}

