
undefined1 FUN_100616ea0(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  Data *pDVar4;
  QArrayData *pQVar5;
  long lVar6;
  undefined1 local_1c0 [24];
  QArrayData *local_1a8;
  undefined1 local_1a0 [304];
  undefined1 local_70 [24];
  QArrayData *local_58;
  Data *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_40 = (QArrayData *)PTR_shared_null_1021e1288;
  cVar1 = FUN_100616a30(param_1,param_2,&local_40);
  if (cVar1 == '\0') {
    uVar3 = 0;
    goto LAB_10061717b;
  }
  lVar6 = *(long *)(param_1 + 0x28);
  if (lVar6 == 0) {
    uVar3 = 0;
    FUN_100df99c0("[LICENSE]","prl_client_app",0,"(!)Error: Invalid license handle.");
    goto LAB_10061717b;
  }
  _PrlHandle_AddRef(lVar6);
  _PrlHandle_Free(lVar6);
  local_58 = (QArrayData *)QString::fromAscii_helper(";",1);
  QString::split(&local_50,&local_40,&local_58,0,1);
  QString::trimmed();
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100616fd1;
    }
    iVar2 = *(int *)(local_50 + 0xc);
    if (iVar2 != *(int *)(local_50 + 8)) {
      lVar6 = (long)*(int *)(local_50 + 8) * 8 + (long)iVar2 * -8;
      pDVar4 = local_50 + (long)iVar2 * 8 + 8;
      do {
        pQVar5 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar5 == 0) {
LAB_100616fb0:
          QArrayData::deallocate(pQVar5,2,8);
        }
        else if (*(int *)pQVar5 != -1) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          local_31 = *(int *)pQVar5 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar5 = *(QArrayData **)pDVar4;
            goto LAB_100616fb0;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(local_50);
  }
LAB_100616fd1:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100617001;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100617001:
  FUN_100b5f7a0(local_70,&local_48);
  FUN_100b5fbc0(param_3);
  FUN_100b5ff80(local_70);
  iVar2 = FUN_100b5ff90(param_3);
  if ((iVar2 == -1) && (0 < *(int *)(local_48 + 4))) {
    local_1a8 = (QArrayData *)QString::fromAscii_helper("",0);
    FUN_100b60f40(local_1a0,&local_1a8);
    if (*(int *)local_1a8 != -1) {
      if (*(int *)local_1a8 != 0) {
        LOCK();
        *(int *)local_1a8 = *(int *)local_1a8 + -1;
        local_31 = *(int *)local_1a8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006170a0;
      }
      QArrayData::deallocate(local_1a8,2,8);
    }
LAB_1006170a0:
    cVar1 = FUN_1006173a0(param_1,&local_48,local_1a0);
    if (cVar1 == '\0') {
      FUN_100df99c0("[LICENSE]","prl_client_app",0,"(!)Error: Failed to parse vz license.");
    }
    else {
      FUN_100b5fbb0(local_1c0,local_1a0);
      FUN_100b5fbc0(param_3,local_1c0);
      FUN_100b5ff80(local_1c0);
    }
    FUN_100b66a70(local_1a0);
    if (cVar1 != '\0') goto LAB_100617149;
    uVar3 = 0;
  }
  else {
LAB_100617149:
    uVar3 = 1;
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10061717b;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10061717b:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return uVar3;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return uVar3;
}

