
undefined8 FUN_10042e0d0(int *param_1,QString *param_2,uint param_3,int param_4)

{
  long lVar1;
  QArrayData *pQVar2;
  long lVar3;
  undefined4 uVar4;
  ulong uVar5;
  char cVar6;
  int iVar7;
  int *piVar8;
  ssize_t sVar9;
  uint uVar10;
  undefined8 uVar11;
  QArrayData *local_a8;
  QArrayData *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  msghdr local_88;
  undefined1 local_49;
  iovec local_48;
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar11 = 0x80029006;
  local_38 = lVar1;
  if (*param_1 != 10) goto LAB_10042e3ee;
  if (param_4 != 0x89a) {
    cVar6 = QThread::isRunning();
    if (cVar6 != '\0') {
      FUN_1008e3970("","IPCFileOpenClnt",0,"SUOA: Wait for thread completion");
      QThread::wait(DAT_1011cc770);
    }
    uVar5 = DAT_1011cc770;
    *(int **)(DAT_1011cc770 + 0x10) = param_1;
    QString::operator=((QString *)(uVar5 + 0x18),param_2);
    *(uint *)(uVar5 + 0x20) = param_3;
    QThread::start(DAT_1011cc770,7);
    uVar11 = 0;
    goto LAB_10042e3ee;
  }
  uVar11 = 0x80029005;
  if (param_1[4] == -1) goto LAB_10042e3ee;
  local_88.msg_control = (void *)0x0;
  local_88.msg_controllen = 0;
  local_88.msg_flags = 0;
  local_88.msg_iov = (iovec *)0x0;
  local_88.msg_iovlen = 0;
  local_88._28_4_ = 0;
  local_88.msg_name = (void *)0x0;
  local_88._8_8_ = 0;
  local_98 = 0;
  uStack_90 = 0;
  uVar10 = 2;
  if ((param_3 & 3) != 3) {
    uVar10 = (uint)((param_3 & 3) == 2);
  }
  QString::toUtf8();
  if ((1 < *(uint *)local_a0) || (*(long *)(local_a0 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_a0,*(uint *)(local_a0 + 4) + 1,*(uint *)(local_a0 + 8) >> 0x1f);
  }
  iVar7 = _open((char *)(local_a0 + *(long *)(local_a0 + 0x10)),uVar10);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_49 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_10042e1df;
    }
    QArrayData::deallocate(local_a0,1,8);
  }
LAB_10042e1df:
  if (iVar7 < 0) {
    pQVar2 = (QArrayData *)param_2->field0_0x0;
    if (1 < *(int *)pQVar2 + 1U) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + 1;
      local_49 = *(int *)pQVar2 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    lVar3 = *(long *)(local_a8 + 0x10);
    piVar8 = ___error();
    FUN_1008e3970("","IPCFileOpenClnt",0,"SUO: Cant open file %s error %u",local_a8 + lVar3,*piVar8)
    ;
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_49 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_10042e286;
      }
      QArrayData::deallocate(local_a8,1,8);
    }
LAB_10042e286:
    if (*(int *)pQVar2 != -1) {
      if (*(int *)pQVar2 != 0) {
        LOCK();
        *(int *)pQVar2 = *(int *)pQVar2 + -1;
        local_49 = *(int *)pQVar2 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_10042e2bc;
      }
      QArrayData::deallocate(pQVar2,2,8);
    }
  }
LAB_10042e2bc:
  local_48.iov_base = ___error();
  local_48.iov_len = 4;
  local_88.msg_iov = &local_48;
  local_88.msg_iovlen = 1;
  local_88.msg_name = (void *)0x0;
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  local_88.msg_control = (undefined8 *)0x0;
  uVar4 = local_88.msg_flags;
  local_88._40_8_ = local_88._40_8_ & 0xffffffff00000000;
  uVar11 = 0;
  if (-1 < iVar7) {
    local_98 = 0xffff00000010;
    uStack_90 = CONCAT44(iVar7,1);
    local_88.msg_control = &local_98;
    local_88.msg_flags = uVar4;
    local_88.msg_controllen = 0x10;
  }
  do {
    sVar9 = _sendmsg(param_1[4],&local_88,0);
    if (sVar9 == 4) {
      _close(iVar7);
      break;
    }
    piVar8 = ___error();
    if (*piVar8 != 4) {
      uVar11 = 0x80029007;
    }
    piVar8 = ___error();
  } while (*piVar8 == 4);
LAB_10042e3ee:
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar11;
}

