
undefined1 FUN_100526250(undefined8 param_1)

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
  undefined1 local_21;
  
  local_30 = (QArrayData *)QString::fromAscii_helper("QSettings",9);
  cVar2 = QtPrivate::QStringList_contains(param_1,&local_30,1);
  puVar1 = PTR_s_UserPreferences_102274480;
  uVar3 = 1;
  if (cVar2 != '\0') goto LAB_1005263ea;
  iVar5 = -1;
  if (PTR_s_UserPreferences_102274480 != (undefined *)0x0) {
    sVar4 = _strlen(PTR_s_UserPreferences_102274480);
    iVar5 = (int)sVar4;
  }
  local_38 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar5);
  cVar2 = QtPrivate::QStringList_contains(param_1,&local_38,1);
  puVar1 = PTR_s_DispPreferences_102274488;
  uVar3 = 1;
  if (cVar2 == '\0') {
    iVar5 = -1;
    if (PTR_s_DispPreferences_102274488 != (undefined *)0x0) {
      sVar4 = _strlen(PTR_s_DispPreferences_102274488);
      iVar5 = (int)sVar4;
    }
    local_40 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar5);
    cVar2 = QtPrivate::QStringList_contains(param_1,&local_40,1);
    puVar1 = PTR_s_ShortcutsStorage_102274490;
    uVar3 = 1;
    if (cVar2 == '\0') {
      iVar5 = -1;
      if (PTR_s_ShortcutsStorage_102274490 != (undefined *)0x0) {
        sVar4 = _strlen(PTR_s_ShortcutsStorage_102274490);
        iVar5 = (int)sVar4;
      }
      local_48 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar5);
      uVar3 = QtPrivate::QStringList_contains(param_1,&local_48,1);
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_21 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_10052638a;
        }
        QArrayData::deallocate(local_48,2,8);
      }
    }
LAB_10052638a:
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_21 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1005263ba;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_1005263ba:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005263ea;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1005263ea:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return uVar3;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return uVar3;
}

