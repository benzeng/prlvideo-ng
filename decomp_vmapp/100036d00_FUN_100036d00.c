
long * FUN_100036d00(long *param_1,undefined8 *param_2,int param_3)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  uint *puVar5;
  long *plVar6;
  
  puVar5 = (uint *)*param_2;
  if (1 < *puVar5) {
    FUN_100037670(param_2,puVar5[1]);
    puVar5 = (uint *)*param_2;
  }
  uVar2 = puVar5[2];
  plVar6 = *(long **)(puVar5 + ((long)param_3 + (long)(int)uVar2) * 2 + 4);
  lVar3 = *plVar6;
  *param_1 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
    plVar6 = *(long **)(puVar5 + ((long)param_3 + (long)(int)uVar2) * 2 + 4);
  }
  if (plVar6 != (long *)0x0) {
    plVar4 = (long *)*plVar6;
    if (plVar4 != (long *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
    operator_delete(plVar6);
  }
  QListData::remove((int)param_2);
  return param_1;
}

