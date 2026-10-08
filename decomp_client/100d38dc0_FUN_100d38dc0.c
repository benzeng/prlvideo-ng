
void FUN_100d38dc0(long param_1,char param_2)

{
  int *piVar1;
  void **ppvVar2;
  uint uVar3;
  void *pvVar4;
  long *plVar5;
  undefined8 *puVar6;
  Data *pDVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  void *local_48;
  void *local_40;
  undefined1 local_32;
  undefined1 local_31;
  
  if (*(char *)(param_1 + 0x31) != '\0') {
    return;
  }
  lVar8 = param_1;
  if (param_2 != '\0') {
    do {
      plVar5 = (long *)(lVar8 + 0x48);
      lVar8 = *plVar5;
    } while (*plVar5 != 0);
    FUN_100d38d40(param_1);
    pvVar4 = operator_new(0x58);
    FUN_100d38710(pvVar4);
    FUN_100d386e0(pvVar4,1);
    *(undefined1 *)(param_1 + 0x30) = 1;
    if (*(char *)(param_1 + 0x31) != '\0') {
      return;
    }
    local_40 = pvVar4;
    FUN_100d3cdf0(param_1 + 0x50,
                  ((*(byte *)((long)pvVar4 + 0x31) - 1) + *(int *)(*(long *)(param_1 + 0x50) + 0xc))
                  - *(int *)(*(long *)(param_1 + 0x50) + 8),&local_40);
    *(long *)((long)pvVar4 + 0x48) = param_1;
    return;
  }
  iVar12 = *(int *)(*(long *)(param_1 + 0x50) + 0xc);
  piVar1 = (int *)(*(long *)(param_1 + 0x50) + 8);
  iVar11 = iVar12 - *piVar1;
  if (iVar11 == 0 || iVar12 < *piVar1) goto LAB_100d38fe1;
  ppvVar2 = (void **)(param_1 + 0x50);
  plVar5 = (long *)FUN_100d3cd40(ppvVar2,iVar11 + -1);
  if (*(char *)(*plVar5 + 0x31) == '\0') goto LAB_100d38fe1;
  puVar10 = *(uint **)(param_1 + 0x50);
  iVar12 = puVar10[3] - puVar10[2];
  if (iVar12 == 0 || (int)puVar10[3] < (int)puVar10[2]) {
    local_48 = (void *)0x0;
  }
  else {
    puVar6 = (undefined8 *)FUN_100d3cd40(ppvVar2,iVar12 + -1);
    local_48 = (void *)*puVar6;
    puVar10 = *ppvVar2;
  }
  if (1 < *puVar10) {
    uVar3 = puVar10[2];
    pDVar7 = (Data *)QListData::detach((int)ppvVar2);
    pvVar4 = *ppvVar2;
    lVar8 = (long)*(int *)((long)pvVar4 + 8);
    if ((puVar10 + (long)(int)uVar3 * 2 != (uint *)((long)pvVar4 + lVar8 * 8)) &&
       (lVar9 = *(int *)((long)pvVar4 + 0xc) - lVar8,
       lVar9 != 0 && lVar8 <= *(int *)((long)pvVar4 + 0xc))) {
      _memcpy((void *)((long)pvVar4 + lVar8 * 8 + 0x10),puVar10 + (long)(int)uVar3 * 2 + 4,lVar9 * 8
             );
    }
    if (*(int *)pDVar7 != -1) {
      if (*(int *)pDVar7 != 0) {
        LOCK();
        *(int *)pDVar7 = *(int *)pDVar7 + -1;
        local_32 = *(int *)pDVar7 != 0;
        UNLOCK();
        if ((bool)local_32) goto LAB_100d38f20;
      }
      QListData::dispose(pDVar7);
    }
  }
LAB_100d38f20:
  puVar10 = *ppvVar2;
  if (1 < *puVar10) {
    uVar3 = puVar10[2];
    pDVar7 = (Data *)QListData::detach((int)ppvVar2);
    pvVar4 = *ppvVar2;
    lVar8 = (long)*(int *)((long)pvVar4 + 8);
    if ((puVar10 + (long)(int)uVar3 * 2 != (uint *)((long)pvVar4 + lVar8 * 8)) &&
       (lVar9 = *(int *)((long)pvVar4 + 0xc) - lVar8,
       lVar9 != 0 && lVar8 <= *(int *)((long)pvVar4 + 0xc))) {
      _memcpy((void *)((long)pvVar4 + lVar8 * 8 + 0x10),puVar10 + (long)(int)uVar3 * 2 + 4,lVar9 * 8
             );
    }
    if (*(int *)pDVar7 != -1) {
      if (*(int *)pDVar7 != 0) {
        LOCK();
        *(int *)pDVar7 = *(int *)pDVar7 + -1;
        local_31 = *(int *)pDVar7 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d38fc1;
      }
      QListData::dispose(pDVar7);
    }
  }
LAB_100d38fc1:
  QListData::erase(ppvVar2);
  if (local_48 != (void *)0x0) {
    FUN_100d387a0(local_48);
    operator_delete(local_48);
  }
LAB_100d38fe1:
  *(undefined1 *)(param_1 + 0x30) = 0;
  return;
}

