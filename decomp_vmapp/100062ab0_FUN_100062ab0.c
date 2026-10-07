
void FUN_100062ab0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  long *in_RAX;
  long *local_28;
  
  local_28 = in_RAX;
  QMutex::lock();
  *(undefined1 *)(param_1 + 0x30) = 0;
  cVar4 = FUN_100795c70((long *)(param_1 + 0x48));
  if (((cVar4 != '\0') && (plVar2 = *(long **)(param_1 + 0x48), plVar2 != (long *)0x0)) &&
     (plVar2[2] != 0)) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    local_28 = (long *)0x0;
    FUN_100796540(plVar2[2],5,&DAT_1011ccba0,&local_28);
    if (local_28 != (long *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)(*local_28 + 0x10))();
      }
    }
    LOCK();
    plVar1 = plVar2 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  QMutex::unlock();
  return;
}

