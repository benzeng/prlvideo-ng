
void FUN_1004683f0(long param_1)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 *puVar4;
  Data *pDVar5;
  Data *pDVar6;
  QArrayData *pQVar7;
  QArrayData *local_48;
  Data *local_40;
  undefined1 local_31;
  
  QMutex::lock();
  local_40 = *(Data **)(param_1 + 0x60);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 == 0) {
      QListData::detach((int)&local_40);
      iVar1 = *(int *)(local_40 + 8);
      if (iVar1 != *(int *)(local_40 + 0xc)) {
        puVar4 = (undefined8 *)
                 (*(long *)(param_1 + 0x60) + 0x10 +
                 (long)*(int *)(*(long *)(param_1 + 0x60) + 8) * 8);
        pDVar5 = local_40 + (long)iVar1 * 8 + 0x10;
        lVar3 = (long)*(int *)(local_40 + 0xc) * 8 + (long)iVar1 * -8;
        do {
          piVar2 = (int *)*puVar4;
          *(int **)pDVar5 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          pDVar5 = pDVar5 + 8;
          puVar4 = puVar4 + 1;
          lVar3 = lVar3 + -8;
        } while (lVar3 != 0);
      }
    }
    else {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
    }
  }
  QMutex::unlock();
  if (*(int *)(local_40 + 0xc) != *(int *)(local_40 + 8)) {
    do {
      FUN_100058900(&local_48,&local_40);
      pQVar7 = local_48;
      if (1 < *(int *)local_48 + 1U) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + 1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
      }
      FUN_100468be0();
      if (*(int *)pQVar7 != -1) {
        if (*(int *)pQVar7 == 0) {
LAB_100468515:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) goto LAB_100468515;
        }
        if (*(int *)pQVar7 != -1) {
          if (*(int *)pQVar7 != 0) {
            LOCK();
            *(int *)pQVar7 = *(int *)pQVar7 + -1;
            local_31 = *(int *)pQVar7 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100468560;
          }
          QArrayData::deallocate(pQVar7,2,8);
        }
      }
LAB_100468560:
    } while (*(int *)(local_40 + 0xc) != *(int *)(local_40 + 8));
  }
  pDVar5 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    iVar1 = *(int *)(local_40 + 0xc);
    if (iVar1 != *(int *)(local_40 + 8)) {
      lVar3 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = local_40 + (long)iVar1 * 8 + 8;
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004685e0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004685e0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose(pDVar5);
  }
  return;
}

