
char FUN_10053efa0(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  long lVar4;
  long *local_40;
  long *local_38;
  
  local_38 = (long *)0x0;
  cVar3 = FUN_10053e790(param_1,param_2,&local_38);
  plVar2 = local_38;
  if (cVar3 == '\0') {
    cVar3 = '\0';
  }
  else {
    lVar4 = 0;
    if (local_38 != (long *)0x0) {
      lVar4 = local_38[2];
    }
    cVar3 = FUN_10053b390(lVar4,param_3,param_4,param_5,param_6);
    if (cVar3 == '\0') {
      FUN_10053eaf0(&local_40,param_1,param_2 & 0xffffffff);
      if (local_40 != (long *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)(*local_40 + 0x10))();
        }
      }
    }
  }
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  return cVar3;
}

