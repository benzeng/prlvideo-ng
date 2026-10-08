
void FUN_100752150(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  uint uVar4;
  Data *pDVar5;
  Data *pDVar6;
  QArrayData *pQVar7;
  bool bVar8;
  QArrayData *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  uint local_40;
  Data *local_38;
  undefined1 local_29;
  
  FUN_100753190(&local_38);
  local_58 = local_38;
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 == 0) {
      QListData::detach((int)&local_58);
      iVar1 = *(int *)(local_58 + 8);
      if (iVar1 != *(int *)(local_58 + 0xc)) {
        pDVar5 = local_38 + (long)*(int *)(local_38 + 8) * 8 + 0x10;
        pDVar6 = local_58 + (long)iVar1 * 8 + 0x10;
        lVar3 = (long)*(int *)(local_58 + 0xc) * 8 + (long)iVar1 * -8;
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
          lVar3 = lVar3 + -8;
        } while (lVar3 != 0);
      }
    }
    else {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + 1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  local_40 = 1;
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    do {
      local_60 = *(QArrayData **)local_50;
      if (1 < *(int *)local_60 + 1U) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + 1;
        local_29 = *(int *)local_60 != 0;
        UNLOCK();
      }
      if (local_40 != 0) {
        FUN_1000e5580(param_2,&local_60);
        local_40 = 0;
      }
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_29 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100752291;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_100752291:
      local_50 = local_50 + 8;
      uVar4 = local_40 ^ 1;
      bVar8 = local_40 != 1;
      local_40 = uVar4;
    } while ((bVar8) && (local_50 != local_48));
  }
  pDVar5 = local_58;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100752341;
    }
    iVar1 = *(int *)(local_58 + 0xc);
    if (iVar1 != *(int *)(local_58 + 8)) {
      lVar3 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = local_58 + (long)iVar1 * 8 + 8;
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_100752320:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_29 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_100752320;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose(pDVar5);
  }
LAB_100752341:
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
      lVar3 = (long)*(int *)(local_38 + 8) * 8 + (long)iVar1 * -8;
      pDVar5 = local_38 + (long)iVar1 * 8 + 8;
      do {
        pQVar7 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar7 == 0) {
LAB_1007523b0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_29 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar7 = *(QArrayData **)pDVar5;
            goto LAB_1007523b0;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose(local_38);
  }
  return;
}

