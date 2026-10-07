
void FUN_100051cf0(long param_1,int param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  long *plVar5;
  uint uVar6;
  bool bVar7;
  int *local_60;
  int *local_58;
  int *local_50;
  uint local_48;
  int *local_40;
  undefined1 local_31;
  
  if (param_2 != 3) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  plVar5 = operator_new(0x20);
  *(undefined4 *)(plVar5 + 1) = 1;
  plVar5[2] = param_1;
  *plVar5 = (long)&PTR_FUN_100bef448;
  *(undefined1 *)(plVar5 + 3) = 0;
  LOCK();
  *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
  UNLOCK();
  cVar4 = FUN_100041750(uVar2,plVar5);
  if (cVar4 == '\0') {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  LOCK();
  plVar1 = plVar5 + 1;
  lVar3 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar3 == 1) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  FUN_1000412f0(*(undefined8 *)(param_1 + 0x58));
  QMutex::lock();
  FUN_1000597d0(&local_40,param_1 + 0x78);
  QMutex::unlock();
  FUN_1000597d0(&local_60,&local_40);
  local_58 = local_60 + (long)local_60[2] * 2 + 4;
  local_50 = local_60 + (long)local_60[3] * 2 + 4;
  local_48 = 1;
  if (local_60[2] != local_60[3]) {
    do {
      plVar5 = (long *)**(long **)local_58;
      if (plVar5 != (long *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      if (local_48 != 0) {
        if (plVar5[0xd] != 0) {
          FUN_1004c07d0(plVar5[4],plVar5[0xd],0xf0000020);
        }
        plVar5[0xd] = 0;
        local_48 = 0;
      }
      if (plVar5 != (long *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
      local_58 = local_58 + 2;
      uVar6 = local_48 ^ 1;
      bVar7 = local_48 != 1;
      local_48 = uVar6;
    } while ((bVar7) && (local_58 != local_50));
  }
  if (*local_60 != -1) {
    if (*local_60 != 0) {
      LOCK();
      *local_60 = *local_60 + -1;
      local_31 = *local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100051eb2;
    }
    FUN_100059b00(&local_60,local_60);
  }
LAB_100051eb2:
  QMutex::lock();
  FUN_1000587e0(param_1 + 0x78);
  QMutex::unlock();
  QMutex::lock();
  lVar3 = *(long *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  QMutex::unlock();
  if (lVar3 != 0) {
    FUN_1004c07d0(param_1,lVar3,0xf0000020);
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
    FUN_100059b00(&local_40,local_40);
  }
  return;
}

