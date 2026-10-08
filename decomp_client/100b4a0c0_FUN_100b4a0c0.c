
undefined8 FUN_100b4a0c0(void)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  bool bVar6;
  QArrayData *local_78;
  char local_68 [16];
  ulong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_30 = lVar1;
  QString::toLatin1();
  lVar2 = *(long *)(local_78 + 0x10);
  iVar3 = _socket(2,2,0);
  if (iVar3 < 0) {
    bVar6 = false;
    FUN_100df99c0("","prl_net",0,"[prl_networking] Failed to open control socket");
  }
  else {
    local_58 = 0;
    uStack_50 = 0;
    local_68[0] = '\0';
    local_68[1] = '\0';
    local_68[2] = '\0';
    local_68[3] = '\0';
    local_68[4] = '\0';
    local_68[5] = '\0';
    local_68[6] = '\0';
    local_68[7] = '\0';
    local_68[8] = '\0';
    local_68[9] = '\0';
    local_68[10] = '\0';
    local_68[0xb] = '\0';
    local_68[0xc] = '\0';
    local_68[0xd] = '\0';
    local_68[0xe] = '\0';
    local_68[0xf] = '\0';
    local_40 = 0;
    local_48 = 0;
    _strcpy(local_68,(char *)(local_78 + lVar2));
    iVar4 = _ioctl(iVar3,0xc02c6938,local_68);
    bVar6 = -1 < iVar4;
    _close(iVar3);
  }
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      UNLOCK();
      if (*(int *)local_78 != 0) goto LAB_100b4a1a6;
    }
    QArrayData::deallocate(local_78,1,8);
  }
LAB_100b4a1a6:
  if ((!bVar6) || (uVar5 = 1, (local_58 & 0x80) == 0)) {
    uVar5 = 0;
  }
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

