
undefined1 FUN_100118400(undefined8 param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined1 uVar3;
  size_t sVar4;
  int iVar5;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  puVar1 = PTR_s_http____102270d90;
  iVar5 = -1;
  if (PTR_s_http____102270d90 != (undefined *)0x0) {
    sVar4 = _strlen(PTR_s_http____102270d90);
    iVar5 = (int)sVar4;
  }
  local_28 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar5);
  cVar2 = QString::startsWith(param_1,&local_28,1);
  puVar1 = PTR_s_https____102270d98;
  uVar3 = 1;
  if (cVar2 != '\0') goto LAB_100118620;
  iVar5 = -1;
  if (PTR_s_https____102270d98 != (undefined *)0x0) {
    sVar4 = _strlen(PTR_s_https____102270d98);
    iVar5 = (int)sVar4;
  }
  local_30 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar5);
  cVar2 = QString::startsWith(param_1,&local_30,1);
  puVar1 = PTR_s_ftp____102270da0;
  uVar3 = 1;
  if (cVar2 == '\0') {
    iVar5 = -1;
    if (PTR_s_ftp____102270da0 != (undefined *)0x0) {
      sVar4 = _strlen(PTR_s_ftp____102270da0);
      iVar5 = (int)sVar4;
    }
    local_38 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar5);
    cVar2 = QString::startsWith(param_1,&local_38,1);
    puVar1 = PTR_s_smb____102270da8;
    uVar3 = 1;
    if (cVar2 == '\0') {
      iVar5 = -1;
      if (PTR_s_smb____102270da8 != (undefined *)0x0) {
        sVar4 = _strlen(PTR_s_smb____102270da8);
        iVar5 = (int)sVar4;
      }
      local_40 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar5);
      cVar2 = QString::startsWith(param_1,&local_40,1);
      puVar1 = PTR_s_nfs____102270db0;
      uVar3 = 1;
      if (cVar2 == '\0') {
        iVar5 = -1;
        if (PTR_s_nfs____102270db0 != (undefined *)0x0) {
          sVar4 = _strlen(PTR_s_nfs____102270db0);
          iVar5 = (int)sVar4;
        }
        local_48 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar5);
        uVar3 = QString::startsWith(param_1,&local_48,1);
        if (*(int *)local_48 != -1) {
          if (*(int *)local_48 != 0) {
            LOCK();
            *(int *)local_48 = *(int *)local_48 + -1;
            local_19 = *(int *)local_48 != 0;
            UNLOCK();
            if ((bool)local_19) goto LAB_100118590;
          }
          QArrayData::deallocate(local_48,2,8);
        }
      }
LAB_100118590:
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_19 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_1001185c0;
        }
        QArrayData::deallocate(local_40,2,8);
      }
    }
LAB_1001185c0:
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_19 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1001185f0;
      }
      QArrayData::deallocate(local_38,2,8);
    }
  }
LAB_1001185f0:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100118620;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100118620:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return uVar3;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return uVar3;
}

