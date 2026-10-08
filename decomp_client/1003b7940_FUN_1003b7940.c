
long FUN_1003b7940(int param_1,int param_2)

{
  Data *pDVar1;
  long lVar2;
  Data *pDVar3;
  long lVar4;
  long unaff_RBX;
  int iVar5;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  Data *local_38;
  undefined1 local_29;
  
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmStartupOptions();
  CVmStartupOptions::getBootDeviceList();
  local_58 = local_38;
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 == 0) {
      QListData::detach((int)&local_58);
      lVar2 = (long)*(int *)(local_58 + 8);
      unaff_RBX = (long)*(int *)(local_38 + 8);
      if ((local_38 + unaff_RBX * 8 != local_58 + lVar2 * 8) &&
         (lVar4 = *(int *)(local_58 + 0xc) - lVar2, lVar4 != 0 && lVar2 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar2 * 8 + 0x10,local_38 + unaff_RBX * 8 + 0x10,lVar4 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + 1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
    }
  }
  lVar2 = (long)*(int *)(local_58 + 8);
  iVar5 = *(int *)(local_58 + 0xc);
  local_48 = local_58 + (long)iVar5 * 8 + 0x10;
  local_50 = local_58 + lVar2 * 8 + 0x10;
  if (*(int *)(local_58 + 8) != iVar5) {
    lVar4 = (long)iVar5 * 8 + lVar2 * -8;
    iVar5 = 1;
    pDVar1 = local_58 + lVar2 * 8 + 0x18;
    do {
      pDVar3 = pDVar1;
      unaff_RBX = *(long *)(pDVar3 + -8);
      if ((**(int **)(unaff_RBX + 0xb8) == param_1) && (**(int **)(unaff_RBX + 0xc0) == param_2))
      goto LAB_1003b7a57;
      lVar4 = lVar4 + -8;
      pDVar1 = pDVar3 + 8;
      local_50 = pDVar3;
    } while (lVar4 != 0);
  }
  iVar5 = 2;
LAB_1003b7a57:
  local_40 = 1;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003b7a79;
    }
    QListData::dispose(local_58);
  }
LAB_1003b7a79:
  if (iVar5 == 2) {
    unaff_RBX = 0;
  }
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return unaff_RBX;
      }
      local_29 = 0;
    }
    QListData::dispose(local_38);
  }
  return unaff_RBX;
}

