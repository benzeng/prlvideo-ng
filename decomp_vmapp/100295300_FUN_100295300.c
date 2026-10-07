
int FUN_100295300(long *param_1)

{
  QString *this;
  long lVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 uVar7;
  long *plVar8;
  QUrl local_78 [14];
  undefined2 local_6a;
  QString local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  int local_50;
  undefined1 local_49;
  undefined1 local_48 [16];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar1;
  iVar6 = FUN_1002ef640(param_1[8]);
  if (iVar6 - 1U < 2) {
    FUN_1008e3970("","LocalDevices",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "runState != ASYNCDEV_STATE_RUNNING && runState != ASYNCDEV_STATE_STOPPING",
                  "../Ahci/sata_hdd.cpp",0x157,"connect_image");
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
  lVar3 = param_1[0x1fe];
  CVmDevice::getSystemName();
  QString::toUtf8();
  FUN_1008e3970("","LocalDevices",0,"[hdd::sata:%u] Connecting device \"%s\"",(short)lVar3,
                local_58 + *(long *)(local_58 + 0x10));
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_49 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100295461;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_100295461:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_49 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100295491;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100295491:
  if (param_1[0x2838] != 0) {
    (**(code **)(*param_1 + 0x88))(param_1);
  }
  CVmDevice::getSystemName();
  this = (QString *)(param_1 + 0x2839);
  QString::operator=(this,&local_68);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_49 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_1002954fc;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1002954fc:
  local_50 = FUN_1005a39c0(this);
  if (local_50 < 0) {
    (**(code **)(*param_1 + 0x88))(param_1);
    iVar6 = local_50;
  }
  else {
    plVar8 = (long *)FUN_1003fa9e0(param_1,this,&local_50);
    param_1[0x2838] = (long)plVar8;
    if (plVar8 == (long *)0x0) {
      FUN_1008e3970("","LocalDevices",0,"[CSataHdd] Can\'t open requested image [0x%x].",local_50);
      (**(code **)(*param_1 + 0x88))(param_1);
      iVar6 = FUN_1003fbdf0(local_50);
    }
    else {
      (**(code **)(*plVar8 + 0x1b0))(local_48,plVar8);
      cVar4 = FUN_1007ea210(local_48);
      if (cVar4 == '\0') {
        *(undefined1 *)(param_1 + 0x26f6) = 0;
      }
      local_6a = 0;
      lVar3 = param_1[0x2838];
      uVar7 = CVmHardDisk::getOnlineCompactMode();
      cVar4 = FUN_1003faf50(lVar3,uVar7);
      if (cVar4 != '\0') {
        local_6a = 1;
      }
      CVmHardDisk::getStorageURL();
      cVar4 = QUrl::isEmpty();
      QUrl::~QUrl(local_78);
      iVar6 = FUN_100401a70(param_1 + 0x26f7,"sata",
                            (uint)*(ushort *)(param_1 + 0x1fe) +
                            (uint)*(ushort *)((long)param_1 + 0xfee) * 0x20,param_1[0x2838],
                            (ulong)(cVar4 == '\0') << 4);
      if (iVar6 == 0) {
        uVar5 = CVmClusteredDevice::getInterfaceType();
        FUN_1003fd2f0(param_1 + 0x2725,param_1 + 0x26f7,"sata-sf",uVar5,
                      (uint)*(ushort *)(param_1 + 0x1fe) +
                      (uint)*(ushort *)((long)param_1 + 0xfee) * 0x20);
        iVar6 = (**(code **)(*param_1 + 0xf8))(param_1,1,&local_6a);
        if (iVar6 != 0) {
          FUN_1008e3970("","LocalDevices",0,"ASSERT( %s ) occured in %s:%d [%s]",
                        "Status == PRL_ERR_SUCCESS","../Ahci/sata_hdd.cpp",0x19d,"connect_image");
        }
        *(undefined1 *)((long)param_1 + 0xfed) = 1;
        iVar6 = local_50;
      }
      else {
        (**(code **)(*param_1 + 0x88))(param_1);
        iVar6 = -0x7ffffd9d;
      }
    }
  }
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar8 = plVar2 + 1;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar6;
}

