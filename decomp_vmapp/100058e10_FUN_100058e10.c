
void FUN_100058e10(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  bool bVar7;
  int *local_8f0;
  int *local_8e8;
  int *local_8e0;
  uint local_8d8;
  int *local_8d0;
  undefined1 local_8c8 [8];
  undefined4 local_8c0;
  long *local_8bc;
  undefined1 local_31;
  
  lVar2 = *(long *)(param_1 + 0x10);
  QMutex::lock();
  FUN_1000597d0(&local_8d0,lVar2 + 0x78);
  QMutex::unlock();
  FUN_1000597d0(&local_8f0,&local_8d0);
  local_8e8 = local_8f0 + (long)local_8f0[2] * 2 + 4;
  local_8e0 = local_8f0 + (long)local_8f0[3] * 2 + 4;
  local_8d8 = 1;
  if (local_8f0[2] != local_8f0[3]) {
    do {
      plVar3 = (long *)**(long **)local_8e8;
      if (plVar3 != (long *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      if (local_8d8 != 0) {
        lVar2 = *(long *)(param_1 + 0x18);
        if (plVar3[0xd] == lVar2) {
          lVar4 = plVar3[4];
          local_8c0 = 9;
          local_8bc = plVar3;
          uVar5 = FUN_1002a6120(lVar2,1,1);
          FUN_1002a5a50(uVar5,0,local_8c8,0x894);
          FUN_1004c07d0(lVar4,lVar2,0);
          plVar3[0xd] = 0;
        }
        local_8d8 = 0;
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
      local_8e8 = local_8e8 + 2;
      uVar6 = local_8d8 ^ 1;
      bVar7 = local_8d8 != 1;
      local_8d8 = uVar6;
    } while ((bVar7) && (local_8e8 != local_8e0));
  }
  if (*local_8f0 != -1) {
    if (*local_8f0 != 0) {
      LOCK();
      *local_8f0 = *local_8f0 + -1;
      local_31 = *local_8f0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100058fb9;
    }
    FUN_100059b00(&local_8f0,local_8f0);
  }
LAB_100058fb9:
  if (*local_8d0 != -1) {
    if (*local_8d0 != 0) {
      LOCK();
      *local_8d0 = *local_8d0 + -1;
      UNLOCK();
      if (*local_8d0 != 0) {
        return;
      }
      local_31 = 0;
    }
    FUN_100059b00(&local_8d0,local_8d0);
  }
  return;
}

