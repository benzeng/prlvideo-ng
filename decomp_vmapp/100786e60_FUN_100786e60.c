
void FUN_100786e60(undefined8 param_1,long param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uid_t uVar4;
  long lVar5;
  long lVar6;
  char *buffer;
  undefined8 uVar7;
  bool bVar8;
  QArrayData *local_578;
  QArrayData *local_570;
  QString local_568;
  QArrayData *local_560;
  QArrayData *local_558;
  QArrayData *local_550;
  undefined8 local_548;
  QString local_540;
  utsname local_538;
  long local_38;
  
  lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar6;
  if (2 < DAT_1011b55f8) {
    FUN_1008e3970("","HostUtils",3,"DiskUnmountCallback: daDisk=%p daDissenter=%p pContext=%p",
                  param_1,param_2,param_3);
  }
  lVar5 = 0;
  if ((param_2 != 0) && (iVar2 = _DADissenterGetStatus(param_2), lVar5 = param_2, iVar2 != 0)) {
    if (iVar2 != -0x725fff9) {
      lVar6 = _DADissenterGetStatusString(param_2);
      if (lVar6 == 0) {
        local_560 = (QArrayData *)QString::fromAscii_helper("<none>",6);
      }
      else {
        FUN_100788b70(&local_560,lVar6);
      }
      local_548 = 0xffffffffffffffff;
      lVar6 = _CFDictionaryGetValue(param_2,&cf_DAProcessID);
      uVar7 = 0xffffffffffffffff;
      if (lVar6 != 0) {
        _CFNumberGetValue(lVar6,4,&local_548);
        uVar7 = local_548;
      }
      local_568.field0_0x0 =
           (QTypedArrayData<unsigned_short> *)
           QString::fromAscii_helper("com.parallels.fake.unknown.process",0x22);
      buffer = operator_new__(0x1000,(nothrow_t *)PTR_nothrow_100ba21c8);
      if (buffer != (char *)0x0) {
        iVar3 = _proc_name((int)uVar7,buffer,0x1000);
        if (0 < iVar3) {
          buffer[0xfff] = '\0';
          _strlen(buffer);
          QString::fromUtf8_helper((char *)&local_540,(int)buffer);
          QString::operator=(&local_568,&local_540);
          if (*(int *)local_540.field0_0x0 == 0) {
LAB_10078718a:
            QArrayData::deallocate((QArrayData *)local_540.field0_0x0,2,8);
          }
          else if (*(int *)local_540.field0_0x0 != -1) {
            LOCK();
            *(int *)local_540.field0_0x0 = *(int *)local_540.field0_0x0 + -1;
            local_538.sysname[0] = *(int *)local_540.field0_0x0 != 0;
            UNLOCK();
            if (!(bool)local_538.sysname[0]) goto LAB_10078718a;
          }
        }
        operator_delete__(buffer);
      }
      QString::toUtf8();
      lVar6 = *(long *)(local_570 + 0x10);
      QString::toUtf8();
      FUN_1008e3970("","HostUtils",0,
                    "DiskUnmountCallback() failed with error \'%s\'(code 0x%08x) [dissented pid = %lld, process %s]  force = 0x%x"
                    ,local_570 + lVar6,iVar2,uVar7,local_578 + *(long *)(local_578 + 0x10),
                    **(uint **)(param_3 + 4) & 2);
      if (*(int *)local_578 != -1) {
        if (*(int *)local_578 != 0) {
          LOCK();
          *(int *)local_578 = *(int *)local_578 + -1;
          local_538.sysname[0] = *(int *)local_578 != 0;
          UNLOCK();
          if ((bool)local_538.sysname[0]) goto LAB_100787259;
        }
        QArrayData::deallocate(local_578,1,8);
      }
LAB_100787259:
      lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
      if (*(int *)local_570 != -1) {
        if (*(int *)local_570 != 0) {
          LOCK();
          *(int *)local_570 = *(int *)local_570 + -1;
          local_538.sysname[0] = *(int *)local_570 != 0;
          UNLOCK();
          if ((bool)local_538.sysname[0]) goto LAB_1007872a0;
        }
        QArrayData::deallocate(local_570,1,8);
      }
LAB_1007872a0:
      uVar1 = **(uint **)(param_3 + 4);
      if ((uVar1 & 2) == 0) {
        uVar4 = _geteuid();
        if (uVar4 != 0) goto LAB_1007873a4;
        if ((**(byte **)(param_3 + 4) & 0x40) != 0) {
          FUN_1008e3970("","HostUtils",0,"Unmount failed after spotlight restart");
          goto LAB_1007873a4;
        }
        iVar2 = QString::compare_helper
                          ((QArrayData *)
                           (local_568.field0_0x0 + *(long *)(local_568.field0_0x0 + 0x10)),
                           *(undefined4 *)(local_568.field0_0x0 + 4),
                           "com.parallels.fake.unknown.process",0xffffffff,1);
        if (((iVar2 != 0) &&
            (iVar2 = QString::compare_helper
                               ((QArrayData *)
                                (local_568.field0_0x0 + *(long *)(local_568.field0_0x0 + 0x10)),
                                *(undefined4 *)(local_568.field0_0x0 + 4),"mds",0xffffffff,1),
            iVar2 != 0)) &&
           (iVar2 = QString::compare_helper
                              ((QArrayData *)
                               (local_568.field0_0x0 + *(long *)(local_568.field0_0x0 + 0x10)),
                               *(undefined4 *)(local_568.field0_0x0 + 4),"mdworker",0xffffffff,1),
           iVar2 != 0)) goto LAB_1007873a4;
        FUN_1008e3970("","HostUtils",0,"Restarting the spotlight and retrying operation");
        _system("/usr/bin/killall mdworker");
        _system("/usr/bin/killall mds");
        **(uint **)(param_3 + 4) = **(uint **)(param_3 + 4) | 0x40;
        _DADiskUnmount(*(undefined8 *)(param_3 + 6),*param_3,*(undefined8 *)(param_3 + 2),param_3);
      }
      else {
        **(uint **)(param_3 + 4) = uVar1 | 1;
LAB_1007873a4:
        uVar7 = _CFRunLoopGetCurrent();
        _CFRunLoopStop(uVar7);
      }
      if (*(int *)local_568.field0_0x0 != -1) {
        if (*(int *)local_568.field0_0x0 != 0) {
          LOCK();
          *(int *)local_568.field0_0x0 = *(int *)local_568.field0_0x0 + -1;
          local_538.sysname[0] = *(int *)local_568.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_538.sysname[0]) goto LAB_1007873ed;
        }
        QArrayData::deallocate((QArrayData *)local_568.field0_0x0,2,8);
      }
LAB_1007873ed:
      if (*(int *)local_560 != -1) {
        if (*(int *)local_560 != 0) {
          LOCK();
          *(int *)local_560 = *(int *)local_560 + -1;
          local_538.sysname[0] = *(int *)local_560 != 0;
          UNLOCK();
          if ((bool)local_538.sysname[0]) goto LAB_10078706c;
        }
        QArrayData::deallocate(local_560,2,8);
      }
      goto LAB_10078706c;
    }
    lVar5 = _DADissenterGetStatusString(param_2);
    if (lVar5 == 0) {
      local_550 = (QArrayData *)QString::fromAscii_helper("<none>",6);
    }
    else {
      FUN_100788b70(&local_550,lVar5);
    }
    QString::toUtf8();
    FUN_1008e3970("","HostUtils",0,"DiskUnmountCallback(): already not mounted, StatusString \'%s\'"
                  ,local_558 + *(long *)(local_558 + 0x10));
    if (*(int *)local_558 != -1) {
      if (*(int *)local_558 != 0) {
        LOCK();
        *(int *)local_558 = *(int *)local_558 + -1;
        local_538.sysname[0] = *(int *)local_558 != 0;
        UNLOCK();
        if ((bool)local_538.sysname[0]) goto LAB_100786fc3;
      }
      QArrayData::deallocate(local_558,1,8);
    }
LAB_100786fc3:
    lVar5 = 0;
    if (*(int *)local_550 != -1) {
      if (*(int *)local_550 != 0) {
        LOCK();
        *(int *)local_550 = *(int *)local_550 + -1;
        local_538.sysname[0] = *(int *)local_550 != 0;
        UNLOCK();
        lVar5 = 0;
        if ((bool)local_538.sysname[0]) goto LAB_100787008;
      }
      QArrayData::deallocate(local_550,2,8);
      lVar5 = 0;
    }
  }
LAB_100787008:
  uVar1 = **(uint **)(param_3 + 4);
  iVar2 = _uname(&local_538);
  if (iVar2 < 0) {
    bVar8 = false;
  }
  else {
    iVar2 = _memcmp(local_538.release,"10.",3);
    bVar8 = iVar2 == 0;
  }
  if (((uVar1 & 8) == 0) || (bVar8)) {
    FUN_1007876c0(param_1,lVar5,param_3);
  }
  else {
    _DADiskEject(param_1,0,FUN_1007876c0,param_3);
  }
LAB_10078706c:
  if (lVar6 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

