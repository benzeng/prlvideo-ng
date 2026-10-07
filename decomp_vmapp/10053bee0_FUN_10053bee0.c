
undefined1 FUN_10053bee0(void)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  pid_t pVar4;
  uid_t uVar5;
  gid_t gVar6;
  QArrayData *pQVar7;
  int *piVar8;
  char *pcVar9;
  uint in_ECX;
  undefined1 uVar10;
  int *in_R8;
  int *in_R9;
  long lVar11;
  QArrayData *local_1e8;
  QString local_1e0;
  QArrayData *local_1d8;
  QArrayData *local_1d0;
  QString local_1c8;
  QArrayData *local_1c0;
  QString local_1b8;
  QArrayData *local_1b0;
  QArrayData *local_1a8;
  QString local_1a0;
  QArrayData *local_198;
  QArrayData *local_190;
  QString local_188;
  QArrayData *local_180;
  QArrayData *local_178;
  QString local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  undefined1 local_149;
  QArrayData *local_148 [4];
  QArrayData *local_128;
  QArrayData *local_120;
  char *local_118;
  QArrayData *local_110;
  char *local_108;
  QArrayData *local_100 [24];
  int local_40;
  int local_3c;
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  *in_R8 = 0;
  *in_R9 = -1;
  local_38 = lVar1;
  iVar3 = _socketpair(1,1,0,&local_40);
  if (iVar3 == -1) {
    piVar8 = ___error();
    pcVar9 = _strerror(*piVar8);
    uVar10 = 0;
    FUN_1008e3970("","InvSharingHost",0,"socketpair() failed: %s",pcVar9);
    goto LAB_10053c98c;
  }
  *in_R9 = local_40;
  QString::toUtf8();
  local_148[0] = local_158 + *(long *)(local_158 + 0x10);
  QString::toUtf8();
  local_148[1] = local_160 + *(long *)(local_160 + 0x10);
  pQVar7 = (QArrayData *)QString::fromAscii_helper("-prl_sock=",10);
  puVar2 = PTR_shared_null_100ba20d0;
  local_178 = (QArrayData *)PTR_shared_null_100ba20d0;
  QString::setNum((longlong)&local_178,local_3c);
  if (1 < *(int *)pQVar7 + 1U) {
    LOCK();
    *(int *)pQVar7 = *(int *)pQVar7 + 1;
    local_149 = *(int *)pQVar7 != 0;
    UNLOCK();
  }
  local_170.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar7;
  QString::append(&local_170);
  QString::toUtf8();
  if (*(int *)local_170.field0_0x0 != -1) {
    if (*(int *)local_170.field0_0x0 != 0) {
      LOCK();
      *(int *)local_170.field0_0x0 = *(int *)local_170.field0_0x0 + -1;
      local_149 = *(int *)local_170.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_149) goto LAB_10053c047;
    }
    QArrayData::deallocate((QArrayData *)local_170.field0_0x0,2,8);
  }
LAB_10053c047:
  if (*(int *)local_178 != -1) {
    if (*(int *)local_178 != 0) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + -1;
      local_149 = *(int *)local_178 != 0;
      UNLOCK();
      if ((bool)local_149) goto LAB_10053c083;
    }
    QArrayData::deallocate(local_178,2,8);
  }
LAB_10053c083:
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_149 = *(int *)pQVar7 != 0;
      UNLOCK();
      if ((bool)local_149) goto LAB_10053c0b4;
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_10053c0b4:
  local_148[2] = local_168 + *(long *)(local_168 + 0x10);
  pQVar7 = (QArrayData *)QString::fromAscii_helper("-prl_listen_pid=",0x10);
  local_190 = (QArrayData *)puVar2;
  pVar4 = _getpid();
  QString::setNum((longlong)&local_190,pVar4);
  if (1 < *(int *)pQVar7 + 1U) {
    LOCK();
    *(int *)pQVar7 = *(int *)pQVar7 + 1;
    local_149 = *(int *)pQVar7 != 0;
    UNLOCK();
  }
  local_188.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar7;
  QString::append(&local_188);
  QString::toUtf8();
  if (*(int *)local_188.field0_0x0 != -1) {
    if (*(int *)local_188.field0_0x0 != 0) {
      LOCK();
      *(int *)local_188.field0_0x0 = *(int *)local_188.field0_0x0 + -1;
      local_149 = *(int *)local_188.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_149) goto LAB_10053c173;
    }
    QArrayData::deallocate((QArrayData *)local_188.field0_0x0,2,8);
  }
LAB_10053c173:
  if (*(int *)local_190 != -1) {
    if (*(int *)local_190 != 0) {
      LOCK();
      *(int *)local_190 = *(int *)local_190 + -1;
      local_149 = *(int *)local_190 != 0;
      UNLOCK();
      if ((bool)local_149) goto LAB_10053c1af;
    }
    QArrayData::deallocate(local_190,2,8);
  }
LAB_10053c1af:
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_149 = *(int *)pQVar7 != 0;
      UNLOCK();
      if ((bool)local_149) goto LAB_10053c1e0;
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_10053c1e0:
  local_148[3] = local_180 + *(long *)(local_180 + 0x10);
  pQVar7 = (QArrayData *)QString::fromAscii_helper("-ouid=",6);
  local_1a8 = (QArrayData *)puVar2;
  uVar5 = _getuid();
  QString::setNum((ulonglong)&local_1a8,uVar5);
  if (1 < *(int *)pQVar7 + 1U) {
    LOCK();
    *(int *)pQVar7 = *(int *)pQVar7 + 1;
    local_149 = *(int *)pQVar7 != 0;
    UNLOCK();
  }
  local_1a0.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar7;
  QString::append(&local_1a0);
  QString::toUtf8();
  if (*(int *)local_1a0.field0_0x0 != -1) {
    if (*(int *)local_1a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1a0.field0_0x0 = *(int *)local_1a0.field0_0x0 + -1;
      local_149 = *(int *)local_1a0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_149) goto LAB_10053c29e;
    }
    QArrayData::deallocate((QArrayData *)local_1a0.field0_0x0,2,8);
  }
LAB_10053c29e:
  if (*(int *)local_1a8 != -1) {
    if (*(int *)local_1a8 != 0) {
      LOCK();
      *(int *)local_1a8 = *(int *)local_1a8 + -1;
      local_149 = *(int *)local_1a8 != 0;
      UNLOCK();
      if ((bool)local_149) goto LAB_10053c2da;
    }
    QArrayData::deallocate(local_1a8,2,8);
  }
LAB_10053c2da:
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_149 = *(int *)pQVar7 != 0;
      UNLOCK();
      if ((bool)local_149) goto LAB_10053c30b;
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_10053c30b:
  local_128 = local_198 + *(long *)(local_198 + 0x10);
  pQVar7 = (QArrayData *)QString::fromAscii_helper("-ogid=",6);
  local_1c0 = (QArrayData *)puVar2;
  gVar6 = _getgid();
  QString::setNum((ulonglong)&local_1c0,gVar6);
  if (1 < *(int *)pQVar7 + 1U) {
    LOCK();
    *(int *)pQVar7 = *(int *)pQVar7 + 1;
    local_149 = *(int *)pQVar7 != 0;
    UNLOCK();
  }
  local_1b8.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar7;
  QString::append(&local_1b8);
  QString::toUtf8();
  if (*(int *)local_1b8.field0_0x0 != -1) {
    if (*(int *)local_1b8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1b8.field0_0x0 = *(int *)local_1b8.field0_0x0 + -1;
      local_149 = *(int *)local_1b8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_149) goto LAB_10053c3c9;
    }
    QArrayData::deallocate((QArrayData *)local_1b8.field0_0x0,2,8);
  }
LAB_10053c3c9:
  if (*(int *)local_1c0 != -1) {
    if (*(int *)local_1c0 != 0) {
      LOCK();
      *(int *)local_1c0 = *(int *)local_1c0 + -1;
      local_149 = *(int *)local_1c0 != 0;
      UNLOCK();
      if ((bool)local_149) goto LAB_10053c405;
    }
    QArrayData::deallocate(local_1c0,2,8);
  }
LAB_10053c405:
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_149 = *(int *)pQVar7 != 0;
      UNLOCK();
      if ((bool)local_149) goto LAB_10053c436;
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_10053c436:
  local_120 = local_1b0 + *(long *)(local_1b0 + 0x10);
  local_118 = "-okill_on_unmount,auto_cache";
  pQVar7 = (QArrayData *)QString::fromAscii_helper("-ovolname=",10);
  if (1 < *(int *)pQVar7 + 1U) {
    LOCK();
    *(int *)pQVar7 = *(int *)pQVar7 + 1;
    local_149 = *(int *)pQVar7 != 0;
    UNLOCK();
  }
  local_1c8.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar7;
  QString::append(&local_1c8);
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_149 = *(int *)pQVar7 != 0;
      UNLOCK();
      if ((bool)local_149) goto LAB_10053c4c9;
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_10053c4c9:
  QString::replace(&local_1c8,0x2c,0x2e,1);
  QString::toUtf8();
  local_110 = local_1d0 + *(long *)(local_1d0 + 0x10);
  local_108 = "-onobrowse";
  lVar11 = 9;
  if ((in_ECX & 4) != 0) {
    local_100[0] = (QArrayData *)0x100a3d804;
    lVar11 = 10;
  }
  iVar3 = (int)lVar11;
  if ((in_ECX & 2) != 0) {
    iVar3 = iVar3 + 1;
    local_148[lVar11] = (QArrayData *)"-oshow_on_desktop";
  }
  if ((in_ECX & 1) != 0) {
    lVar11 = (long)iVar3;
    iVar3 = iVar3 + 1;
    local_148[lVar11] = (QArrayData *)"-oallow_other";
  }
  if ((in_ECX & 8) == 0) {
    lVar11 = (long)iVar3;
    iVar3 = iVar3 + 1;
    local_148[lVar11] = (QArrayData *)"-onoexec";
  }
  pQVar7 = (QArrayData *)QString::fromAscii_helper("-ofsname=vfstool#vm-pid",0x17);
  local_1e8 = (QArrayData *)puVar2;
  pVar4 = _getpid();
  QString::setNum((longlong)&local_1e8,pVar4);
  if (1 < *(int *)pQVar7 + 1U) {
    LOCK();
    *(int *)pQVar7 = *(int *)pQVar7 + 1;
    local_149 = *(int *)pQVar7 != 0;
    UNLOCK();
  }
  local_1e0.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar7;
  QString::append(&local_1e0);
  QString::toUtf8();
  if (*(int *)local_1e0.field0_0x0 != -1) {
    if (*(int *)local_1e0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1e0.field0_0x0 = *(int *)local_1e0.field0_0x0 + -1;
      local_149 = *(int *)local_1e0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_149) goto LAB_10053c638;
    }
    QArrayData::deallocate((QArrayData *)local_1e0.field0_0x0,2,8);
  }
LAB_10053c638:
  if (*(int *)local_1e8 != -1) {
    if (*(int *)local_1e8 != 0) {
      LOCK();
      *(int *)local_1e8 = *(int *)local_1e8 + -1;
      local_149 = *(int *)local_1e8 != 0;
      UNLOCK();
      if ((bool)local_149) goto LAB_10053c674;
    }
    QArrayData::deallocate(local_1e8,2,8);
  }
LAB_10053c674:
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_149 = *(int *)pQVar7 != 0;
      UNLOCK();
      if ((bool)local_149) goto LAB_10053c6a5;
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_10053c6a5:
  local_148[iVar3] = local_1d8 + *(long *)(local_1d8 + 0x10);
  local_148[iVar3 + 1] = (QArrayData *)"-f";
  local_148[iVar3 + 2] = (QArrayData *)"-s";
  local_148[iVar3 + 3] = (QArrayData *)0x0;
  iVar3 = FUN_10053e030(local_148,local_3c);
  *in_R8 = iVar3;
  if (*(int *)local_1d8 != -1) {
    if (*(int *)local_1d8 != 0) {
      LOCK();
      *(int *)local_1d8 = *(int *)local_1d8 + -1;
      local_149 = *(int *)local_1d8 != 0;
      UNLOCK();
      if ((bool)local_149) goto LAB_10053c74a;
    }
    QArrayData::deallocate(local_1d8,1,8);
  }
LAB_10053c74a:
  if (*(int *)local_1d0 != -1) {
    if (*(int *)local_1d0 != 0) {
      LOCK();
      *(int *)local_1d0 = *(int *)local_1d0 + -1;
      local_149 = *(int *)local_1d0 != 0;
      UNLOCK();
      if ((bool)local_149) goto LAB_10053c789;
    }
    QArrayData::deallocate(local_1d0,1,8);
  }
LAB_10053c789:
  if (*(int *)local_1c8.field0_0x0 != -1) {
    if (*(int *)local_1c8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1c8.field0_0x0 = *(int *)local_1c8.field0_0x0 + -1;
      local_149 = *(int *)local_1c8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_149) goto LAB_10053c7c5;
    }
    QArrayData::deallocate((QArrayData *)local_1c8.field0_0x0,2,8);
  }
LAB_10053c7c5:
  if (*(int *)local_1b0 != -1) {
    if (*(int *)local_1b0 != 0) {
      LOCK();
      *(int *)local_1b0 = *(int *)local_1b0 + -1;
      local_149 = *(int *)local_1b0 != 0;
      UNLOCK();
      if ((bool)local_149) goto LAB_10053c801;
    }
    QArrayData::deallocate(local_1b0,1,8);
  }
LAB_10053c801:
  if (*(int *)local_198 != -1) {
    if (*(int *)local_198 != 0) {
      LOCK();
      *(int *)local_198 = *(int *)local_198 + -1;
      local_149 = *(int *)local_198 != 0;
      UNLOCK();
      if ((bool)local_149) goto LAB_10053c83d;
    }
    QArrayData::deallocate(local_198,1,8);
  }
LAB_10053c83d:
  if (*(int *)local_180 != -1) {
    if (*(int *)local_180 != 0) {
      LOCK();
      *(int *)local_180 = *(int *)local_180 + -1;
      local_149 = *(int *)local_180 != 0;
      UNLOCK();
      if ((bool)local_149) goto LAB_10053c879;
    }
    QArrayData::deallocate(local_180,1,8);
  }
LAB_10053c879:
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_149 = *(int *)local_168 != 0;
      UNLOCK();
      if ((bool)local_149) goto LAB_10053c8b5;
    }
    QArrayData::deallocate(local_168,1,8);
  }
LAB_10053c8b5:
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      local_149 = *(int *)local_160 != 0;
      UNLOCK();
      if ((bool)local_149) goto LAB_10053c8f1;
    }
    QArrayData::deallocate(local_160,1,8);
  }
LAB_10053c8f1:
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_149 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_149) goto LAB_10053c92d;
    }
    QArrayData::deallocate(local_158,1,8);
  }
LAB_10053c92d:
  _close(local_3c);
  uVar10 = 1;
  if (*in_R8 == 0) {
    _close(*in_R9);
    *in_R9 = -1;
    uVar10 = 0;
  }
LAB_10053c98c:
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar10;
}

