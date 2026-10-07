
void FUN_1007978e0(undefined8 param_1,long *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  if (*(char *)(param_3 + 0x70) != '\0') {
    lVar3 = *(long *)(*param_2 + 0x10);
    if (*(long *)(lVar3 + 0x38) != param_3) {
      lVar5 = 0;
      if (*param_2 != 0) {
        lVar5 = lVar3;
      }
      uVar4 = lVar5 + 0x10;
      if ((uVar4 & 1) == 0) {
        QReadWriteLock::lockForWrite();
        uVar4 = uVar4 | 1;
        lVar3 = *(long *)(*param_2 + 0x10);
      }
      *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + -1;
      *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(param_3 + 0x68);
      *(undefined8 *)(param_3 + 0x68) = 0;
      *(undefined1 *)(param_3 + 0x70) = 0;
      plVar2 = *(long **)(param_3 + 0x60);
      *(undefined8 *)(param_3 + 0x60) = 0;
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar1 = plVar2 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      if (*(long *)(*(long *)(*param_2 + 0x10) + 0x28) == 0) {
        *(undefined8 *)(*(long *)(*param_2 + 0x10) + 0x30) = 0;
      }
      if ((uVar4 & 1) != 0) {
        QReadWriteLock::unlock();
        return;
      }
    }
  }
  return;
}

