
int FUN_10008b0a0(ulong *param_1,long param_2,QFileInfo *param_3,ulong param_4,ulong param_5,
                 byte param_6,char param_7)

{
  undefined4 uVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *local_100;
  QArrayData *local_d8;
  QString local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QString local_a0;
  QString local_98;
  undefined8 local_90;
  undefined8 local_88;
  QArrayData *local_80;
  QFileInfo local_78 [12];
  int local_6c;
  QFileInfo local_68 [8];
  QArrayData *local_60;
  QArrayData *local_58;
  undefined1 local_49;
  undefined1 local_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  CDispCommonPreferences::getMemoryPreferences();
  CDispMemoryPreferences::getHostRamSize();
  QFileInfo::absoluteFilePath();
  cVar2 = FUN_1006f9d10(&local_60);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_49 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_10008b148;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10008b148:
  iVar6 = FUN_1007da300("vm.mem_anonymous",1);
  *(bool *)(param_1 + 4) = iVar6 != 0;
  iVar6 = FUN_1007da300("vm.mem_anonymous_video",0);
  *(bool *)((long)param_1 + 0x21) = iVar6 != 0;
  iVar6 = FUN_1007da300("vm.mem_plain",1);
  *(bool *)((long)param_1 + 0x22) = iVar6 != 0;
  if ((((char)param_1[4] != '\0') && (cVar3 = FUN_1000af830(param_2), cVar3 != '\0')) &&
     (*(char *)(param_2 + 0x1150) != '\0')) {
    cVar3 = FUN_1000a45c0(param_2);
    if (cVar3 == '\0') {
      *(undefined1 *)((long)param_1 + 0x31) = 1;
    }
    else {
      *(undefined1 *)((long)param_1 + 0x31) = 0;
      FUN_1008e3970("","vm",0,"Huge pages prohibited by memory hotplug feature");
    }
  }
  *(undefined1 *)((long)param_1 + 0x32) = 0;
  uVar7 = 0;
  if (cVar2 != '\0') {
    uVar7 = 100;
  }
  uVar7 = FUN_1007da300("vm.mem_flush_limit",uVar7);
  *(undefined4 *)((long)param_1 + 0x2c) = uVar7;
  iVar6 = FUN_1007da300("vm.mem_compressed",(char)param_1[4]);
  *(bool *)(param_1 + 5) = iVar6 != 0;
  if ((char)param_1[4] != '\0') {
    uVar4 = FUN_1000a45c0(param_2);
    *(undefined1 *)((long)param_1 + 0x33) = uVar4;
  }
  if ((param_6 != 0) || (param_7 != '\0')) {
    iVar6 = FUN_1007da300("vm.preload_ws",1);
    *(bool *)(param_1 + 0x15) = iVar6 != 0;
  }
  uVar10 = param_4 >> 0xc;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(int *)(param_1 + 0xf) = (int)uVar10;
  *(undefined4 *)(param_1 + 0x10) = 0x5a;
  *(undefined4 *)((long)param_1 + 0x84) = 10;
  *(undefined4 *)((long)param_1 + 0x7c) = 10;
  QFileInfo::QFileInfo(local_68);
  local_6c = 0;
  if (param_6 == 0) {
    local_88 = 0;
    local_90 = 0;
    FUN_1000892e0();
    iVar6 = FUN_10008a210(param_1,param_3,param_5 + param_4,&local_88,&local_90);
    if (iVar6 < 0) {
      FUN_1008e3970("","vm",0,"[GuestMem::Init] memory file is corrupted");
      goto LAB_10008b9ab;
    }
    QFileInfo::operator=(local_68,param_3);
    QFileInfo::dir();
    FUN_1007d6bd0(local_48);
    FUN_1007d6a70(&local_a8,local_48);
    local_a0.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_a8;
    if (1 < *(int *)local_a8 + 1U) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + 1;
      local_49 = *(int *)local_a8 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_58,0x9e6705);
    QString::append(&local_a0);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_49 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_10008b4a3;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_10008b4a3:
    QFileInfo::setFile((QDir *)local_68,&local_98);
    if (*(int *)local_a0.field0_0x0 != -1) {
      if (*(int *)local_a0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
        local_49 = *(int *)local_a0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_10008b4f0;
      }
      QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
    }
LAB_10008b4f0:
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_49 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_10008b526;
      }
      QArrayData::deallocate(local_a8,2,8);
    }
LAB_10008b526:
    QDir::~QDir((QDir *)&local_98);
    FUN_1000d1330(*(undefined8 *)(param_2 + 0x109c8),local_68);
    QFileInfo::fileName();
    QString::toLatin1();
    if ((1 < *(uint *)local_b0) || (*(long *)(local_b0 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_b0,*(uint *)(local_b0 + 4) + 1,*(uint *)(local_b0 + 8) >> 0x1f)
      ;
    }
    FUN_1008e3970("","vm",0,"Generated new memory file name %s",
                  local_b0 + *(long *)(local_b0 + 0x10));
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_49 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_10008b5f8;
      }
      QArrayData::deallocate(local_b0,1,8);
    }
LAB_10008b5f8:
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        local_49 = *(int *)local_b8 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_10008b62e;
      }
      QArrayData::deallocate(local_b8,2,8);
    }
LAB_10008b62e:
    FUN_1000b1fb0(&local_c0,param_2);
    uVar4 = FUN_1006ddaa0(&local_c0);
    *(undefined1 *)((long)param_1 + 0x35) = uVar4;
    if (*(int *)local_c0 != -1) {
      if (*(int *)local_c0 != 0) {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + -1;
        local_49 = *(int *)local_c0 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_10008b687;
      }
      QArrayData::deallocate(local_c0,2,8);
    }
LAB_10008b687:
    QFileInfo::absoluteFilePath();
    uVar9 = FUN_100545500(&local_c8,param_4,param_5,param_1 + 3,param_1 + 0xd,&local_6c);
    param_1[0xc] = uVar9;
    if (*(int *)local_c8 != -1) {
      if (*(int *)local_c8 != 0) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + -1;
        local_49 = *(int *)local_c8 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_10008b708;
      }
      QArrayData::deallocate(local_c8,2,8);
    }
  }
  else {
    FUN_1000d12c0(local_78,*(undefined8 *)(param_2 + 0x109c8));
    QFileInfo::operator=(local_68,local_78);
    QFileInfo::~QFileInfo(local_78);
    FUN_1000892e0();
    cVar2 = FUN_10008a150(param_1,local_68,param_4,param_5);
    if (cVar2 == '\0') {
      iVar6 = -0x7ffdfffd;
      FUN_1008e3970("","vm",0,"[GuestMem::Init] memory file is corrupted");
      goto LAB_10008b9ab;
    }
    QFileInfo::absoluteFilePath();
    uVar9 = FUN_100545570(&local_80,param_4,param_5,param_1 + 3,param_1 + 0xd,&local_6c);
    param_1[0xc] = uVar9;
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_49 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_10008b708;
      }
      QArrayData::deallocate(local_80,2,8);
    }
  }
LAB_10008b708:
  local_100 = param_1 + 0xc;
  if ((long *)*local_100 == (long *)0x0) {
    FUN_1008e3970("","vm",0,"[GuestMem::Init] failed to create memory model");
    iVar6 = -0x7ffffe78;
    if (local_6c != 4) {
      if (local_6c == 3) {
        iVar6 = -0x7ffffd69;
      }
      else {
        FUN_1008e3970("","vm",0,"[GuestMem::Init] deleting memory image");
        QFileInfo::absoluteFilePath();
        QFile::remove(&local_d0);
        iVar6 = -0x7ffdfffd;
        if (*(int *)local_d0.field0_0x0 != -1) {
          if (*(int *)local_d0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
            local_49 = *(int *)local_d0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_10008b9ab;
          }
          QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
        }
      }
    }
    goto LAB_10008b9ab;
  }
  cVar2 = (**(code **)(*(long *)*local_100 + 0x68))();
  if (((cVar2 == '\0') &&
      (*(undefined4 *)(param_2 + 0xb50) = 0, *(char *)((long)param_1 + 0x31) != '\0')) &&
     (iVar6 = FUN_1007da300("vm.mem_hugepages_required",0), iVar6 != 0)) {
    iVar6 = -0x7ffffe78;
    FUN_1008e3970("","vm",0,"Refuse to continue, since hugepages are required by the system flag");
    goto LAB_10008b9ab;
  }
  if (*(int *)(param_2 + 0xb50) != 0) {
    *(undefined4 *)(param_2 + 0xb84) = 1;
  }
  uVar8 = FUN_1007da300("kernel.lock_all_mem",0);
  bVar5 = (**(code **)(*(long *)*local_100 + 0x60))();
  uVar7 = FUN_1007da300("vm.mem_slow_locking",bVar5 | uVar8 | *(uint *)(param_2 + 0xb84));
  *(undefined4 *)(param_1 + 0x14) = uVar7;
  *param_1 = param_4;
  param_1[1] = param_5;
  param_1[2] = param_5 + param_4;
  uVar9 = param_1[0x1d] - param_1[0x1c];
  if (uVar9 < uVar10) {
    FUN_10008de40(param_1 + 0x1c);
  }
  else if ((uVar10 < uVar9) && (uVar10 = param_1[0x1c] + uVar10, param_1[0x1d] != uVar10)) {
    param_1[0x1d] = uVar10;
  }
  cVar2 = FUN_1006d81f0(1);
  if ((cVar2 == '\0') && (cVar2 = FUN_1008e9140(), cVar2 != '\0')) {
    QFileInfo::absoluteFilePath();
    FUN_1008eb450(&local_d8);
    if (*(int *)local_d8 != -1) {
      if (*(int *)local_d8 != 0) {
        LOCK();
        *(int *)local_d8 = *(int *)local_d8 + -1;
        local_49 = *(int *)local_d8 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_10008b936;
      }
      QArrayData::deallocate(local_d8,2,8);
    }
  }
LAB_10008b936:
  *(byte *)(param_1 + 0x1b) = param_6 ^ 1;
  iVar6 = 0;
  if (1 < DAT_1011b55f8) {
    uVar7 = *(undefined4 *)(param_2 + 0xb50);
    uVar1 = *(undefined4 *)(param_2 + 0xb84);
    uVar4 = (**(code **)(*(long *)*local_100 + 0x60))();
    iVar6 = 0;
    FUN_1008e3970("","vm",2,"[GuestMem::Init] HugePagesEnabled=%u, LockByBlock=%u SlowLocking=%u",
                  uVar7,uVar1,uVar4);
  }
LAB_10008b9ab:
  QFileInfo::~QFileInfo(local_68);
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar6;
}

