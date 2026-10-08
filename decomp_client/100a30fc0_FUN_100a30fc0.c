
void FUN_100a30fc0(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long local_20;
  
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("CPTOOL","CPInterceptor",3,"CPTOOL_ACCEPT_BUFFER is received");
  }
  local_20 = param_1 + 0xa8;
  FUN_100ab03a0();
  lVar2 = *param_2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  plVar3 = *(long **)(param_1 + 0x168);
  *(long *)(param_1 + 0x168) = lVar2;
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  FUN_100ab48e0(param_1 + 0xe8);
  FUN_100ab03c0(&local_20);
  return;
}

