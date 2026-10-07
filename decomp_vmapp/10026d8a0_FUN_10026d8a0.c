
int FUN_10026d8a0(long param_1)

{
  QString *this;
  long *plVar1;
  long *plVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  QUrl local_c8 [8];
  QString local_c0;
  int local_b8;
  undefined1 local_b1;
  undefined1 local_b0 [40];
  undefined1 local_88 [48];
  QArrayData *local_58;
  QArrayData *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_b8 = 0;
  iVar5 = FUN_1002ef640(*(undefined8 *)(param_1 + 0x40));
  if (iVar5 - 1U < 2) {
    FUN_1008e3970("","LocalDevices",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "runState != ASYNCDEV_STATE_RUNNING && runState != ASYNCDEV_STATE_STOPPING",
                  "../Storage/HardDrive/AppHdd.cpp",0x20e,"OpenImage");
  }
  if (*(long *)(param_1 + 0x12e0) != 0) {
    FUN_1008e3970("","LocalDevices",0,"ASSERT( %s ) occured in %s:%d [%s]","NULL == m_pImage",
                  "../Storage/HardDrive/AppHdd.cpp",0x214,"OpenImage");
    FUN_10026dff0(param_1);
  }
  QMutex::lock();
  plVar1 = *(long **)(param_1 + 0x80);
  if (plVar1 == (long *)0x0) {
    QMutex::unlock();
  }
  else {
    LOCK();
    *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
    UNLOCK();
    QMutex::unlock();
    if (plVar1[2] != 0) {
      ___dynamic_cast(plVar1[2],PTR_typeinfo_100ba2248,PTR_typeinfo_100ba21d0,0);
    }
  }
  CVmDevice::getSystemName();
  this = (QString *)(param_1 + 0x12f0);
  QString::operator=(this,&local_c0);
  if (*(int *)local_c0.field0_0x0 != -1) {
    if (*(int *)local_c0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
      local_b1 = *(int *)local_c0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_b1) goto LAB_10026da3a;
    }
    QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
  }
LAB_10026da3a:
  local_b8 = FUN_1005a39c0(this);
  if (local_b8 < 0) {
    FUN_10026dff0(param_1);
    iVar5 = local_b8;
    goto LAB_10026dc51;
  }
  lVar7 = FUN_1003fa9e0(param_1,this,&local_b8);
  *(long *)(param_1 + 0x12e0) = lVar7;
  if (lVar7 == 0) {
    FUN_1008e3970("","LocalDevices",0,"[AppHDD] Can\'t open requested image [0x%x].",local_b8);
    iVar5 = FUN_1003fbdf0(local_b8);
    goto LAB_10026dc51;
  }
  CVmHardDisk::getStorageURL();
  cVar3 = QUrl::isEmpty();
  QUrl::~QUrl(local_c8);
  iVar5 = FUN_100401a70(param_1 + 0x8d8,"ide",*(undefined4 *)(param_1 + 0x12e8),
                        *(undefined8 *)(param_1 + 0x12e0),(ulong)(cVar3 == '\0') << 4);
  if (iVar5 != 0) {
    FUN_10026dff0(param_1);
    iVar5 = -0x7ffffd9d;
    goto LAB_10026dc51;
  }
  iVar5 = *(int *)(param_1 + 0x12e8);
  plVar2 = *(long **)(param_1 + 0x12e0);
  FUN_100098d30(local_b0);
  if ((iVar5 < 4) && (plVar2 != (long *)0x0)) {
    lVar7 = *(long *)(DAT_1011c3698 + 0x1938);
    iVar6 = (**(code **)(*plVar2 + 0x90))(plVar2,local_b0);
    if (-1 < iVar6) {
      FUN_1003fae80(local_b0,lVar7 + 0x2e0f8 + (long)iVar5 * 0x538,iVar5);
    }
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_b1 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_b1) goto LAB_10026dbe1;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10026dbe1:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_b1 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_b1) goto LAB_10026dc17;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_10026dc17:
  FUN_100098f20(local_88);
  uVar4 = CVmClusteredDevice::getInterfaceType();
  FUN_1003fd2f0(param_1 + 0xa48,param_1 + 0x8d8,"ide-sf",uVar4,*(undefined4 *)(param_1 + 0x12e8));
  iVar5 = 0;
LAB_10026dc51:
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar5;
}

