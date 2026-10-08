
void FUN_100751bc0(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  long lVar4;
  Data *pDVar5;
  Data *pDVar6;
  QArrayData *pQVar7;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  Data *local_38;
  undefined1 local_29;
  
  CSpotlightWrapper::getFoundPaths();
  FUN_100751f90();
  if (*(int *)(local_38 + 0xc) == *(int *)(local_38 + 8)) goto LAB_100751d89;
  FUN_100752150(param_1,&local_38);
  local_58 = local_38;
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 == 0) {
      QListData::detach((int)&local_58);
      iVar1 = *(int *)(local_58 + 8);
      if (iVar1 != *(int *)(local_58 + 0xc)) {
        pDVar5 = local_38 + (long)*(int *)(local_38 + 8) * 8 + 0x10;
        pDVar6 = local_58 + (long)iVar1 * 8 + 0x10;
        lVar4 = (long)*(int *)(local_58 + 0xc) * 8 + (long)iVar1 * -8;
        do {
          piVar2 = *(int **)pDVar5;
          *(int **)pDVar6 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_29 = *piVar2 != 0;
            UNLOCK();
          }
          pDVar6 = pDVar6 + 8;
          pDVar5 = pDVar5 + 8;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
    }
    else {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + 1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
    }
  }
  pDVar5 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  local_50 = pDVar5;
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    do {
      local_40 = 1;
      local_50 = pDVar5;
      cVar3 = FUN_100750670(pDVar5);
      if (cVar3 != '\0') {
        FUN_100752570(param_1,pDVar5);
      }
      pDVar5 = local_50 + 8;
      local_50 = pDVar5;
    } while (pDVar5 != local_48);
  }
  pDVar5 = local_58;
  local_40 = 1;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100751d81;
    }
    iVar1 = *(int *)(local_58 + 0xc);
    if (iVar1 != *(int *)(local_58 + 8)) {
      lVar4 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = local_58 + (long)iVar1 * 8 + 8;
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_100751d60:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_29 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_100751d60;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose(pDVar5);
  }
LAB_100751d81:
  FUN_100752a40(param_1);
LAB_100751d89:
  FUN_100858f80(param_1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_29 = 0;
    }
    iVar1 = *(int *)(local_38 + 0xc);
    if (iVar1 != *(int *)(local_38 + 8)) {
      lVar4 = (long)*(int *)(local_38 + 8) * 8 + (long)iVar1 * -8;
      pDVar5 = local_38 + (long)iVar1 * 8 + 8;
      do {
        pQVar7 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar7 == 0) {
LAB_100751e00:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_29 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar7 = *(QArrayData **)pDVar5;
            goto LAB_100751e00;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose(local_38);
  }
  return;
}

