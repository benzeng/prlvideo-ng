
void FUN_1000bf0a0(long param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  QArrayData *pQVar3;
  long lVar4;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QString local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  local_50 = (QArrayData *)QString::fromAscii_helper("%1%2%3\r\n",8);
  pQVar3 = (QArrayData *)QString::fromAscii_helper("12.2.1 (41615)",0xe);
  if (1 < *(int *)pQVar3 + 1U) {
    LOCK();
    *(int *)pQVar3 = *(int *)pQVar3 + 1;
    local_29 = *(int *)pQVar3 != 0;
    UNLOCK();
  }
  iVar1 = *(int *)(pQVar3 + 4);
  local_60 = pQVar3;
  if ((1 < *(uint *)pQVar3) || ((*(uint *)(pQVar3 + 8) & 0x7fffffff) < iVar1 + 2U)) {
    QString::reallocData((uint)&local_60,SUB41(iVar1 + 2U,0));
    iVar1 = *(int *)(local_60 + 4);
  }
  *(int *)(local_60 + 4) = iVar1 + 1;
  *(undefined2 *)(local_60 + (long)iVar1 * 2 + *(long *)(local_60 + 0x10)) = 0x20;
  *(undefined2 *)(local_60 + (long)*(int *)(local_60 + 4) * 2 + *(long *)(local_60 + 0x10)) = 0;
  local_68 = (QArrayData *)QString::fromAscii_helper("Mon, 26 Jun 2017 17:54:09",0x19);
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_60;
  if (1 < *(int *)local_60 + 1U) {
    LOCK();
    *(int *)local_60 = *(int *)local_60 + 1;
    local_29 = *(int *)local_60 != 0;
    UNLOCK();
  }
  QString::append(&local_58);
  QString::arg(&local_48,&local_50,&local_58,0xffffffb0,0x20);
  local_70 = (QArrayData *)
             QString::fromAscii_helper("Copyright 1999-2017 Parallels International GmbH.",0x31);
  QString::arg(&local_40,&local_48,&local_70,0xffffffb0,0x20);
  local_78 = (QArrayData *)QString::fromAscii_helper("All rights reserved.",0x14);
  QString::arg(&local_38,&local_40,&local_78,0xffffffb0,0x20);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000bf23b;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1000bf23b:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000bf26b;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1000bf26b:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000bf29b;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1000bf29b:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000bf2cb;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1000bf2cb:
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_29 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000bf2fb;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1000bf2fb:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000bf32b;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1000bf32b:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000bf35b;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1000bf35b:
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_29 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000bf386;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1000bf386:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000bf3b6;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1000bf3b6:
  QString::truncate((int)&local_38);
  QString::toLatin1();
  _memcpy((void *)(param_2 + 0x6000),local_80 + *(long *)(local_80 + 0x10),0xf3);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000bf41c;
    }
    QArrayData::deallocate(local_80,1,8);
  }
LAB_1000bf41c:
  FUN_1008e3970("","vm",0,"[Bios] Building System Memory Map %ld",0x14);
  FUN_1000dcd30(param_2 + 0xf600);
  iVar1 = FUN_1007da300("vm.smbios",1);
  iVar2 = FUN_1007da300("devices.dmi.enable",1);
  if ((iVar1 != 0) && (iVar2 != 0)) {
    lVar4 = FUN_100544e90(0x100000);
    if (lVar4 == 0) {
      lVar4 = 0;
      FUN_1008e3970("","vm",0,"Failed to allocate memory for SMBios");
    }
    else {
      iVar1 = (**(code **)(**(long **)(param_1 + 0x1950) + 0x50))
                        (*(long **)(param_1 + 0x1950),lVar4,0x100000);
      if (iVar1 < 0) {
        FUN_1008e3970("","vm",0,"Failed to get SMBios via ioctl");
        FUN_100544ef0(lVar4,0x100000);
        lVar4 = 0;
      }
    }
    FUN_1000ddae0(lVar4,param_2,param_3,param_1 + 0x110,param_1 + 0x140,
                  *(undefined8 *)(param_1 + 0x1940));
    if (lVar4 != 0) {
      FUN_100544ef0(lVar4,0x100000);
    }
  }
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return;
}

