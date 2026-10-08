
void FUN_100cbf640(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  QString QVar3;
  void *pvVar4;
  long *plVar5;
  long lVar6;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  undefined1 local_49;
  undefined1 local_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  QVar3.field0_0x0 = (QTypedArrayData<unsigned_short> *)CVmConfiguration::getVmIdentification();
  local_60 = (QArrayData *)QString::fromAscii_helper("System",6);
  local_68 = (QArrayData *)QString::fromAscii_helper("Parallels VM Name",0x11);
  local_70 = (QArrayData *)QString::fromAscii_helper("Untitled Virtual Machine",0x18);
  FUN_100ccd600(&local_58,param_2,&local_60,&local_68,&local_70);
  CVmIdentification::setVmName(QVar3);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_49 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100cbf703;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100cbf703:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_49 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100cbf733;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100cbf733:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_49 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100cbf763;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100cbf763:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_49 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100cbf793;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100cbf793:
  pvVar4 = operator_new(0x10);
  local_80 = (QArrayData *)QString::fromAscii_helper("System",6);
  local_88 = (QArrayData *)QString::fromAscii_helper("VM Id",5);
  local_90 = (QArrayData *)QString::fromAscii_helper("",0);
  FUN_100ccd600(&local_78,param_2,&local_80,&local_88,&local_90);
  FUN_100dda110(pvVar4,&local_78);
  plVar5 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
  if (plVar5 == (long *)0x0) {
    operator_delete(pvVar4);
    plVar5 = (long *)0x0;
  }
  else {
    *(undefined4 *)(plVar5 + 1) = 1;
    plVar5[2] = (long)pvVar4;
    *plVar5 = (long)&PTR_FUN_10230f3c8;
  }
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_49 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100cbf87c;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100cbf87c:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_49 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100cbf8b5;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100cbf8b5:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_49 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100cbf8e8;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100cbf8e8:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_49 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100cbf918;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100cbf918:
  QVar3.field0_0x0 = (QTypedArrayData<unsigned_short> *)CVmConfiguration::getVmIdentification();
  lVar6 = 0;
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[2];
  }
  cVar2 = FUN_100deade0(lVar6);
  if (cVar2 == '\0') {
    lVar6 = 0;
    if (plVar5 != (long *)0x0) {
      lVar6 = plVar5[2];
    }
    FUN_100dda260(&local_98,lVar6);
  }
  else {
    FUN_100dda3c0(local_48);
    FUN_100dda260(&local_98,local_48);
  }
  CVmIdentification::setVmUuid(QVar3);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_49 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100cbf9ae;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100cbf9ae:
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

