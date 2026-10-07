
void FUN_1005353d0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  long *local_50;
  long *local_48;
  int *local_40;
  undefined1 local_31;
  
  QMutex::lock();
  *(undefined1 *)(param_1 + 5) = 0;
  FUN_100541580(&local_40,param_1 + 2);
  FUN_100541020(param_1 + 2);
  lVar2 = param_1[4];
  param_1[4] = 0;
  plVar3 = (long *)param_1[3];
  param_1[3] = 0;
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  QMutex::unlock();
  if (lVar2 != 0) {
    FUN_1004c07d0(*param_1,lVar2,0xf000001c);
  }
  if (local_40[3] != local_40[2]) {
    do {
      FUN_100541840(&local_48,&local_40);
      plVar3 = local_48;
      pcVar4 = *(code **)(local_48[2] + 8);
      if (pcVar4 != (code *)0x0) {
        local_50 = (long *)0x0;
        (*pcVar4)(*(undefined8 *)(local_48[2] + 0x10),&local_50);
        if (local_50 != (long *)0x0) {
          LOCK();
          plVar1 = local_50 + 1;
          lVar2 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
            (**(code **)(*local_50 + 0x10))();
          }
        }
      }
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar2 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    } while (local_40[3] != local_40[2]);
  }
  if (*local_40 != -1) {
    if (*local_40 != 0) {
      LOCK();
      *local_40 = *local_40 + -1;
      UNLOCK();
      if (*local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    FUN_1005417b0(&local_40,local_40);
  }
  return;
}

