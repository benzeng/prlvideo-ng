
QListData * FUN_1001d3590(QListData *param_1,long *param_2)

{
  int iVar1;
  Data *pDVar2;
  int *piVar3;
  Data *pDVar4;
  undefined8 *puVar5;
  
  if (*(int *)(*param_2 + 0xc) != *(int *)(*param_2 + 8)) {
    pDVar4 = param_1->field0_0x0;
    if (*(uint *)(pDVar4 + 0xc) == *(uint *)(pDVar4 + 8)) {
      FUN_1000e5fc0(param_1,param_2);
    }
    else {
      if (*(uint *)pDVar4 < 2) {
        pDVar4 = (Data *)QListData::append(param_1);
      }
      else {
        pDVar4 = (Data *)FUN_100034280(param_1,0x7fffffff);
      }
      pDVar2 = param_1->field0_0x0;
      iVar1 = *(int *)(pDVar2 + 0xc);
      if (pDVar4 != pDVar2 + (long)iVar1 * 8 + 0x10) {
        puVar5 = (undefined8 *)(*param_2 + 0x10 + (long)*(int *)(*param_2 + 8) * 8);
        pDVar4 = pDVar4 + -0x10;
        do {
          piVar3 = (int *)*puVar5;
          *(int **)(pDVar4 + 0x10) = piVar3;
          if (1 < *piVar3 + 1U) {
            LOCK();
            *piVar3 = *piVar3 + 1;
            UNLOCK();
          }
          puVar5 = puVar5 + 1;
          pDVar4 = pDVar4 + 8;
        } while (pDVar2 + (long)iVar1 * 8 != pDVar4);
      }
    }
  }
  return param_1;
}

