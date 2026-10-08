
void FUN_1000f0cc0(long param_1)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  long lVar4;
  int *piVar5;
  long local_38;
  int *local_30;
  int *local_28;
  undefined1 local_19;
  
  pcVar2 = *(code **)(param_1 + 0x28);
  local_38 = *(long *)(param_1 + 0x30);
  if (local_38 != 0) {
    _CFRetain();
  }
  (*pcVar2)(&local_30,&local_38,*(undefined8 *)(param_1 + 0x38));
  if (*(int **)(param_1 + 0x20) != local_30) {
    local_28 = local_30;
    if (*local_30 != -1) {
      if (*local_30 == 0) {
        QListData::detach((int)&local_28);
        iVar1 = local_28[2];
        if (iVar1 != local_28[3]) {
          local_30 = local_30 + (long)local_30[2] * 2 + 4;
          piVar5 = local_28 + (long)iVar1 * 2 + 4;
          lVar4 = (long)local_28[3] * 8 + (long)iVar1 * -8;
          do {
            piVar3 = *(int **)local_30;
            *(int **)piVar5 = piVar3;
            if (1 < *piVar3 + 1U) {
              LOCK();
              *piVar3 = *piVar3 + 1;
              local_19 = *piVar3 != 0;
              UNLOCK();
            }
            piVar5 = piVar5 + 2;
            local_30 = local_30 + 2;
            lVar4 = lVar4 + -8;
          } while (lVar4 != 0);
        }
      }
      else {
        LOCK();
        *local_30 = *local_30 + 1;
        local_19 = *local_30 != 0;
        UNLOCK();
      }
    }
    piVar5 = *(int **)(param_1 + 0x20);
    *(int **)(param_1 + 0x20) = local_28;
    local_28 = piVar5;
    FUN_100039a80(&local_28);
  }
  FUN_100039a80(&local_30);
  if (local_38 != 0) {
    _CFRelease();
  }
  return;
}

