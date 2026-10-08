
long * FUN_1002605e0(long *param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  Data *pDVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar3 = PTR_shared_null_1021e15e8;
  *param_1 = (long)PTR_shared_null_1021e15e8;
  if (*(int *)(puVar3 + 4) < *(int *)(*param_2 + 4)) {
    if (*(uint *)puVar3 < 2) {
      QListData::realloc((int)param_1);
    }
    else {
      iVar2 = *(int *)(puVar3 + 8);
      pDVar4 = (Data *)QListData::detach((int)param_1);
      lVar7 = *param_1;
      lVar5 = (long)*(int *)(lVar7 + 8);
      puVar1 = (undefined *)(lVar7 + 0x10 + lVar5 * 8);
      if ((puVar3 + (long)iVar2 * 8 + 0x10 != puVar1) &&
         (lVar6 = *(int *)(lVar7 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(lVar7 + 0xc))) {
        _memcpy(puVar1,puVar3 + (long)iVar2 * 8 + 0x10,lVar6 * 8);
      }
      if (*(int *)pDVar4 != -1) {
        if (*(int *)pDVar4 != 0) {
          LOCK();
          *(int *)pDVar4 = *(int *)pDVar4 + -1;
          UNLOCK();
          if (*(int *)pDVar4 != 0) goto LAB_100260673;
        }
        QListData::dispose(pDVar4);
      }
    }
  }
LAB_100260673:
  lVar7 = *param_2;
  lVar5 = 0;
  if (0 < *(int *)(lVar7 + 4)) {
    lVar6 = 0;
    do {
      FUN_100129840(param_1,lVar7 + *(long *)(lVar7 + 0x10) + lVar5);
      lVar6 = lVar6 + 1;
      lVar7 = *param_2;
      lVar5 = lVar5 + 4;
    } while (lVar6 < *(int *)(lVar7 + 4));
  }
  return param_1;
}

