
undefined4 FUN_100da0330(undefined8 param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  Data *pDVar6;
  Data *pDVar7;
  QArrayData *pQVar8;
  QArrayData *local_50;
  Data *local_48;
  Data *local_40;
  undefined1 local_31;
  
  local_48 = (Data *)PTR_shared_null_1021e15e8;
  local_50 = (QArrayData *)QString::fromAscii_helper("nfs",3);
  FUN_1000341d0(&local_48,&local_50);
  local_40 = local_48;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 == 0) {
      QListData::detach((int)&local_40);
      iVar3 = *(int *)(local_40 + 8);
      if (iVar3 != *(int *)(local_40 + 0xc)) {
        pDVar6 = local_48 + (long)*(int *)(local_48 + 8) * 8 + 0x10;
        pDVar7 = local_40 + (long)iVar3 * 8 + 0x10;
        lVar5 = (long)*(int *)(local_40 + 0xc) * 8 + (long)iVar3 * -8;
        do {
          piVar1 = *(int **)pDVar6;
          *(int **)pDVar7 = piVar1;
          if (1 < *piVar1 + 1U) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            local_31 = *piVar1 != 0;
            UNLOCK();
          }
          pDVar7 = pDVar7 + 8;
          pDVar6 = pDVar6 + 8;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
    }
    else {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
    }
  }
  cVar2 = FUN_100da0710(param_1,&local_40);
  pDVar6 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100da0491;
    }
    iVar3 = *(int *)(local_40 + 0xc);
    if (iVar3 != *(int *)(local_40 + 8)) {
      lVar5 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar3 * -8;
      pDVar7 = local_40 + (long)iVar3 * 8 + 8;
      do {
        pQVar8 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar8 == 0) {
LAB_100da0470:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_31 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar8 = *(QArrayData **)pDVar7;
            goto LAB_100da0470;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar6);
  }
LAB_100da0491:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100da04bd;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100da04bd:
  pDVar6 = local_48;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100da0551;
    }
    iVar3 = *(int *)(local_48 + 0xc);
    if (iVar3 != *(int *)(local_48 + 8)) {
      lVar5 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar3 * -8;
      pDVar7 = local_48 + (long)iVar3 * 8 + 8;
      do {
        pQVar8 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar8 == 0) {
LAB_100da0530:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_31 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar8 = *(QArrayData **)pDVar7;
            goto LAB_100da0530;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar6);
  }
LAB_100da0551:
  if (cVar2 == '\0') {
    iVar3 = FUN_100db9710(param_1);
    uVar4 = CONCAT31((int3)(iVar3 - 1U >> 8),2 < iVar3 - 1U);
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

