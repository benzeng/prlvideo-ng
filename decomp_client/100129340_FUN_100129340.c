
long * FUN_100129340(long *param_1,long *param_2,byte param_3)

{
  byte bVar1;
  long lVar2;
  int *piVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar2 = *(long *)(*param_2 + 0x10);
  lVar7 = 0;
  if (lVar2 != 0) {
    do {
      while (lVar6 = lVar2, bVar1 = *(byte *)(lVar6 + 0x18), param_3 <= bVar1) {
        lVar2 = *(long *)(lVar6 + 8);
        lVar7 = lVar6;
        if (*(long *)(lVar6 + 8) == 0) goto LAB_1001293a9;
      }
      lVar2 = *(long *)(lVar6 + 0x10);
    } while (*(long *)(lVar6 + 0x10) != 0);
    if (lVar7 != 0) {
      bVar1 = *(byte *)(lVar7 + 0x18);
      lVar6 = lVar7;
LAB_1001293a9:
      if ((bVar1 <= param_3) && (lVar6 != *param_2 + 8)) {
        piVar3 = *(int **)(lVar6 + 0x20);
        *param_1 = (long)piVar3;
        if (*piVar3 != -1) {
          if (*piVar3 == 0) {
            QListData::detach((int)param_1);
            lVar2 = *param_1;
            lVar5 = (long)*(int *)(lVar2 + 8);
            lVar7 = *(long *)(lVar6 + 0x20);
            if ((lVar7 + (long)*(int *)(lVar7 + 8) * 8 != lVar2 + lVar5 * 8) &&
               (lVar6 = *(int *)(lVar2 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(lVar2 + 0xc))
               ) {
              _memcpy((void *)(lVar2 + 0x10 + lVar5 * 8),
                      (void *)(lVar7 + 0x10 + (long)*(int *)(lVar7 + 8) * 8),lVar6 * 8);
            }
          }
          else {
            LOCK();
            *piVar3 = *piVar3 + 1;
            UNLOCK();
          }
        }
        goto LAB_10012941e;
      }
    }
  }
  *param_1 = (long)PTR_shared_null_1021e15e8;
LAB_10012941e:
  puVar4 = PTR_shared_null_1021e15e8;
  if (*(int *)PTR_shared_null_1021e15e8 != -1) {
    if (*(int *)PTR_shared_null_1021e15e8 != 0) {
      LOCK();
      *(int *)PTR_shared_null_1021e15e8 = *(int *)PTR_shared_null_1021e15e8 + -1;
      UNLOCK();
      if (*(int *)puVar4 != 0) {
        return param_1;
      }
    }
    QListData::dispose((Data *)PTR_shared_null_1021e15e8);
  }
  return param_1;
}

