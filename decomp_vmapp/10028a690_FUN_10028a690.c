
int FUN_10028a690(long *param_1)

{
  short *psVar1;
  QString *this;
  long *plVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  long *plVar7;
  uLong uVar8;
  QUrl local_70 [8];
  QString local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  int local_50;
  undefined1 local_49;
  Bytef local_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  iVar5 = FUN_1002ef640(param_1[8]);
  if (iVar5 - 1U < 2) {
    FUN_1008e3970("","LocalDevices",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "runState != ASYNCDEV_STATE_RUNNING && runState != ASYNCDEV_STATE_STOPPING",
                  "../Scsi/Lsi/hdd.cpp",0x9e,"connect_image");
  }
  QMutex::lock();
  plVar2 = (long *)param_1[0x10];
  if (plVar2 == (long *)0x0) {
    QMutex::unlock();
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    QMutex::unlock();
    if (plVar2[2] != 0) {
      ___dynamic_cast(plVar2[2],PTR_typeinfo_100ba2248,PTR_typeinfo_100ba21d0,0);
    }
  }
  local_50 = 0;
  lVar3 = param_1[0x12];
  CVmDevice::getSystemName();
  QString::toUtf8();
  FUN_1008e3970("","LocalDevices",0,"[hdd:scsi:%u] Connecting device \"%s\"",(int)lVar3,
                local_58 + *(long *)(local_58 + 0x10));
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_49 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_10028a7eb;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_10028a7eb:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_49 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_10028a81b;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10028a81b:
  if (param_1[0x7457] != 0) {
    (**(code **)(*param_1 + 0x100))(param_1);
  }
  CVmDevice::getSystemName();
  this = (QString *)(param_1 + 0x7477);
  QString::operator=(this,&local_68);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_49 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_10028a884;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_10028a884:
  local_50 = FUN_1005a39c0(this);
  if (local_50 < 0) {
    (**(code **)(*param_1 + 0x100))(param_1);
    iVar5 = local_50;
  }
  else {
    plVar7 = (long *)FUN_1003fa9e0(param_1,this,&local_50);
    param_1[0x7457] = (long)plVar7;
    if (plVar7 == (long *)0x0) {
      FUN_1008e3970("","LocalDevices",0,"[Scsi] Can\'t open requested image [0x%x]",local_50);
      (**(code **)(*param_1 + 0x100))(param_1);
      iVar5 = FUN_1003fbdf0(local_50);
    }
    else {
      (**(code **)(*plVar7 + 0x90))(plVar7,param_1 + 0x7458);
      if (*(int *)(param_1[0x13] + 0x1098) == 2) {
        FUN_1007ea840(param_1 + 0x7464,local_48);
        uVar8 = _crc32(0,local_48,0x10);
        FUN_10028c9e0((ulong)*(uint *)(param_1 + 0x12),
                      (ulong)*(uint *)(param_1 + 0x12) & 0xf | uVar8 << 4);
      }
      lVar3 = param_1[0x7457];
      uVar6 = CVmHardDisk::getOnlineCompactMode();
      cVar4 = FUN_1003faf50(lVar3,uVar6);
      if (cVar4 == '\0') {
        *(undefined2 *)(param_1 + 0x7474) = 0x1db0;
      }
      else {
        *(undefined2 *)(param_1 + 0x7474) = 1;
        *(undefined8 *)((long)param_1 + 0x3a3a4) = 0xffffffffffffffff;
      }
      FUN_1003fae80(param_1 + 0x7458,param_1 + 0x7467,(int)param_1[0x12]);
      CVmHardDisk::getStorageURL();
      cVar4 = QUrl::isEmpty();
      QUrl::~QUrl(local_70);
      iVar5 = FUN_100401a70(param_1 + 0x7429,"scsi",(int)param_1[0x12],param_1[0x7457],
                            (ulong)(cVar4 == '\0') << 4);
      if (iVar5 == 0) {
        *(undefined1 *)((long)param_1 + 0x8c) = 1;
        iVar5 = local_50;
        if (*(long *)(DAT_1011c3698 + 0x1ac8) != 0) {
          psVar1 = (short *)(*(long *)(DAT_1011c3698 + 0x1ac8) + 0x20);
          *psVar1 = *psVar1 + 1;
        }
      }
      else {
        (**(code **)(*param_1 + 0x100))(param_1);
        iVar5 = -0x7ffffd9d;
      }
    }
  }
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar7 = plVar2 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar5;
}

