
bool FUN_100091c30(undefined8 param_1,int param_2)

{
  Data *pDVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  Data *pDVar7;
  QArrayData *pQVar8;
  int iVar9;
  QArrayData *local_70;
  Data *local_68;
  Data *local_60;
  Data *local_58;
  undefined4 local_50;
  Data *local_48;
  QArrayData *local_40;
  Data *local_38;
  undefined1 local_29;
  
  local_38 = (Data *)PTR_shared_null_100ba2188;
  if (param_2 != 0) {
    FUN_100091bc0(&local_40,param_1,0);
    FUN_10000c490(&local_38,&local_40);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_29 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100091c9c;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_100091c9c:
  lVar4 = CVmConfiguration::getVmHardwareList();
  local_48 = *(Data **)(lVar4 + 0x1a8);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 == 0) {
      QListData::detach((int)&local_48);
      lVar5 = (long)*(int *)(local_48 + 8);
      lVar4 = *(long *)(lVar4 + 0x1a8);
      if (((Data *)(lVar4 + (long)*(int *)(lVar4 + 8) * 8) != local_48 + lVar5 * 8) &&
         (lVar6 = *(int *)(local_48 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(local_48 + 0xc))
         ) {
        _memcpy(local_48 + lVar5 * 8 + 0x10,(void *)(lVar4 + 0x10 + (long)*(int *)(lVar4 + 8) * 8),
                lVar6 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
    }
  }
  local_68 = local_48;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 == 0) {
      QListData::detach((int)&local_68);
      lVar4 = (long)*(int *)(local_68 + 8);
      if ((local_48 + (long)*(int *)(local_48 + 8) * 8 != local_68 + lVar4 * 8) &&
         (lVar5 = *(int *)(local_68 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(local_68 + 0xc))
         ) {
        _memcpy(local_68 + lVar4 * 8 + 0x10,local_48 + (long)*(int *)(local_48 + 8) * 8 + 0x10,
                lVar5 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
    }
  }
  local_60 = local_68 + (long)*(int *)(local_68 + 8) * 8 + 0x10;
  local_58 = local_68 + (long)*(int *)(local_68 + 0xc) * 8 + 0x10;
  if (*(int *)(local_68 + 8) != *(int *)(local_68 + 0xc)) {
    iVar9 = 1;
    do {
      local_50 = 1;
      iVar3 = CVmDevice::getEnabled();
      if ((iVar3 != 0) && (iVar3 = CVmDevice::getConnected(), iVar3 == 1)) {
        CVmDevice::getSystemName();
        cVar2 = QtPrivate::QStringList_contains(&local_38,&local_70,1);
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_29 = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_100091e19;
          }
          QArrayData::deallocate(local_70,2,8);
        }
LAB_100091e19:
        if (cVar2 != '\0') goto LAB_100091e40;
      }
      local_60 = local_60 + 8;
    } while (local_60 != local_58);
  }
  local_50 = 1;
  iVar9 = 5;
LAB_100091e40:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100091e66;
    }
    QListData::dispose(local_68);
  }
LAB_100091e66:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100091e8c;
    }
    QListData::dispose(local_48);
  }
LAB_100091e8c:
  pDVar1 = local_38;
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) goto LAB_100091f11;
      local_29 = 0;
    }
    iVar3 = *(int *)(local_38 + 0xc);
    if (iVar3 != *(int *)(local_38 + 8)) {
      lVar4 = (long)*(int *)(local_38 + 8) * 8 + (long)iVar3 * -8;
      pDVar7 = local_38 + (long)iVar3 * 8 + 8;
      do {
        pQVar8 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar8 == 0) {
LAB_100091ef0:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_29 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar8 = *(QArrayData **)pDVar7;
            goto LAB_100091ef0;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose(pDVar1);
  }
LAB_100091f11:
  return iVar9 == 5;
}

