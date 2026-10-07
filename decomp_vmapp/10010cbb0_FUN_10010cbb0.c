
void FUN_10010cbb0(undefined8 *param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  uint *puVar5;
  uint uVar6;
  
  if (-1 < param_2) {
    puVar5 = (uint *)*param_1;
    uVar6 = puVar5[2];
    if (param_2 < (int)(puVar5[3] - uVar6)) {
      if (1 < *puVar5) {
        FUN_10010d310(param_1,puVar5[1]);
        puVar5 = (uint *)*param_1;
        uVar6 = puVar5[2];
      }
      plVar2 = *(long **)(puVar5 + ((long)param_2 + (long)(int)uVar6) * 2 + 4);
      if (plVar2 != (long *)0x0) {
        plVar3 = (long *)*plVar2;
        if (plVar3 != (long *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)(*plVar3 + 0x10))();
          }
        }
        operator_delete(plVar2);
      }
      QListData::remove((int)param_1);
      return;
    }
  }
  return;
}

