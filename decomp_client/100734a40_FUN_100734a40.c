
long FUN_100734a40(long *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined8 in_RAX;
  Data *pDVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  int local_38;
  undefined4 uStack_34;
  
  _local_38 = CONCAT44((int)((ulong)in_RAX >> 0x20),param_2);
  lVar6 = *param_1;
  iVar1 = *(int *)(lVar6 + 8);
  pDVar2 = (Data *)QListData::detach_grow((int *)param_1,(int)&local_38);
  lVar8 = *param_1;
  iVar3 = *(int *)(lVar8 + 8);
  lVar9 = (long)local_38;
  if (lVar9 != 0) {
    puVar5 = (undefined8 *)(lVar8 + 0x10 + (long)iVar3 * 8);
    puVar7 = (undefined8 *)(lVar6 + 0x10 + (long)iVar1 * 8);
    lVar8 = lVar9 * 8;
    do {
      *puVar5 = *puVar7;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
      lVar8 = lVar8 + -8;
    } while (lVar8 != 0);
    lVar8 = *param_1;
    iVar3 = *(int *)(lVar8 + 8);
  }
  lVar4 = (long)iVar3 + (long)param_3 + lVar9;
  if (lVar4 != *(int *)(lVar8 + 0xc)) {
    puVar5 = (undefined8 *)(lVar6 + 0x10 + (iVar1 + lVar9) * 8);
    puVar7 = (undefined8 *)(lVar8 + 0x10 + lVar4 * 8);
    lVar6 = (long)*(int *)(lVar8 + 0xc) * 8 + (iVar3 + lVar9 + (long)param_3) * -8;
    do {
      *puVar7 = *puVar5;
      puVar7 = puVar7 + 1;
      puVar5 = puVar5 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  if (*(int *)pDVar2 != -1) {
    if (*(int *)pDVar2 != 0) {
      LOCK();
      *(int *)pDVar2 = *(int *)pDVar2 + -1;
      UNLOCK();
      _local_38 = CONCAT17(*(int *)pDVar2 != 0,_local_38);
      if (*(int *)pDVar2 != 0) goto LAB_100734b15;
    }
    QListData::dispose(pDVar2);
  }
LAB_100734b15:
  return *param_1 + 0x10 + ((long)local_38 + (long)*(int *)(*param_1 + 8)) * 8;
}

