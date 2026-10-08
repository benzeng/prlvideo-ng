
void FUN_100035930(long param_1)

{
  int iVar1;
  long *plVar2;
  
  if (*(char *)(param_1 + 0x39) != '\0') {
    plVar2 = (long *)FUN_100036410(param_1 + 0x18);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))(plVar2);
    }
    iVar1 = *(int *)(*(long *)(param_1 + 0x20) + 0x10);
    if (*(int *)(*(long *)(param_1 + 0x18) + 0x14) == 0) {
      if (-1 < iVar1) {
        QTimer::stop();
        FUN_1000351d0(param_1);
        return;
      }
    }
    else if (iVar1 < 0) {
      QTimer::start((int)*(long *)(param_1 + 0x20));
      return;
    }
  }
  return;
}

