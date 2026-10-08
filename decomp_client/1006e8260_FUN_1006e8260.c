
void FUN_1006e8260(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  Data *pDVar4;
  Data *pDVar5;
  QArrayData *pQVar6;
  long lVar7;
  undefined4 local_48;
  undefined4 local_44;
  Data *local_40;
  Data *local_38;
  undefined1 local_29;
  
  uVar3 = FUN_1001d50a0();
  cVar1 = FUN_1001d5140(uVar3,0);
  if (cVar1 != '\0') {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x80) + 0x10) < 0) {
    return;
  }
  uVar3 = FUN_10017cec0();
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  local_44 = 0x30000001;
  FUN_100191200(&local_40,&local_44);
  local_48 = 0x30000009;
  FUN_100191200(&local_40,&local_48);
  FUN_10017e450(&local_38,uVar3,&local_40);
  pDVar5 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006e834f;
    }
    iVar2 = *(int *)(local_40 + 0xc);
    if (iVar2 != *(int *)(local_40 + 8)) {
      lVar7 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar2 * -8;
      pDVar4 = local_40 + (long)iVar2 * 8 + 8;
      do {
        if (*(void **)pDVar4 != (void *)0x0) {
          operator_delete(*(void **)pDVar4);
        }
        pDVar4 = pDVar4 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose(pDVar5);
  }
LAB_1006e834f:
  uVar3 = FUN_100152280();
  lVar7 = FUN_1001554a0(uVar3);
  if (((lVar7 != 0) && (*(int *)(local_38 + 0xc) != *(int *)(local_38 + 8))) &&
     (iVar2 = FUN_10015d3a0(lVar7), iVar2 == *(int *)(local_38 + 0xc) - *(int *)(local_38 + 8))) {
    CAppUpdateWorker::installPendingUpdate(SUB81(param_1,0),false);
  }
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
    iVar2 = *(int *)(local_38 + 0xc);
    if (iVar2 != *(int *)(local_38 + 8)) {
      lVar7 = (long)*(int *)(local_38 + 8) * 8 + (long)iVar2 * -8;
      pDVar5 = local_38 + (long)iVar2 * 8 + 8;
      do {
        pQVar6 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar6 == 0) {
LAB_1006e8400:
          QArrayData::deallocate(pQVar6,2,8);
        }
        else if (*(int *)pQVar6 != -1) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_29 = *(int *)pQVar6 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar6 = *(QArrayData **)pDVar5;
            goto LAB_1006e8400;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose(local_38);
  }
  return;
}

