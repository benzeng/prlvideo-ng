
void FUN_1003e31a0(long param_1)

{
  int *piVar1;
  long lVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  uint uVar5;
  bool bVar6;
  int *local_48;
  int *local_40;
  int *local_38;
  uint local_30;
  undefined1 local_21;
  
  FUN_1003e71c0(&local_48,param_1 + 0x28);
  local_40 = local_48 + (long)local_48[2] * 2 + 4;
  local_38 = local_48 + (long)local_48[3] * 2 + 4;
  local_30 = 1;
  if (local_48[2] != local_48[3]) {
    do {
      piVar1 = (int *)**(undefined8 **)local_40;
      lVar2 = (*(undefined8 **)local_40)[1];
      if (piVar1 != (int *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        local_21 = *piVar1 != 0;
        UNLOCK();
      }
      if (local_30 != 0) {
        if (((piVar1 != (int *)0x0) && (lVar2 != 0)) && (piVar1[1] != 0)) {
          uVar4 = FUN_1003a4d50(lVar2);
          uVar3 = FUN_1003b4e20(uVar4,*(undefined8 *)(param_1 + 0x18));
          FUN_1003a4e10(lVar2,2,uVar3);
          uVar4 = FUN_1003a4d50(lVar2);
          uVar3 = FUN_1003b5190(uVar4,*(undefined8 *)(param_1 + 0x18));
          FUN_1003a4e10(lVar2,8,uVar3);
        }
        local_30 = 0;
      }
      if (piVar1 != (int *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        local_21 = *piVar1 != 0;
        UNLOCK();
        if (!(bool)local_21) {
          operator_delete(piVar1);
        }
      }
      local_40 = local_40 + 2;
      uVar5 = local_30 ^ 1;
      bVar6 = local_30 != 1;
      local_30 = uVar5;
    } while ((bVar6) && (local_40 != local_38));
  }
  if (*local_48 != -1) {
    if (*local_48 != 0) {
      LOCK();
      *local_48 = *local_48 + -1;
      UNLOCK();
      if (*local_48 != 0) {
        return;
      }
      local_21 = 0;
    }
    FUN_1003e63d0(&local_48,local_48);
  }
  return;
}

