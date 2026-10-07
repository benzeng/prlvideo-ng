
undefined8 FUN_10042e4e0(int *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ssize_t sVar6;
  int *piVar7;
  QArrayData *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  msghdr local_98;
  undefined4 local_5c;
  QString local_58;
  undefined1 local_49;
  iovec local_48;
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar5 = 0x80000018;
  local_38 = lVar2;
  if ((param_4 == (undefined4 *)0x0) || (uVar5 = 0x80029006, *param_1 != 0xb)) goto LAB_10042e762;
  local_5c = 0;
  FUN_10042e810(param_1);
  iVar1 = param_1[4];
  iVar3 = _accept(iVar1,(sockaddr *)0x0,(socklen_t *)0x0);
  param_1[4] = iVar3;
  if (iVar3 < 0) {
    uVar4 = FUN_100768f60();
    FUN_1008e3970("","IPCFileOpenClnt",0,"accept() failed. Error %d",uVar4);
    FUN_10042d6a0(param_1);
    uVar5 = 0x80029003;
    goto LAB_10042e762;
  }
  _close(iVar1);
  if (*(int *)(*(long *)(param_1 + 2) + 4) != 0) {
    QString::toUtf8();
    if ((1 < *(uint *)local_b0) || (*(long *)(local_b0 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_b0,*(uint *)(local_b0 + 4) + 1,*(uint *)(local_b0 + 8) >> 0x1f)
      ;
    }
    _remove((char *)(local_b0 + *(long *)(local_b0 + 0x10)));
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_49 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_10042e5e9;
      }
      QArrayData::deallocate(local_b0,1,8);
    }
  }
LAB_10042e5e9:
  if (((QString *)(param_1 + 2))->field0_0x0 !=
      (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0) {
    local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
    QString::operator=((QString *)(param_1 + 2),&local_58);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_49 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_10042e63c;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
  }
LAB_10042e63c:
  local_a8 = 0;
  uStack_a0 = 0;
  local_48.iov_base = &local_5c;
  local_48.iov_len = 4;
  local_98.msg_iov = &local_48;
  local_98.msg_iovlen = 1;
  local_98._28_4_ = 0;
  local_98.msg_name = (void *)0x0;
  local_98.msg_namelen = 0;
  local_98._12_4_ = 0;
  local_98.msg_control = &local_a8;
  local_98.msg_controllen = 0x10;
  local_98.msg_flags = 0x40;
  sVar6 = _recvmsg(param_1[4],&local_98,0);
  if (sVar6 == 0) {
    piVar7 = ___error();
    FUN_1008e3970("","IPCFileOpenClnt",0,"SUO: Error at receive message %u",*piVar7);
    uVar5 = 0x80029008;
  }
  else if (local_98.msg_controllen == 0x10) {
    *param_4 = uStack_a0._4_4_;
    uVar5 = 0;
  }
  else {
    *param_4 = 0xffffffff;
    FUN_1008e3970("","IPCFileOpenClnt",0,"SUO: Error at other side %u",local_5c);
    uVar5 = 0x80000016;
  }
LAB_10042e762:
  if (lVar2 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

