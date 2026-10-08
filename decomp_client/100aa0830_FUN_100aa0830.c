
undefined1 FUN_100aa0830(int param_1,undefined8 param_2,undefined8 param_3,QString *param_4)

{
  long lVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  size_t sVar6;
  QArrayData *local_1e0;
  QString local_1d8;
  socklen_t local_1cc;
  QString local_1c8;
  undefined1 local_1b9;
  sockaddr local_1b8;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 local_138 [264];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_1b8.sa_len = '\0';
  local_1b8.sa_family = '\0';
  local_1b8.sa_data[0] = '\0';
  local_1b8.sa_data[1] = '\0';
  local_1b8.sa_data[2] = '\0';
  local_1b8.sa_data[3] = '\0';
  local_1b8.sa_data[4] = '\0';
  local_1b8.sa_data[5] = '\0';
  local_1b8.sa_data[6] = '\0';
  local_1b8.sa_data[7] = '\0';
  local_1b8.sa_data[8] = '\0';
  local_1b8.sa_data[9] = '\0';
  local_1b8.sa_data[10] = '\0';
  local_1b8.sa_data[0xb] = '\0';
  local_1b8.sa_data[0xc] = '\0';
  local_1b8.sa_data[0xd] = '\0';
  local_1cc = 0x80;
  local_30 = lVar1;
  iVar3 = _getpeername(param_1,&local_1b8,&local_1cc);
  if (-1 < iVar3) {
    uVar2 = FUN_100a9ffd0(&local_1b8,local_1cc,param_2,param_3,param_4);
    goto LAB_100aa0a2c;
  }
  piVar4 = ___error();
  iVar3 = *piVar4;
  QString::fromUtf8_helper((char *)&local_1c8,0x1e40e15);
  QString::operator=(param_4,&local_1c8);
  if (*(int *)local_1c8.field0_0x0 != -1) {
    if (*(int *)local_1c8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1c8.field0_0x0 = *(int *)local_1c8.field0_0x0 + -1;
      local_1b9 = *(int *)local_1c8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_1b9) goto LAB_100aa0942;
    }
    QArrayData::deallocate((QArrayData *)local_1c8.field0_0x0,2,8);
  }
LAB_100aa0942:
  pcVar5 = (char *)FUN_100a9fcf0(iVar3,local_138,0x100);
  iVar3 = -1;
  if (pcVar5 != (char *)0x0) {
    sVar6 = _strlen(pcVar5);
    iVar3 = (int)sVar6;
  }
  local_1e0 = (QArrayData *)QString::fromAscii_helper(pcVar5,iVar3);
  QString::arg(&local_1d8,param_4,&local_1e0,0,0x20);
  QString::operator=(param_4,&local_1d8);
  if (*(int *)local_1d8.field0_0x0 != -1) {
    if (*(int *)local_1d8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1d8.field0_0x0 = *(int *)local_1d8.field0_0x0 + -1;
      local_1b9 = *(int *)local_1d8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_1b9) goto LAB_100aa09e6;
    }
    QArrayData::deallocate((QArrayData *)local_1d8.field0_0x0,2,8);
  }
LAB_100aa09e6:
  if (*(int *)local_1e0 == -1) {
    uVar2 = 0;
  }
  else {
    if (*(int *)local_1e0 != 0) {
      LOCK();
      *(int *)local_1e0 = *(int *)local_1e0 + -1;
      local_1b9 = *(int *)local_1e0 != 0;
      UNLOCK();
      if ((bool)local_1b9) {
        uVar2 = 0;
        goto LAB_100aa0a2c;
      }
    }
    QArrayData::deallocate(local_1e0,2,8);
    uVar2 = 0;
  }
LAB_100aa0a2c:
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
}

