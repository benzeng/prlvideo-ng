
void FUN_10004f880(long param_1,void *param_2,ulong param_3)

{
  long *plVar1;
  int iVar2;
  int *piVar3;
  void *pvVar4;
  long lVar5;
  int *piVar6;
  int *local_68;
  int *local_60;
  int *local_58;
  undefined4 local_50;
  long *local_48;
  int *local_40;
  undefined1 local_31;
  
  FUN_100519b50(&local_40,param_1 + 0x28);
  piVar6 = local_40;
  if (local_40[3] == local_40[2]) {
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("UIEMU","vm",1,"Cannot send UIEMU data: no clients connected");
    }
  }
  else {
    pvVar4 = operator_new__(param_3);
    local_48 = operator_new(0x18);
    *(undefined4 *)(local_48 + 1) = 1;
    local_48[2] = (long)pvVar4;
    *local_48 = (long)&PTR_FUN_100bef320;
    _memcpy(pvVar4,param_2,param_3);
    local_68 = piVar6;
    if (*piVar6 != -1) {
      if (*piVar6 == 0) {
        QListData::detach((int)&local_68);
        iVar2 = local_68[2];
        if (iVar2 != local_68[3]) {
          local_40 = local_40 + (long)local_40[2] * 2 + 4;
          piVar6 = local_68 + (long)iVar2 * 2 + 4;
          lVar5 = (long)local_68[3] * 8 + (long)iVar2 * -8;
          do {
            piVar3 = *(int **)local_40;
            *(int **)piVar6 = piVar3;
            if (1 < *piVar3 + 1U) {
              LOCK();
              *piVar3 = *piVar3 + 1;
              local_31 = *piVar3 != 0;
              UNLOCK();
            }
            piVar6 = piVar6 + 2;
            local_40 = local_40 + 2;
            lVar5 = lVar5 + -8;
          } while (lVar5 != 0);
        }
      }
      else {
        LOCK();
        *piVar6 = *piVar6 + 1;
        local_31 = *piVar6 != 0;
        UNLOCK();
      }
    }
    local_60 = local_68 + (long)local_68[2] * 2 + 4;
    local_58 = local_68 + (long)local_68[3] * 2 + 4;
    if (local_68[2] != local_68[3]) {
      do {
        local_50 = 1;
        FUN_100519b00(param_1 + 0x28,local_60,&local_48,param_3 & 0xffffffff,0,0,0,0);
        local_60 = local_60 + 2;
      } while (local_60 != local_58);
    }
    local_50 = 1;
    FUN_100037320(&local_68);
    if (local_48 != (long *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)(*local_48 + 0x10))();
      }
    }
  }
  FUN_100037320(&local_40);
  return;
}

