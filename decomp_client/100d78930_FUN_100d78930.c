
void FUN_100d78930(long param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  long local_30;
  long *local_28;
  
  *(undefined1 *)(param_1 + 0x24) = 1;
  if (*(int *)(param_1 + 0x20) == 1) {
    plVar2 = *(long **)(param_1 + 0x10);
    pcVar3 = *(code **)(*plVar2 + 0x68);
    FUN_100d77fc0(&local_30,param_1 + 0x28);
    (*pcVar3)(&local_28,plVar2,param_1 + 0x18,&local_30);
    if (local_28 != (long *)0x0) {
      LOCK();
      *(int *)(local_28 + 1) = (int)local_28[1] + 1;
      UNLOCK();
    }
    plVar2 = *(long **)(param_1 + 0x58);
    *(long **)(param_1 + 0x58) = local_28;
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    if (local_28 != (long *)0x0) {
      LOCK();
      plVar2 = local_28 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*local_28 + 0x10))();
      }
    }
    if (local_30 != 0) {
      _PrlHandle_Free();
    }
  }
  return;
}

