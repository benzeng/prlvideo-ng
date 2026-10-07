
void FUN_100109fa0(long param_1,long *param_2)

{
  byte *pbVar1;
  long lVar2;
  char *pcVar3;
  size_t sVar4;
  ulong uVar5;
  QArrayData *local_460;
  QArrayData *local_458;
  QArrayData *local_450;
  QArrayData *local_448;
  char local_438 [1024];
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  pbVar1 = (byte *)(param_1 + 0x40);
  local_38 = lVar2;
  pcVar3 = _getenv("PRL_VM_CVSRC_DIR");
  if (((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) &&
     ((pcVar3 = _getenv("TMPDIR"), pcVar3 == (char *)0x0 || (*pcVar3 == '\0')))) {
    sVar4 = _confstr(0x10001,local_438,0x400);
    if ((((int)(uint)sVar4 < 1) || (0x400 < (uint)sVar4)) || (local_438[0] == '\0')) {
      QDir::tempPath();
      QString::toUtf8();
      std::string::assign((char *)pbVar1);
      if (*(int *)local_448 != -1) {
        if (*(int *)local_448 != 0) {
          LOCK();
          *(int *)local_448 = *(int *)local_448 + -1;
          UNLOCK();
          if (*(int *)local_448 != 0) goto LAB_10010a0b8;
        }
        QArrayData::deallocate(local_448,1,8);
      }
LAB_10010a0b8:
      if (*(int *)local_450 != -1) {
        if (*(int *)local_450 != 0) {
          LOCK();
          *(int *)local_450 = *(int *)local_450 + -1;
          UNLOCK();
          if (*(int *)local_450 != 0) goto LAB_10010a0f4;
        }
        QArrayData::deallocate(local_450,2,8);
      }
    }
    else {
      std::string::assign((char *)pbVar1);
    }
  }
  else {
    std::string::assign((char *)pbVar1);
  }
LAB_10010a0f4:
  if ((*pbVar1 & 1) == 0) {
    param_1 = param_1 + 0x41;
    uVar5 = (ulong)(*pbVar1 >> 1);
  }
  else {
    uVar5 = *(ulong *)(param_1 + 0x48);
    param_1 = *(long *)(param_1 + 0x50);
  }
  if (*(char *)((uVar5 - 1) + param_1) != '/') {
    std::string::push_back((char)pbVar1);
  }
  std::string::append((char *)pbVar1);
  (**(code **)(*param_2 + 0x10))(param_2);
  QString::toUtf8();
  FUN_10010a360(pbVar1,local_458 + *(long *)(local_458 + 0x10));
  if (*(int *)local_458 != -1) {
    if (*(int *)local_458 != 0) {
      LOCK();
      *(int *)local_458 = *(int *)local_458 + -1;
      UNLOCK();
      if (*(int *)local_458 != 0) goto LAB_10010a199;
    }
    QArrayData::deallocate(local_458,1,8);
  }
LAB_10010a199:
  std::string::append((char *)pbVar1);
  (**(code **)(*param_2 + 0x18))(param_2);
  QString::toUtf8();
  FUN_10010a360(pbVar1,local_460 + *(long *)(local_460 + 0x10));
  if (*(int *)local_460 != -1) {
    if (*(int *)local_460 != 0) {
      LOCK();
      *(int *)local_460 = *(int *)local_460 + -1;
      UNLOCK();
      if (*(int *)local_460 != 0) goto LAB_10010a20f;
    }
    QArrayData::deallocate(local_460,1,8);
  }
LAB_10010a20f:
  if (lVar2 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

