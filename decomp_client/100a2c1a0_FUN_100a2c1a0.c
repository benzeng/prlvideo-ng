
void FUN_100a2c1a0(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  
  if (param_1[2] != 0) {
    lVar1 = *param_1;
    plVar2 = (long *)param_1[1];
    lVar3 = *plVar2;
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar3;
    param_1[2] = 0;
    while (plVar2 != param_1) {
      plVar4 = (long *)plVar2[1];
      pvVar5 = (void *)plVar2[3];
      if (pvVar5 != (void *)0x0) {
        if ((void *)plVar2[4] != pvVar5) {
          plVar2[4] = (long)pvVar5;
        }
        operator_delete(pvVar5);
      }
      operator_delete(plVar2);
      plVar2 = plVar4;
    }
  }
  return;
}

