
void FUN_10040b960(long param_1,char param_2,char param_3)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = -1;
  if (param_2 != '\0') {
    if (param_3 == '\0') {
      LOCK();
      plVar1 = (long *)(param_1 + 0x48);
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + 1;
      UNLOCK();
    }
    *(long *)(param_1 + 0x50) = lVar2;
    return;
  }
  if (param_3 == '\0') {
    LOCK();
    plVar1 = (long *)(param_1 + 0x48);
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  *(long *)(param_1 + 0x58) = lVar2;
  return;
}

