
long * FUN_10039d210(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined8 uVar4;
  Data *pDVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  Data *pDVar8;
  long lVar9;
  long lVar10;
  int local_38;
  undefined1 local_31;
  
  puVar3 = (uint *)*param_1;
  if (*puVar3 < 2) {
    puVar6 = (undefined8 *)QListData::append();
    puVar7 = operator_new(0x40);
    puVar7[7] = param_2[7];
    puVar7[6] = param_2[6];
    puVar7[5] = param_2[5];
    puVar7[4] = param_2[4];
    puVar7[3] = param_2[3];
    puVar7[2] = param_2[2];
    uVar4 = *param_2;
    puVar7[1] = param_2[1];
    *puVar7 = uVar4;
    *puVar6 = puVar7;
    return param_1;
  }
  local_38 = 0x7fffffff;
  uVar1 = puVar3[2];
  pDVar5 = (Data *)QListData::detach_grow((int *)param_1,(int)&local_38);
  lVar10 = *param_1;
  FUN_10039d130(lVar10 + 0x10 + (long)*(int *)(lVar10 + 8) * 8,
                lVar10 + 0x10 + ((long)local_38 + (long)*(int *)(lVar10 + 8)) * 8,
                puVar3 + (long)(int)uVar1 * 2 + 4);
  lVar10 = *param_1;
  FUN_10039d130(lVar10 + 0x18 + ((long)*(int *)(lVar10 + 8) + (long)local_38) * 8,
                lVar10 + 0x10 + (long)*(int *)(lVar10 + 0xc) * 8,
                puVar3 + ((long)(int)uVar1 + (long)local_38) * 2 + 4);
  if (*(int *)pDVar5 != -1) {
    if (*(int *)pDVar5 != 0) {
      LOCK();
      *(int *)pDVar5 = *(int *)pDVar5 + -1;
      local_31 = *(int *)pDVar5 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10039d30f;
    }
    iVar2 = *(int *)(pDVar5 + 0xc);
    if (iVar2 != *(int *)(pDVar5 + 8)) {
      lVar10 = (long)*(int *)(pDVar5 + 8) * 8 + (long)iVar2 * -8;
      pDVar8 = pDVar5 + (long)iVar2 * 8 + 8;
      do {
        if (*(void **)pDVar8 != (void *)0x0) {
          operator_delete(*(void **)pDVar8);
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose(pDVar5);
  }
LAB_10039d30f:
  lVar10 = *param_1;
  iVar2 = *(int *)(lVar10 + 8);
  lVar9 = (long)local_38;
  puVar6 = operator_new(0x40);
  puVar6[7] = param_2[7];
  puVar6[6] = param_2[6];
  puVar6[5] = param_2[5];
  puVar6[4] = param_2[4];
  puVar6[3] = param_2[3];
  puVar6[2] = param_2[2];
  uVar4 = *param_2;
  puVar6[1] = param_2[1];
  *puVar6 = uVar4;
  *(undefined8 **)(lVar10 + 0x10 + (lVar9 + iVar2) * 8) = puVar6;
  return param_1;
}

