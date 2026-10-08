
void FUN_100a2c260(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  
  *param_1 = &PTR_FUN_102280fa8;
  plVar1 = (long *)param_1[2];
  if (plVar1 != (long *)0x0) {
    if (plVar1[2] != 0) {
      lVar2 = *plVar1;
      plVar3 = (long *)plVar1[1];
      lVar4 = *plVar3;
      *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar2 + 8);
      **(long **)(lVar2 + 8) = lVar4;
      plVar1[2] = 0;
      while (plVar3 != plVar1) {
        plVar5 = (long *)plVar3[1];
        pvVar6 = (void *)plVar3[3];
        if (pvVar6 != (void *)0x0) {
          if ((void *)plVar3[4] != pvVar6) {
            plVar3[4] = (long)pvVar6;
          }
          operator_delete(pvVar6);
        }
        operator_delete(plVar3);
        plVar3 = plVar5;
      }
    }
    operator_delete(plVar1);
  }
  operator_delete(param_1);
  return;
}

