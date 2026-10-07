
long FUN_100602630(undefined8 *param_1,QString *param_2)

{
  int iVar1;
  Data *pDVar2;
  char cVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  Data *pDVar7;
  long lVar8;
  QArrayData *local_40;
  Data *local_38;
  undefined1 local_29;
  
  puVar4 = (uint *)*param_1;
  if (1 < *puVar4) {
    FUN_100603b20(param_1);
    puVar4 = (uint *)*param_1;
  }
  lVar5 = *(long *)(puVar4 + 4);
  lVar8 = 0;
  if (*(long *)(puVar4 + 4) != 0) {
    do {
      while (lVar6 = lVar5, cVar3 = operator<((QString *)(lVar6 + 0x18),param_2), cVar3 == '\0') {
        lVar5 = *(long *)(lVar6 + 8);
        lVar8 = lVar6;
        if (*(long *)(lVar6 + 8) == 0) goto LAB_1006026a6;
      }
      lVar5 = *(long *)(lVar6 + 0x10);
    } while (*(long *)(lVar6 + 0x10) != 0);
    lVar6 = lVar8;
    if (lVar8 != 0) {
LAB_1006026a6:
      cVar3 = operator<(param_2,(QString *)(lVar6 + 0x18));
      if (cVar3 == '\0') {
        return lVar6 + 0x20;
      }
    }
  }
  local_40 = (QArrayData *)PTR_shared_null_100ba20d0;
  local_38 = (Data *)PTR_shared_null_100ba2188;
  lVar5 = FUN_100603a30(param_1,param_2,&local_40);
  pDVar2 = local_38;
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100602750;
    }
    iVar1 = *(int *)(local_38 + 0xc);
    if (iVar1 != *(int *)(local_38 + 8)) {
      lVar8 = (long)*(int *)(local_38 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = local_38 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar7 != (void *)0x0) {
          operator_delete(*(void **)pDVar7);
        }
        pDVar7 = pDVar7 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose(pDVar2);
  }
LAB_100602750:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return lVar5 + 0x20;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return lVar5 + 0x20;
}

