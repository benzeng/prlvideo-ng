
undefined8 * FUN_100115e80(undefined8 *param_1)

{
  int iVar1;
  int *piVar2;
  Data *pDVar3;
  QArrayData *pQVar4;
  long lVar5;
  Data *local_38;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  
  FUN_100114f00(&local_38);
  if (1 < *(uint *)local_38) {
    FUN_100036c40(&local_38,*(uint *)(local_38 + 4));
  }
  piVar2 = *(int **)(local_38 + (long)*(int *)(local_38 + 0xc) * 8 + 8);
  *param_1 = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    local_2d = *piVar2 != 0;
    UNLOCK();
  }
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return param_1;
      }
      local_2c = 0;
    }
    iVar1 = *(int *)(local_38 + 0xc);
    if (iVar1 != *(int *)(local_38 + 8)) {
      lVar5 = (long)*(int *)(local_38 + 8) * 8 + (long)iVar1 * -8;
      pDVar3 = local_38 + (long)iVar1 * 8 + 8;
      do {
        pQVar4 = *(QArrayData **)pDVar3;
        if (*(int *)pQVar4 == 0) {
LAB_100115f40:
          QArrayData::deallocate(pQVar4,2,8);
        }
        else if (*(int *)pQVar4 != -1) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          local_2b = *(int *)pQVar4 != 0;
          UNLOCK();
          if (!(bool)local_2b) {
            pQVar4 = *(QArrayData **)pDVar3;
            goto LAB_100115f40;
          }
        }
        pDVar3 = pDVar3 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(local_38);
  }
  return param_1;
}

