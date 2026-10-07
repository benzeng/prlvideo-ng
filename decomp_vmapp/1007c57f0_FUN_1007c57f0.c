
bool FUN_1007c57f0(sockaddr *param_1,socklen_t param_2,QString *param_3,undefined2 *param_4,
                  QString *param_5)

{
  undefined2 uVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  size_t sVar5;
  long lVar6;
  bool bVar7;
  QArrayData *local_5a8;
  char local_599;
  QArrayData *local_598;
  QString local_590;
  QString local_588;
  QString local_580;
  QString local_578;
  undefined1 local_569;
  char local_568 [1072];
  undefined1 local_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  ___bzero(local_568 + 0x20,0x401);
  local_568[0x10] = '\0';
  local_568[0x11] = '\0';
  local_568[0x12] = '\0';
  local_568[0x13] = '\0';
  local_568[0x14] = '\0';
  local_568[0x15] = '\0';
  local_568[0x16] = '\0';
  local_568[0x17] = '\0';
  local_568[0x18] = '\0';
  local_568[0x19] = '\0';
  local_568[0x1a] = '\0';
  local_568[0x1b] = '\0';
  local_568[0x1c] = '\0';
  local_568[0x1d] = '\0';
  local_568[0x1e] = '\0';
  local_568[0x1f] = '\0';
  local_568[0] = '\0';
  local_568[1] = '\0';
  local_568[2] = '\0';
  local_568[3] = '\0';
  local_568[4] = '\0';
  local_568[5] = '\0';
  local_568[6] = '\0';
  local_568[7] = '\0';
  local_568[8] = '\0';
  local_568[9] = '\0';
  local_568[10] = '\0';
  local_568[0xb] = '\0';
  local_568[0xc] = '\0';
  local_568[0xd] = '\0';
  local_568[0xe] = '\0';
  local_568[0xf] = '\0';
  if (param_1->sa_family == '\x01') {
    QString::fromUtf8_helper((char *)&local_588,0xaf7051);
    QString::operator=(param_3,&local_588);
    if (*(int *)local_588.field0_0x0 != -1) {
      if (*(int *)local_588.field0_0x0 != 0) {
        LOCK();
        *(int *)local_588.field0_0x0 = *(int *)local_588.field0_0x0 + -1;
        local_569 = *(int *)local_588.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_569) goto LAB_1007c58ae;
      }
      QArrayData::deallocate((QArrayData *)local_588.field0_0x0,2,8);
    }
LAB_1007c58ae:
    *param_4 = 0;
    bVar7 = true;
  }
  else {
    iVar2 = _getnameinfo(param_1,param_2,local_568 + 0x20,0x401,local_568,0x20,10);
    if (iVar2 != 0) {
      piVar3 = ___error();
      if (iVar2 == 0xb) {
        pcVar4 = (char *)FUN_1007c5510(*piVar3,local_138,0x100);
      }
      else {
        pcVar4 = _gai_strerror(iVar2);
      }
      QString::fromUtf8_helper((char *)&local_580,0xaf7064);
      QString::operator=(param_5,&local_580);
      if (*(int *)local_580.field0_0x0 != -1) {
        if (*(int *)local_580.field0_0x0 != 0) {
          LOCK();
          *(int *)local_580.field0_0x0 = *(int *)local_580.field0_0x0 + -1;
          local_569 = *(int *)local_580.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_569) goto LAB_1007c5a80;
        }
        QArrayData::deallocate((QArrayData *)local_580.field0_0x0,2,8);
      }
LAB_1007c5a80:
      iVar2 = -1;
      if (pcVar4 != (char *)0x0) {
        sVar5 = _strlen(pcVar4);
        iVar2 = (int)sVar5;
      }
      local_598 = (QArrayData *)QString::fromAscii_helper(pcVar4,iVar2);
      QString::arg(&local_590,param_5,&local_598,0,0x20);
      QString::operator=(param_5,&local_590);
      if (*(int *)local_590.field0_0x0 != -1) {
        if (*(int *)local_590.field0_0x0 != 0) {
          LOCK();
          *(int *)local_590.field0_0x0 = *(int *)local_590.field0_0x0 + -1;
          local_569 = *(int *)local_590.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_569) goto LAB_1007c5b0d;
        }
        QArrayData::deallocate((QArrayData *)local_590.field0_0x0,2,8);
      }
LAB_1007c5b0d:
      lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
      if (*(int *)local_598 != -1) {
        if (*(int *)local_598 != 0) {
          LOCK();
          *(int *)local_598 = *(int *)local_598 + -1;
          local_569 = *(int *)local_598 != 0;
          UNLOCK();
          if ((bool)local_569) goto LAB_1007c5b53;
        }
        QArrayData::deallocate(local_598,2,8);
      }
LAB_1007c5b53:
      bVar7 = false;
      goto LAB_1007c5b55;
    }
    local_599 = '\0';
    _strlen(local_568 + 0x20);
    QString::fromUtf8_helper((char *)&local_578,(int)(local_568 + 0x20));
    QString::operator=(param_3,&local_578);
    if (*(int *)local_578.field0_0x0 != -1) {
      if (*(int *)local_578.field0_0x0 != 0) {
        LOCK();
        *(int *)local_578.field0_0x0 = *(int *)local_578.field0_0x0 + -1;
        local_569 = *(int *)local_578.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_569) goto LAB_1007c5983;
      }
      QArrayData::deallocate((QArrayData *)local_578.field0_0x0,2,8);
    }
LAB_1007c5983:
    sVar5 = _strlen(local_568);
    local_5a8 = (QArrayData *)QString::fromAscii_helper(local_568,(int)sVar5);
    uVar1 = QString::toInt((bool *)&local_5a8,(int)&local_599);
    *param_4 = uVar1;
    if (*(int *)local_5a8 != -1) {
      if (*(int *)local_5a8 != 0) {
        LOCK();
        *(int *)local_5a8 = *(int *)local_5a8 + -1;
        local_569 = *(int *)local_5a8 != 0;
        UNLOCK();
        if ((bool)local_569) goto LAB_1007c59fb;
      }
      QArrayData::deallocate(local_5a8,2,8);
    }
LAB_1007c59fb:
    bVar7 = local_599 != '\0';
  }
  lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
LAB_1007c5b55:
  if (lVar6 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return bVar7;
}

