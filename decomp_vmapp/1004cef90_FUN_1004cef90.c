
long * FUN_1004cef90(long *param_1,long param_2,int param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  QMutex::lock();
  lVar2 = *(long *)(param_2 + 8);
  if (*(int *)(lVar2 + 8) != *(int *)(lVar2 + 0xc)) {
    puVar4 = (undefined8 *)(lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8);
    do {
      plVar3 = *(long **)*puVar4;
      *param_1 = (long)plVar3;
      if (plVar3 != (long *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      if ((int)plVar3[0xb] == param_3) goto LAB_1004cf025;
      LOCK();
      plVar1 = plVar3 + 1;
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*plVar3 + 0x10))();
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 != (undefined8 *)
                       (*(long *)(param_2 + 8) + 0x10 +
                       (long)*(int *)(*(long *)(param_2 + 8) + 0xc) * 8));
  }
  *param_1 = 0;
LAB_1004cf025:
  QMutex::unlock();
  return param_1;
}

