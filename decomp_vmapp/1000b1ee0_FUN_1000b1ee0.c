
bool FUN_1000b1ee0(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  long *local_18;
  
  cVar3 = FUN_1000a0730();
  if (cVar3 == '\0') {
    bVar5 = false;
    FUN_1008e3970("","vm",0,"ShutdownTools are not available");
  }
  else {
    local_18 = (long *)0x0;
    iVar4 = FUN_1000a05b0(param_1,1,&local_18);
    bVar5 = -1 < iVar4;
    if (local_18 != (long *)0x0) {
      LOCK();
      plVar1 = local_18 + 1;
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*local_18 + 0x10))();
      }
    }
  }
  return bVar5;
}

