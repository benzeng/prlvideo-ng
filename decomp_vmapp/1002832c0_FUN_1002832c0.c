
int FUN_1002832c0(long *param_1)

{
  short *psVar1;
  long *plVar2;
  long *plVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  QArrayData *pQVar9;
  QUrl local_70 [8];
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  int local_44;
  QArrayData *local_40;
  undefined1 local_31;
  
  QMutex::lock();
  QMutex::lock();
  plVar3 = (long *)param_1[3];
  if (plVar3 != (long *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  QMutex::unlock();
  if ((plVar3 != (long *)0x0) && (plVar3[2] != 0)) {
    ___dynamic_cast(plVar3[2],PTR_typeinfo_100ba2248,PTR_typeinfo_100ba21d0,0);
  }
  uVar4 = CVmClusteredDevice::getStackIndex();
  *(undefined1 *)((long)param_1 + 0xc9) = uVar4;
  CVmDevice::getSystemName();
  local_44 = 0;
  if (param_1[0x28] != 0) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  CVmDevice::getSystemName();
  QString::toUtf8();
  pQVar9 = local_50 + *(long *)(local_50 + 0x10);
  CVmDevice::getUserFriendlyName();
  QString::toUtf8();
  FUN_1008e3970("","LocalDevices",0,"[HDD:scsi] Connecting device \"%s\" known as \"%s\" ",pQVar9,
                local_60 + *(long *)(local_60 + 0x10));
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10028340a;
    }
    QArrayData::deallocate(local_60,1,8);
  }
LAB_10028340a:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10028343a;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10028343a:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10028346a;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_10028346a:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10028349a;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10028349a:
  local_44 = FUN_1005a39c0(&local_40);
  if (local_44 < 0) {
    (**(code **)(*param_1 + 0x18))(param_1);
    iVar6 = local_44;
  }
  else {
    lVar8 = FUN_1003fa9e0(param_1 + 5,&local_40,&local_44);
    param_1[0x28] = lVar8;
    if ((lVar8 == 0) || (local_44 < 0)) {
      FUN_10059f090(param_1 + 0x57);
      uVar7 = FUN_100768f60();
      FUN_1008e3970("","LocalDevices",0,"[HDD:scsi] Can not open hdd (%d, %d)",uVar7,local_44);
      (**(code **)(*param_1 + 0x18))(param_1);
      iVar6 = FUN_1003fbdf0(local_44);
    }
    else {
      CVmHardDisk::getStorageURL();
      cVar5 = QUrl::isEmpty();
      QUrl::~QUrl(local_70);
      iVar6 = FUN_100401a70(param_1 + 0x29,"scsi",*(undefined1 *)((long)param_1 + 0xc9),
                            param_1[0x28],(ulong)(cVar5 == '\0') << 4);
      if (iVar6 == 0) {
        (**(code **)(*(long *)param_1[0x28] + 0x90))((long *)param_1[0x28],param_1 + 0x57);
        *(undefined4 *)(param_1 + 0x22) = 1;
        FUN_10025b310(param_1,1);
        iVar6 = 0;
        if (*(long *)(DAT_1011c3698 + 0x1ac8) != 0) {
          psVar1 = (short *)(*(long *)(DAT_1011c3698 + 0x1ac8) + 0x20);
          *psVar1 = *psVar1 + 1;
        }
      }
      else {
        (**(code **)(*param_1 + 0x18))(param_1);
        iVar6 = -0x7ffffd9d;
      }
    }
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100283633;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100283633:
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  QMutex::unlock();
  return iVar6;
}

