
void FUN_1007d7460(long param_1)

{
  void **ppvVar1;
  uint uVar2;
  uint *puVar3;
  void *pvVar4;
  int iVar5;
  Data *pDVar6;
  long lVar7;
  long lVar8;
  QArrayData *local_40;
  
  CSbaInstallation::getType();
  iVar5 = QString::compare_helper
                    (local_40 + *(long *)(local_40 + 0x10),*(undefined4 *)(local_40 + 4),"no data",
                     0xffffffff,1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_1007d74db;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1007d74db:
  if (iVar5 == 0) {
    return;
  }
  puVar3 = *(uint **)(param_1 + 0xa8);
  uVar2 = puVar3[2];
  if (puVar3[3] == uVar2) goto LAB_1007d7608;
  ppvVar1 = (void **)(param_1 + 0xa8);
  if (1 < *puVar3) {
    pDVar6 = (Data *)QListData::detach((int)ppvVar1);
    pvVar4 = *ppvVar1;
    lVar7 = (long)*(int *)((long)pvVar4 + 8);
    if ((puVar3 + (long)(int)uVar2 * 2 != (uint *)((long)pvVar4 + lVar7 * 8)) &&
       (lVar8 = *(int *)((long)pvVar4 + 0xc) - lVar7,
       lVar8 != 0 && lVar7 <= *(int *)((long)pvVar4 + 0xc))) {
      _memcpy((void *)((long)pvVar4 + lVar7 * 8 + 0x10),puVar3 + (long)(int)uVar2 * 2 + 4,lVar8 * 8)
      ;
    }
    if (*(int *)pDVar6 != -1) {
      if (*(int *)pDVar6 != 0) {
        LOCK();
        *(int *)pDVar6 = *(int *)pDVar6 + -1;
        UNLOCK();
        if (*(int *)pDVar6 != 0) goto LAB_1007d7566;
      }
      QListData::dispose(pDVar6);
    }
  }
LAB_1007d7566:
  puVar3 = *ppvVar1;
  if (1 < *puVar3) {
    uVar2 = puVar3[2];
    pDVar6 = (Data *)QListData::detach((int)ppvVar1);
    pvVar4 = *ppvVar1;
    lVar7 = (long)*(int *)((long)pvVar4 + 8);
    if ((puVar3 + (long)(int)uVar2 * 2 != (uint *)((long)pvVar4 + lVar7 * 8)) &&
       (lVar8 = *(int *)((long)pvVar4 + 0xc) - lVar7,
       lVar8 != 0 && lVar7 <= *(int *)((long)pvVar4 + 0xc))) {
      _memcpy((void *)((long)pvVar4 + lVar7 * 8 + 0x10),puVar3 + (long)(int)uVar2 * 2 + 4,lVar8 * 8)
      ;
    }
    if (*(int *)pDVar6 != -1) {
      if (*(int *)pDVar6 != 0) {
        LOCK();
        *(int *)pDVar6 = *(int *)pDVar6 + -1;
        UNLOCK();
        if (*(int *)pDVar6 != 0) goto LAB_1007d75fd;
      }
      QListData::dispose(pDVar6);
    }
  }
LAB_1007d75fd:
  QListData::erase(ppvVar1);
LAB_1007d7608:
  FUN_1007cc540(param_1);
  return;
}

