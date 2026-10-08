
undefined1 FUN_100b47210(char *param_1,QString *param_2,ushort *param_3)

{
  long lVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  undefined1 uVar6;
  char local_1a8 [16];
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  QString *local_168;
  undefined8 uStack_160;
  QString local_150 [2];
  ushort local_140;
  int local_13c;
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  uVar6 = 0;
  local_38 = lVar1;
  iVar3 = _socket(2,2,0);
  if (iVar3 < 0) goto LAB_100b473d6;
  uStack_180 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0x200;
  _strncpy((char *)&local_198,param_1,0x10);
  ___bzero(local_150,0x118);
  local_140 = 0xffff;
  local_13c = 0x50524c56;
  uStack_160 = 0;
  local_178 = local_198;
  uStack_170 = uStack_190;
  local_168 = local_150;
  iVar4 = _ioctl(iVar3,0xc020697f,&local_178);
  if ((iVar4 < 0) || (local_13c != 0x50524c56)) {
LAB_100b473cc:
    _close(iVar3);
  }
  else {
    local_13c = 0;
    sVar5 = _strlen((char *)local_150);
    if (((int)sVar5 == 0) || (0xf < (int)sVar5)) goto LAB_100b473cc;
    _strcpy(local_1a8,(char *)local_150);
    uVar2 = local_140;
    *param_3 = local_140;
    _close(iVar3);
    if (uVar2 < 0x1000) {
      _strlen(local_1a8);
      QString::fromUtf8_helper((char *)local_150,(int)local_1a8);
      QString::operator=(param_2,local_150);
      if (*(int *)local_150[0].field0_0x0 != -1) {
        if (*(int *)local_150[0].field0_0x0 != 0) {
          LOCK();
          *(int *)local_150[0].field0_0x0 = *(int *)local_150[0].field0_0x0 + -1;
          UNLOCK();
          local_178 = CONCAT71(local_178._1_7_,*(int *)local_150[0].field0_0x0 != 0);
          if (*(int *)local_150[0].field0_0x0 != 0) goto LAB_100b473c8;
        }
        QArrayData::deallocate((QArrayData *)local_150[0].field0_0x0,2,8);
      }
LAB_100b473c8:
      uVar6 = 1;
      goto LAB_100b473d6;
    }
  }
  uVar6 = 0;
LAB_100b473d6:
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6;
}

