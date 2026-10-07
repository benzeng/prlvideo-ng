
long FUN_10000c800(long *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined8 in_RAX;
  Data *pDVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  Data *pDVar10;
  long lVar11;
  QArrayData *pQVar12;
  int local_38;
  undefined4 local_34;
  
  _local_38 = CONCAT44((int)((ulong)in_RAX >> 0x20),param_2);
  lVar5 = *param_1;
  iVar1 = *(int *)(lVar5 + 8);
  pDVar3 = (Data *)QListData::detach_grow((int *)param_1,(int)&local_38);
  lVar4 = *param_1;
  iVar6 = *(int *)(lVar4 + 8);
  lVar11 = 0;
  if ((long)local_38 != 0) {
    puVar7 = (undefined8 *)(lVar4 + 0x10 + (long)iVar6 * 8);
    puVar8 = (undefined8 *)(lVar5 + 0x10 + (long)iVar1 * 8);
    lVar4 = (long)local_38 << 3;
    do {
      piVar2 = (int *)*puVar8;
      *puVar7 = piVar2;
      if (1 < *piVar2 + 1U) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
        _local_38 = CONCAT15(*piVar2 != 0,_local_38);
      }
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
    lVar4 = *param_1;
    iVar6 = *(int *)(lVar4 + 8);
    lVar11 = (long)local_38;
  }
  lVar9 = (long)iVar6 + (long)param_3 + lVar11;
  if (lVar9 != *(int *)(lVar4 + 0xc)) {
    puVar7 = (undefined8 *)(lVar5 + 0x10 + (iVar1 + lVar11) * 8);
    puVar8 = (undefined8 *)(lVar4 + 0x10 + lVar9 * 8);
    lVar5 = (long)*(int *)(lVar4 + 0xc) * 8 + (iVar6 + lVar11 + (long)param_3) * -8;
    do {
      piVar2 = (int *)*puVar7;
      *puVar8 = piVar2;
      if (1 < *piVar2 + 1U) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
        _local_38 = CONCAT17(*piVar2 != 0,_local_38);
      }
      puVar8 = puVar8 + 1;
      puVar7 = puVar7 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  if (*(int *)pDVar3 != -1) {
    if (*(int *)pDVar3 != 0) {
      LOCK();
      *(int *)pDVar3 = *(int *)pDVar3 + -1;
      UNLOCK();
      _local_38 = CONCAT16(*(int *)pDVar3 != 0,_local_38);
      if (*(int *)pDVar3 != 0) goto LAB_10000c971;
    }
    iVar1 = *(int *)(pDVar3 + 0xc);
    if (iVar1 != *(int *)(pDVar3 + 8)) {
      lVar5 = (long)*(int *)(pDVar3 + 8) * 8 + (long)iVar1 * -8;
      pDVar10 = pDVar3 + (long)iVar1 * 8 + 8;
      do {
        pQVar12 = *(QArrayData **)pDVar10;
        if (*(int *)pQVar12 == 0) {
LAB_10000c950:
          QArrayData::deallocate(pQVar12,2,8);
        }
        else if (*(int *)pQVar12 != -1) {
          LOCK();
          *(int *)pQVar12 = *(int *)pQVar12 + -1;
          UNLOCK();
          _local_38 = CONCAT14(*(int *)pQVar12 != 0,local_38);
          if (*(int *)pQVar12 == 0) {
            pQVar12 = *(QArrayData **)pDVar10;
            goto LAB_10000c950;
          }
        }
        pDVar10 = pDVar10 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar3);
  }
LAB_10000c971:
  return *param_1 + 0x10 + ((long)local_38 + (long)*(int *)(*param_1 + 8)) * 8;
}

