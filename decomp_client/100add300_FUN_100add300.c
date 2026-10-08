
void FUN_100add300(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  Data *pDVar4;
  Data *pDVar5;
  Data *local_30;
  undefined1 local_22;
  
  FUN_100adc3a0(&local_30,*(undefined8 *)(param_1 + 0x10));
  pDVar4 = local_30;
  if (*(int *)(local_30 + 8) != *(int *)(local_30 + 0xc)) {
    pDVar5 = local_30 + (long)*(int *)(local_30 + 8) * 8 + 0x10;
    do {
      lVar2 = *param_2;
      iVar1 = *(int *)(lVar2 + 8);
      if (iVar1 != *(int *)(lVar2 + 0xc)) {
        piVar3 = (int *)(lVar2 + 0x10 + (long)iVar1 * 8);
        lVar2 = (long)*(int *)(lVar2 + 0xc) * 8 + (long)iVar1 * -8;
        do {
          if (*piVar3 == *(int *)(*(long *)pDVar5 + 0x48)) goto LAB_100add37e;
          piVar3 = piVar3 + 2;
          lVar2 = lVar2 + -8;
        } while (lVar2 != 0);
      }
      FUN_1000bf010(param_2,*(long *)pDVar5 + 0x48);
      pDVar4 = local_30;
LAB_100add37e:
      pDVar5 = pDVar5 + 8;
    } while (pDVar5 != pDVar4 + (long)*(int *)(pDVar4 + 0xc) * 8 + 0x10);
  }
  if (*(int *)pDVar4 != -1) {
    if (*(int *)pDVar4 != 0) {
      LOCK();
      *(int *)pDVar4 = *(int *)pDVar4 + -1;
      UNLOCK();
      if (*(int *)pDVar4 != 0) {
        return;
      }
      local_22 = 0;
      pDVar4 = local_30;
    }
    QListData::dispose(pDVar4);
  }
  return;
}

