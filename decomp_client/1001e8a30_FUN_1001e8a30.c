
uint FUN_1001e8a30(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  QArrayData *pQVar4;
  int *piVar5;
  char *pcVar6;
  QArrayData *local_48;
  QString local_40;
  QArrayData *local_38;
  undefined8 local_30;
  undefined1 local_21;
  
  local_30 = 0;
  FUN_100d8b860(&local_48);
  pQVar4 = (QArrayData *)QString::fromAscii_helper("prl_disp_service",0x10);
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_48;
  if (1 < *(int *)local_48 + 1U) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + 1;
    local_21 = *(int *)local_48 != 0;
    UNLOCK();
  }
  if (1 < *(int *)pQVar4 + 1U) {
    LOCK();
    *(int *)pQVar4 = *(int *)pQVar4 + 1;
    local_21 = *(int *)pQVar4 != 0;
    UNLOCK();
  }
  local_38 = pQVar4;
  cVar1 = QFileInfo::exists(&local_40);
  if (cVar1 == '\0') {
    cVar1 = '\0';
  }
  else {
    cVar1 = FUN_1001e9440(&local_40,&local_30);
    if (cVar1 == '\0') {
      cVar1 = '\0';
    }
    else {
      cVar1 = FUN_1001e95d0(&local_40,&local_30);
    }
  }
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001e8b73;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1001e8b73:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_21 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001e8ba3;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1001e8ba3:
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_21 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001e8bce;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1001e8bce:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001e8bfe;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1001e8bfe:
  if (cVar1 == '\0') {
    uVar3 = 0;
    FUN_100df99c0("[BOOTSTRAP]","prl_client_app",0,"Unable to get pid for stop");
  }
  else {
    iVar2 = _kill((pid_t)local_30,0xf);
    if ((iVar2 == 0) || (piVar5 = ___error(), *piVar5 == 3)) {
      uVar3 = FUN_1001e9070();
      uVar3 = (int)uVar3 >> 0x1f & uVar3;
    }
    else {
      piVar5 = ___error();
      iVar2 = *piVar5;
      piVar5 = ___error();
      pcVar6 = _strerror(*piVar5);
      FUN_100df99c0("[BOOTSTRAP]","prl_client_app",0,"kill(SIGTERM) failed. err=%d, %s",iVar2,pcVar6
                   );
      uVar3 = 0x80000009;
    }
  }
  return uVar3;
}

