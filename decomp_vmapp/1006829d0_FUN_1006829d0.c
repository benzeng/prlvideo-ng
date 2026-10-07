
undefined8 FUN_1006829d0(void)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  long lVar6;
  undefined8 uVar7;
  QArrayData *local_630;
  QArrayData *local_628;
  QArrayData *local_620;
  QArrayData *local_618;
  QString local_610;
  QArrayData *local_608;
  QString local_600;
  QArrayData *local_5f8;
  QArrayData *local_5f0;
  QRegExp local_5e8 [8];
  QString local_5e0;
  undefined1 local_5d8 [96];
  undefined8 local_578;
  QString local_548;
  undefined1 local_539;
  utsname local_538;
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_5e0.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  local_38 = lVar2;
  iVar3 = _uname(&local_538);
  if (iVar3 == 0) {
    local_5f0 = (QArrayData *)QString::fromAscii_helper("xnu-[^/]+/([^_]+)",0x11);
    QRegExp::QRegExp(local_5e8,&local_5f0,1,0);
    if (*(int *)local_5f0 != -1) {
      if (*(int *)local_5f0 != 0) {
        LOCK();
        *(int *)local_5f0 = *(int *)local_5f0 + -1;
        local_539 = *(int *)local_5f0 != 0;
        UNLOCK();
        if ((bool)local_539) goto LAB_100682aa5;
      }
      QArrayData::deallocate(local_5f0,2,8);
    }
LAB_100682aa5:
    pcVar1 = local_538.version;
    sVar5 = _strlen(pcVar1);
    local_5f8 = (QArrayData *)QString::fromAscii_helper(pcVar1,(int)sVar5);
    iVar3 = QRegExp::indexIn(local_5e8,&local_5f8,0,0);
    if (*(int *)local_5f8 != -1) {
      if (*(int *)local_5f8 != 0) {
        LOCK();
        *(int *)local_5f8 = *(int *)local_5f8 + -1;
        local_539 = *(int *)local_5f8 != 0;
        UNLOCK();
        if ((bool)local_539) goto LAB_100682b1a;
      }
      QArrayData::deallocate(local_5f8,2,8);
    }
LAB_100682b1a:
    if (iVar3 < 0) {
      FUN_1008e3970("","ioctl",0,"failed to determine the system version (uname -v = \'%s\')!",
                    pcVar1);
    }
    else {
      QRegExp::cap((int)&local_608);
      QString::toLower();
      QString::operator=(&local_5e0,&local_600);
      if (*(int *)local_600.field0_0x0 != -1) {
        if (*(int *)local_600.field0_0x0 != 0) {
          LOCK();
          *(int *)local_600.field0_0x0 = *(int *)local_600.field0_0x0 + -1;
          local_539 = *(int *)local_600.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_539) goto LAB_100682b9c;
        }
        QArrayData::deallocate((QArrayData *)local_600.field0_0x0,2,8);
      }
LAB_100682b9c:
      if (*(int *)local_608 != -1) {
        if (*(int *)local_608 != 0) {
          LOCK();
          *(int *)local_608 = *(int *)local_608 + -1;
          local_539 = *(int *)local_608 != 0;
          UNLOCK();
          if ((bool)local_539) goto LAB_100682bd8;
        }
        QArrayData::deallocate(local_608,2,8);
      }
LAB_100682bd8:
      iVar3 = QString::compare_helper
                        ((QArrayData *)
                         (local_5e0.field0_0x0 + *(long *)(local_5e0.field0_0x0 + 0x10)),
                         *(undefined4 *)(local_5e0.field0_0x0 + 4),"release",0xffffffff,1);
      if (iVar3 == 0) {
        QString::fromUtf8_helper((char *)&local_548,0xa320a0);
        QString::operator=(&local_5e0,&local_548);
        if (*(int *)local_548.field0_0x0 != -1) {
          if (*(int *)local_548.field0_0x0 != 0) {
            LOCK();
            *(int *)local_548.field0_0x0 = *(int *)local_548.field0_0x0 + -1;
            local_539 = *(int *)local_548.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_539) goto LAB_100682d61;
          }
          QArrayData::deallocate((QArrayData *)local_548.field0_0x0,2,8);
        }
      }
      else {
        local_618 = (QArrayData *)QString::fromAscii_helper(".%1",3);
        QString::arg(&local_610,&local_618,&local_5e0,0,0x20);
        QString::operator=(&local_5e0,&local_610);
        if (*(int *)local_610.field0_0x0 != -1) {
          if (*(int *)local_610.field0_0x0 != 0) {
            LOCK();
            *(int *)local_610.field0_0x0 = *(int *)local_610.field0_0x0 + -1;
            local_539 = *(int *)local_610.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_539) goto LAB_100682c91;
          }
          QArrayData::deallocate((QArrayData *)local_610.field0_0x0,2,8);
        }
LAB_100682c91:
        if (*(int *)local_618 != -1) {
          if (*(int *)local_618 != 0) {
            LOCK();
            *(int *)local_618 = *(int *)local_618 + -1;
            local_539 = *(int *)local_618 != 0;
            UNLOCK();
            if ((bool)local_539) goto LAB_100682d61;
          }
          QArrayData::deallocate(local_618,2,8);
        }
      }
    }
LAB_100682d61:
    QRegExp::~QRegExp(local_5e8);
  }
  else {
    FUN_1008e3970("","ioctl",0,"Failed to determine the kernel boot arguments!");
  }
  local_630 = (QArrayData *)QString::fromAscii_helper("/System/Library/Kernels/kernel%1",0x20);
  QString::arg(&local_628,&local_630,&local_5e0,0,0x20);
  QString::toLocal8Bit();
  iVar3 = _open((char *)(local_620 + *(long *)(local_620 + 0x10)),0);
  if (*(int *)local_620 != -1) {
    if (*(int *)local_620 != 0) {
      LOCK();
      *(int *)local_620 = *(int *)local_620 + -1;
      local_539 = *(int *)local_620 != 0;
      UNLOCK();
      if ((bool)local_539) goto LAB_100682e0d;
    }
    QArrayData::deallocate(local_620,1,8);
  }
LAB_100682e0d:
  if (*(int *)local_628 != -1) {
    if (*(int *)local_628 != 0) {
      LOCK();
      *(int *)local_628 = *(int *)local_628 + -1;
      local_539 = *(int *)local_628 != 0;
      UNLOCK();
      if ((bool)local_539) goto LAB_100682e49;
    }
    QArrayData::deallocate(local_628,2,8);
  }
LAB_100682e49:
  if (*(int *)local_630 != -1) {
    if (*(int *)local_630 != 0) {
      LOCK();
      *(int *)local_630 = *(int *)local_630 + -1;
      local_539 = *(int *)local_630 != 0;
      UNLOCK();
      if ((bool)local_539) goto LAB_100682e85;
    }
    QArrayData::deallocate(local_630,2,8);
  }
LAB_100682e85:
  if ((iVar3 < 0) && (iVar3 = _open("/System/Library/Kernels/kernel",0), iVar3 < 0)) {
    iVar3 = _open("/mach_kernel",0);
    uVar7 = 0;
    if (-1 < iVar3) goto LAB_100682ebc;
  }
  else {
LAB_100682ebc:
    iVar4 = _fstat_INODE64(iVar3,local_5d8);
    uVar7 = 0;
    if (iVar4 == 0) {
      lVar6 = _mmap(0,local_578,1,1,iVar3,0);
      uVar7 = 0;
      if (lVar6 != -1) {
        uVar7 = FUN_100682880();
        _munmap(lVar6,local_578);
        _close(iVar3);
      }
    }
  }
  if (*(int *)local_5e0.field0_0x0 != -1) {
    if (*(int *)local_5e0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_5e0.field0_0x0 = *(int *)local_5e0.field0_0x0 + -1;
      local_538.sysname[0] = *(int *)local_5e0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_538.sysname[0]) goto LAB_100682f5b;
    }
    QArrayData::deallocate((QArrayData *)local_5e0.field0_0x0,2,8);
  }
LAB_100682f5b:
  if (lVar2 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7;
}

