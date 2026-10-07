
void FUN_10053f0a0(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  long *local_28;
  long *local_20;
  
  local_20 = (long *)0x0;
  cVar2 = FUN_10053e980(param_1,param_2,&local_20);
  if (cVar2 == '\0') {
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","InvSharingHost",2,"mounter: there is no such share (id = %u)",
                    param_2 & 0xffffffff);
    }
  }
  else {
    lVar3 = 0;
    if (local_20 != (long *)0x0) {
      lVar3 = local_20[2];
    }
    FUN_10053a340(lVar3,0);
    FUN_10053eaf0(&local_28,param_1,param_2 & 0xffffffff);
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
  }
  if (local_20 != (long *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010053f161. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*local_20 + 0x10))();
      return;
    }
  }
  return;
}

