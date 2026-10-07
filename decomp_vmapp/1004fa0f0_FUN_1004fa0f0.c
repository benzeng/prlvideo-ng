
void FUN_1004fa0f0(Data *param_1)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  Data *pDVar6;
  long lVar7;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 != *(int *)(param_1 + 8)) {
    lVar7 = (long)*(int *)(param_1 + 8) * 8 + (long)iVar2 * -8;
    pDVar6 = param_1 + (long)iVar2 * 8 + 8;
    do {
      plVar3 = *(long **)pDVar6;
      if (plVar3 != (long *)0x0) {
        plVar4 = (long *)*plVar3;
        if (plVar4 != (long *)0x0) {
          LOCK();
          plVar1 = plVar4 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)(*plVar4 + 0x10))();
          }
        }
        operator_delete(plVar3);
      }
      pDVar6 = pDVar6 + -8;
      lVar7 = lVar7 + 8;
    } while (lVar7 != 0);
  }
  QListData::dispose(param_1);
  return;
}

