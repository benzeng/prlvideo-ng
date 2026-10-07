
void FUN_10003cef0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  QArrayData *pQVar3;
  char cVar4;
  byte bVar5;
  short sVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  char *pcVar10;
  QString local_4f8;
  QString local_4f0;
  QArrayData *local_4e8;
  QArrayData *local_4e0;
  QArrayData *local_4d8;
  QArrayData *local_4d0;
  QString local_4c8;
  undefined4 local_4bc;
  Data *local_4b8;
  undefined4 local_4ac;
  Data *local_4a8;
  QString local_4a0;
  QArrayData *local_498;
  undefined1 local_489;
  char local_488 [1024];
  undefined1 local_88 [80];
  long local_38;
  
  puVar2 = PTR_shared_null_100ba2188;
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_4a8 = (Data *)PTR_shared_null_100ba2188;
  local_4ac = 0x8301;
  FUN_10003cd80(&local_4a8,&local_4ac);
  local_4b8 = (Data *)puVar2;
  local_4bc = 0x9100;
  FUN_10003cd80(&local_4b8,&local_4bc);
  FUN_10051bb70(param_1,param_2,&local_4a8,&local_4b8);
  if (*(int *)local_4b8 != -1) {
    if (*(int *)local_4b8 != 0) {
      LOCK();
      *(int *)local_4b8 = *(int *)local_4b8 + -1;
      local_489 = *(int *)local_4b8 != 0;
      UNLOCK();
      if ((bool)local_489) goto LAB_10003cfb2;
    }
    QListData::dispose(local_4b8);
  }
LAB_10003cfb2:
  if (*(int *)local_4a8 != -1) {
    if (*(int *)local_4a8 != 0) {
      LOCK();
      *(int *)local_4a8 = *(int *)local_4a8 + -1;
      local_489 = *(int *)local_4a8 != 0;
      UNLOCK();
      if ((bool)local_489) goto LAB_10003cfe4;
    }
    QListData::dispose(local_4a8);
  }
LAB_10003cfe4:
  *param_1 = &PTR_FUN_100ba7fb8;
  param_1[5] = &PTR_FUN_100ba8048;
  *(undefined2 *)(param_1 + 0x15) = 0x100;
  puVar1 = param_1 + 0x16;
  FUN_10000bdf0(puVar1);
  FUN_1004c0790(param_1,0x8301,0x8301);
  FUN_1004c0790(param_1,0x9100,0x9101);
  FUN_10051a6b0(DAT_1011c3698 + 0x10f0,0xf,param_1 + 5);
  plVar8 = operator_new(0xb0);
  FUN_100041050(plVar8);
  *plVar8 = (long)&PTR_FUN_100bc4b00;
  plVar8[0x15] = (long)param_1;
  plVar9 = (long *)param_1[0xf];
  if ((plVar9 != plVar8) && (plVar9 != (long *)0x0)) {
    (**(code **)(*plVar9 + 8))();
  }
  param_1[0xf] = plVar8;
  plVar9 = plVar8 + 0x10;
  if (((ulong)plVar9 & 1) == 0) {
    QReadWriteLock::lockForWrite();
    plVar9 = (long *)((ulong)plVar9 | 1);
  }
  *(undefined1 *)((long)plVar8 + 0x94) = 1;
  if (((ulong)plVar9 & 1) != 0) {
    QReadWriteLock::unlock();
  }
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getVmSharedApplications();
  cVar4 = CVmSharedApplications::isMacToWin();
  if (cVar4 == '\0') {
    bVar5 = 0;
  }
  else {
    bVar5 = CVmTools::isIsolatedVm();
    bVar5 = bVar5 ^ 1;
  }
  *(byte *)((long)param_1 + 0xa9) = bVar5;
  if (1 < DAT_1011b55f8) {
    pcVar10 = "off";
    if (bVar5 != 0) {
      pcVar10 = "on";
    }
    FUN_1008e3970("SHAH","vm",2,"Shared Host Apps [%s]",pcVar10);
  }
  QString::fromUtf8_helper((char *)&local_4a0,0x9e244b);
  QString::operator=((QString *)&DAT_1011b6270,&local_4a0);
  if (*(int *)local_4a0.field0_0x0 != -1) {
    if (*(int *)local_4a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_4a0.field0_0x0 = *(int *)local_4a0.field0_0x0 + -1;
      local_489 = *(int *)local_4a0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_489) goto LAB_10003d1c3;
    }
    QArrayData::deallocate((QArrayData *)local_4a0.field0_0x0,2,8);
  }
LAB_10003d1c3:
  sVar6 = _FSFindFolder(0xffff8005,0x63757372,0,local_88);
  if ((sVar6 == 0) && (iVar7 = _FSRefMakePath(local_88,local_488,0x400), iVar7 == 0)) {
    _strlen(local_488);
    QString::fromUtf8_helper((char *)&local_4d8,(int)local_488);
    QString::normalized(&local_4d0,&local_4d8,1,0);
    local_4c8.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_4d0;
    if (1 < *(int *)local_4d0 + 1U) {
      LOCK();
      *(int *)local_4d0 = *(int *)local_4d0 + 1;
      local_489 = *(int *)local_4d0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_498,0xa02eac);
    QString::append(&local_4c8);
    if (*(int *)local_498 != -1) {
      if (*(int *)local_498 != 0) {
        LOCK();
        *(int *)local_498 = *(int *)local_498 + -1;
        local_489 = *(int *)local_498 != 0;
        UNLOCK();
        if ((bool)local_489) goto LAB_10003d2c1;
      }
      QArrayData::deallocate(local_498,2,8);
    }
LAB_10003d2c1:
    QString::operator=((QString *)&DAT_1011b6270,&local_4c8);
    if (*(int *)local_4c8.field0_0x0 != -1) {
      if (*(int *)local_4c8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_4c8.field0_0x0 = *(int *)local_4c8.field0_0x0 + -1;
        local_489 = *(int *)local_4c8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_489) goto LAB_10003d310;
      }
      QArrayData::deallocate((QArrayData *)local_4c8.field0_0x0,2,8);
    }
LAB_10003d310:
    if (*(int *)local_4d0 != -1) {
      if (*(int *)local_4d0 != 0) {
        LOCK();
        *(int *)local_4d0 = *(int *)local_4d0 + -1;
        local_489 = *(int *)local_4d0 != 0;
        UNLOCK();
        if ((bool)local_489) goto LAB_10003d34c;
      }
      QArrayData::deallocate(local_4d0,2,8);
    }
LAB_10003d34c:
    if (*(int *)local_4d8 != -1) {
      if (*(int *)local_4d8 != 0) {
        LOCK();
        *(int *)local_4d8 = *(int *)local_4d8 + -1;
        local_489 = *(int *)local_4d8 != 0;
        UNLOCK();
        if ((bool)local_489) goto LAB_10003d388;
      }
      QArrayData::deallocate(local_4d8,2,8);
    }
  }
LAB_10003d388:
  QString::toUtf8();
  FUN_1008e3970("SHAH","vm",0,"SHA Mac dir: \"%s\"",local_4e0 + *(long *)(local_4e0 + 0x10));
  if (*(int *)local_4e0 != -1) {
    if (*(int *)local_4e0 != 0) {
      LOCK();
      *(int *)local_4e0 = *(int *)local_4e0 + -1;
      local_489 = *(int *)local_4e0 != 0;
      UNLOCK();
      if ((bool)local_489) goto LAB_10003d400;
    }
    QArrayData::deallocate(local_4e0,1,8);
  }
LAB_10003d400:
  QString::toUtf8();
  FUN_1008e3970("SHAH","vm",0,"SHA Home dir: \"%s\"",local_4e8 + *(long *)(local_4e8 + 0x10));
  if (*(int *)local_4e8 != -1) {
    if (*(int *)local_4e8 != 0) {
      LOCK();
      *(int *)local_4e8 = *(int *)local_4e8 + -1;
      local_489 = *(int *)local_4e8 != 0;
      UNLOCK();
      if ((bool)local_489) goto LAB_10003d478;
    }
    QArrayData::deallocate(local_4e8,1,8);
  }
LAB_10003d478:
  pQVar3 = DAT_1011b6278;
  local_4f0.field0_0x0 = (QTypedArrayData<unsigned_short> *)DAT_1011b6278;
  if (1 < *(int *)DAT_1011b6278 + 1U) {
    LOCK();
    *(int *)DAT_1011b6278 = *(int *)DAT_1011b6278 + 1;
    local_489 = *(int *)pQVar3 != 0;
    UNLOCK();
  }
  QString::append(&local_4f0);
  FUN_10000be00(puVar1,&local_4f0,1);
  if (*(int *)local_4f0.field0_0x0 != -1) {
    if (*(int *)local_4f0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_4f0.field0_0x0 = *(int *)local_4f0.field0_0x0 + -1;
      local_489 = *(int *)local_4f0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_489) goto LAB_10003d4fd;
    }
    QArrayData::deallocate((QArrayData *)local_4f0.field0_0x0,2,8);
  }
LAB_10003d4fd:
  pQVar3 = DAT_1011b6270;
  local_4f8.field0_0x0 = (QTypedArrayData<unsigned_short> *)DAT_1011b6270;
  if (1 < *(int *)DAT_1011b6270 + 1U) {
    LOCK();
    *(int *)DAT_1011b6270 = *(int *)DAT_1011b6270 + 1;
    local_489 = *(int *)pQVar3 != 0;
    UNLOCK();
  }
  QString::append(&local_4f8);
  FUN_10000be00(puVar1,&local_4f8,2);
  if (*(int *)local_4f8.field0_0x0 != -1) {
    if (*(int *)local_4f8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_4f8.field0_0x0 = *(int *)local_4f8.field0_0x0 + -1;
      local_489 = *(int *)local_4f8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_489) goto LAB_10003d582;
    }
    QArrayData::deallocate((QArrayData *)local_4f8.field0_0x0,2,8);
  }
LAB_10003d582:
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

