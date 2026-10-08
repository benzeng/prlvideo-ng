
undefined4 FUN_100b66ab0(long param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  size_t sVar4;
  undefined4 uVar5;
  bool bVar6;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QDateTime local_50;
  QDateTime local_48;
  QDateTime local_40;
  QDateTime local_38;
  undefined1 local_29;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    return 0x80011000;
  }
  if ((*(int *)(param_1 + 0xa0) != 0) && (*(int *)(param_1 + 0xa0) != *(int *)(param_1 + 0x120))) {
    return 0x80011003;
  }
  QDateTime::currentDateTime();
  QDateTime::addSecs((longlong)&local_40);
  if (*(char *)(param_1 + 0x48) == '\0') {
    QDateTime::toTimeSpec(&local_48,&local_40,0);
    cVar2 = QDateTime::operator<(&local_48,&local_38);
    QDateTime::~QDateTime(&local_48);
    if (cVar2 != '\0') {
      if (*(char *)(param_1 + 0x10) == '\0') {
        FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed",
                      "VzLicense.cpp",0x1bb,"IsFile");
      }
      uVar5 = 0x80011065;
      if (*(char *)(param_1 + 0x125) == '\0') {
        uVar5 = 0x80011001;
      }
      goto LAB_100b66dce;
    }
  }
  QDateTime::toTimeSpec(&local_50,param_1 + 0x58,0);
  cVar2 = QDateTime::operator<(&local_38,&local_50);
  QDateTime::~QDateTime(&local_50);
  puVar1 = PTR_s_GRACED_1022cffd8;
  uVar5 = 0x80011014;
  if ((cVar2 != '\0') || (uVar5 = 0x80011004, (*(uint *)(param_1 + 0xa4) & 0xfffffffe) == 2))
  goto LAB_100b66dce;
  iVar3 = -1;
  if (PTR_s_GRACED_1022cffd8 != (undefined *)0x0) {
    sVar4 = _strlen(PTR_s_GRACED_1022cffd8);
    iVar3 = (int)sVar4;
  }
  local_58 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar3);
  param_1 = param_1 + 0x118;
  iVar3 = QString::compare(param_1,&local_58,1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b66c6b;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100b66c6b:
  puVar1 = PTR_s_UNKNOWN_1022cffa0;
  uVar5 = 0x80011058;
  if (iVar3 == 0) goto LAB_100b66dce;
  iVar3 = -1;
  if (PTR_s_UNKNOWN_1022cffa0 != (undefined *)0x0) {
    sVar4 = _strlen(PTR_s_UNKNOWN_1022cffa0);
    iVar3 = (int)sVar4;
  }
  local_60 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar3);
  iVar3 = QString::compare(param_1,&local_60,1);
  puVar1 = PTR_s_INVALID_1022cffa8;
  bVar6 = true;
  if (iVar3 != 0) {
    iVar3 = -1;
    if (PTR_s_INVALID_1022cffa8 != (undefined *)0x0) {
      sVar4 = _strlen(PTR_s_INVALID_1022cffa8);
      iVar3 = (int)sVar4;
    }
    local_68 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar3);
    iVar3 = QString::compare(param_1,&local_68,1);
    puVar1 = PTR_s_ERROR_1022cffb8;
    bVar6 = true;
    if (iVar3 != 0) {
      iVar3 = -1;
      if (PTR_s_ERROR_1022cffb8 != (undefined *)0x0) {
        sVar4 = _strlen(PTR_s_ERROR_1022cffb8);
        iVar3 = (int)sVar4;
      }
      local_70 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar3);
      iVar3 = QString::compare(param_1,&local_70,1);
      bVar6 = iVar3 == 0;
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_29 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100b66d62;
        }
        QArrayData::deallocate(local_70,2,8);
      }
    }
LAB_100b66d62:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_29 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100b66d92;
      }
      QArrayData::deallocate(local_68,2,8);
    }
  }
LAB_100b66d92:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b66dc2;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100b66dc2:
  uVar5 = 0x80011000;
  if (!bVar6) {
    uVar5 = 0;
  }
LAB_100b66dce:
  QDateTime::~QDateTime(&local_40);
  QDateTime::~QDateTime(&local_38);
  return uVar5;
}

