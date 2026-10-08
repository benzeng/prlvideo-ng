
void FUN_100df1ef0(long *param_1,long *param_2)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  piVar2 = (int *)*param_2;
  *param_1 = (long)piVar2;
  if (*piVar2 != -1) {
    if (*piVar2 == 0) {
      QListData::detach((int)param_1);
      lVar3 = *param_1;
      iVar1 = *(int *)(lVar3 + 8);
      if (iVar1 != *(int *)(lVar3 + 0xc)) {
        puVar4 = (undefined8 *)(*param_2 + 0x10 + (long)*(int *)(*param_2 + 8) * 8);
        puVar5 = (undefined8 *)(lVar3 + 0x10 + (long)iVar1 * 8);
        lVar3 = (long)*(int *)(lVar3 + 0xc) * 8 + (long)iVar1 * -8;
        do {
          piVar2 = (int *)*puVar4;
          *puVar5 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            UNLOCK();
          }
          puVar5 = puVar5 + 1;
          puVar4 = puVar4 + 1;
          lVar3 = lVar3 + -8;
        } while (lVar3 != 0);
      }
    }
    else {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
  }
  return;
}

