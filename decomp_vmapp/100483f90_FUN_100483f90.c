
undefined8 FUN_100483f90(long param_1)

{
  Data *pDVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_38 = DAT_1011c3698 + 0x110;
  iVar3 = FUN_1000b4970(&local_38);
  if ((iVar3 == 2) && (*(long *)(DAT_1011c3698 + 0x110) != 0)) {
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    cVar2 = CVmTools::isLockGuestOnSuspend();
    if (cVar2 != '\0') {
      local_30 = 0xf00010005;
      local_28 = 0;
      FUN_100493f30(param_1,&local_30);
      return 0;
    }
  }
  QMutex::lock();
  pDVar1 = *(Data **)(param_1 + 0x48);
  *(undefined **)(param_1 + 0x48) = PTR_shared_null_100ba2188;
  QMutex::unlock();
  local_58 = pDVar1;
  if (*(int *)pDVar1 != -1) {
    if (*(int *)pDVar1 == 0) {
      QListData::detach((int)&local_58);
      lVar4 = (long)*(int *)(local_58 + 8);
      if ((pDVar1 + (long)*(int *)(pDVar1 + 8) * 8 != local_58 + lVar4 * 8) &&
         (lVar5 = *(int *)(local_58 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar4 * 8 + 0x10,pDVar1 + (long)*(int *)(pDVar1 + 8) * 8 + 0x10,lVar5 * 8
               );
      }
    }
    else {
      LOCK();
      *(int *)pDVar1 = *(int *)pDVar1 + 1;
      UNLOCK();
      local_30 = CONCAT71(local_30._1_7_,*(int *)pDVar1 != 0);
    }
  }
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    do {
      local_40 = 1;
      FUN_1004c07d0(param_1 + 0x10,*(undefined8 *)local_50,0xf0000000);
      local_50 = local_50 + 8;
    } while (local_50 != local_48);
  }
  local_40 = 1;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      local_30 = CONCAT71(local_30._1_7_,*(int *)local_58 != 0);
      if (*(int *)local_58 != 0) goto LAB_10048411f;
    }
    QListData::dispose(local_58);
  }
LAB_10048411f:
  if (*(int *)pDVar1 != -1) {
    if (*(int *)pDVar1 != 0) {
      LOCK();
      *(int *)pDVar1 = *(int *)pDVar1 + -1;
      UNLOCK();
      local_30 = CONCAT71(local_30._1_7_,*(int *)pDVar1 != 0);
      if (*(int *)pDVar1 != 0) {
        return 0;
      }
    }
    QListData::dispose(pDVar1);
  }
  return 0;
}

