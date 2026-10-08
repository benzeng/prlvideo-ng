
undefined1 FUN_100a433b0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long lVar4;
  QArrayData *local_870;
  QString local_868;
  QArrayData *local_860;
  QString local_858;
  QString local_850;
  QString local_848;
  undefined1 local_839;
  char local_838 [1024];
  char local_438 [1024];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar1;
  uVar3 = _CFStringCreateWithCString
                    (*(undefined8 *)PTR__kCFAllocatorDefault_1021e18d0,param_2,0x8000100);
  lVar4 = FUN_100a432b0();
  local_848.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_850.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  if (lVar4 == 0) {
    uVar2 = 0;
  }
  else {
    _CFStringGetCString(lVar4,local_438,0x400,0x8000100);
    _strlen(local_438);
    QString::fromUtf8_helper((char *)&local_860,(int)local_438);
    QString::normalized(&local_858,&local_860,1,0);
    QString::operator=(&local_848,&local_858);
    if (*(int *)local_858.field0_0x0 != -1) {
      if (*(int *)local_858.field0_0x0 != 0) {
        LOCK();
        *(int *)local_858.field0_0x0 = *(int *)local_858.field0_0x0 + -1;
        local_839 = *(int *)local_858.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_839) goto LAB_100a434b8;
      }
      QArrayData::deallocate((QArrayData *)local_858.field0_0x0,2,8);
    }
LAB_100a434b8:
    if (*(int *)local_860 != -1) {
      if (*(int *)local_860 != 0) {
        LOCK();
        *(int *)local_860 = *(int *)local_860 + -1;
        local_839 = *(int *)local_860 != 0;
        UNLOCK();
        if ((bool)local_839) goto LAB_100a434f4;
      }
      QArrayData::deallocate(local_860,2,8);
    }
LAB_100a434f4:
    _CFStringGetCString(*(undefined8 *)(param_1 + 8),local_838,0x400,0x8000100);
    _strlen(local_838);
    QString::fromUtf8_helper((char *)&local_870,(int)local_838);
    QString::normalized(&local_868,&local_870,1,0);
    QString::operator=(&local_850,&local_868);
    if (*(int *)local_868.field0_0x0 != -1) {
      if (*(int *)local_868.field0_0x0 != 0) {
        LOCK();
        *(int *)local_868.field0_0x0 = *(int *)local_868.field0_0x0 + -1;
        local_839 = *(int *)local_868.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_839) goto LAB_100a43597;
      }
      QArrayData::deallocate((QArrayData *)local_868.field0_0x0,2,8);
    }
LAB_100a43597:
    if (*(int *)local_870 != -1) {
      if (*(int *)local_870 != 0) {
        LOCK();
        *(int *)local_870 = *(int *)local_870 + -1;
        local_839 = *(int *)local_870 != 0;
        UNLOCK();
        if ((bool)local_839) goto LAB_100a435d3;
      }
      QArrayData::deallocate(local_870,2,8);
    }
LAB_100a435d3:
    uVar2 = operator==(&local_848,&local_850);
    _CFRelease(lVar4);
  }
  _CFRelease(uVar3);
  if (*(int *)local_850.field0_0x0 != -1) {
    if (*(int *)local_850.field0_0x0 != 0) {
      LOCK();
      *(int *)local_850.field0_0x0 = *(int *)local_850.field0_0x0 + -1;
      local_839 = *(int *)local_850.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_839) goto LAB_100a43638;
    }
    QArrayData::deallocate((QArrayData *)local_850.field0_0x0,2,8);
  }
LAB_100a43638:
  if (*(int *)local_848.field0_0x0 != -1) {
    if (*(int *)local_848.field0_0x0 != 0) {
      LOCK();
      *(int *)local_848.field0_0x0 = *(int *)local_848.field0_0x0 + -1;
      local_839 = *(int *)local_848.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_839) goto LAB_100a43674;
    }
    QArrayData::deallocate((QArrayData *)local_848.field0_0x0,2,8);
  }
LAB_100a43674:
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
}

