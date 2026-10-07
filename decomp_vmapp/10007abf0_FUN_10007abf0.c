
undefined8 FUN_10007abf0(void)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined4 *puVar5;
  QArrayData *local_150;
  char local_141;
  QArrayData *local_140;
  QArrayData *local_138;
  CVmEvent local_130 [16];
  int local_120;
  QEvent local_50 [32];
  long *local_30;
  undefined1 local_21;
  
  FUN_10011a560(&local_30);
  cVar2 = (**(code **)(*(long *)local_30[2] + 0x10))();
  if (cVar2 == '\0') {
    puVar5 = (undefined4 *)___cxa_allocate_exception(4);
    *puVar5 = 0x80000083;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar5,PTR_typeinfo_100ba22d8,0);
  }
  lVar4 = 0;
  if (local_30 != (long *)0x0) {
    lVar4 = local_30[2];
  }
  FUN_10011ce90(&local_138,lVar4);
  CVmEvent::CVmEvent(local_130,(QTypedArrayData<unsigned_short> *)&local_138);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_21 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10007ac89;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_10007ac89:
  if (local_120 < 0) {
    puVar5 = (undefined4 *)___cxa_allocate_exception(4);
    *puVar5 = 0x80000083;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar5,PTR_typeinfo_100ba22d8,0);
  }
  local_140 = (QArrayData *)QString::fromAscii_helper("vm_devices_activity",0x13);
  lVar4 = CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_130);
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_21 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10007acfa;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_10007acfa:
  if (lVar4 == 0) goto LAB_10007aef5;
  local_141 = '\0';
  CVmEventParameter::getParamValue();
  iVar3 = QString::toUInt((bool *)&local_150,(int)&local_141);
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_21 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10007ad69;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_10007ad69:
  if (local_141 == '\0') {
    puVar5 = (undefined4 *)___cxa_allocate_exception(4);
    *puVar5 = 0x80000083;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar5,PTR_typeinfo_100ba22d8,0);
  }
  if (iVar3 == 0) {
    FUN_1002a49b0();
  }
  else {
    FUN_1002a48f0();
  }
LAB_10007aef5:
  QEvent::~QEvent(local_50);
  CVmEventBase::~CVmEventBase((CVmEventBase *)local_130);
  if (local_30 != (long *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*local_30 + 0x10))();
    }
  }
  return 1;
}

