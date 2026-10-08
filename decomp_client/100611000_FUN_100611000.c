
void FUN_100611000(undefined8 param_1)

{
  int *piVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uVar4;
  bool bVar5;
  QArrayData *local_58;
  int *local_50;
  int *local_48;
  int *local_40;
  uint local_38;
  int *local_30;
  undefined1 local_21;
  
  uVar2 = FUN_100152280();
  FUN_100154d10(&local_30,uVar2);
  FUN_100062ec0(&local_50,&local_30);
  local_48 = local_50 + (long)local_50[2] * 2 + 4;
  local_40 = local_50 + (long)local_50[3] * 2 + 4;
  local_38 = 1;
  if (local_50[2] != local_50[3]) {
    do {
      piVar1 = (int *)**(undefined8 **)local_48;
      uVar2 = (*(undefined8 **)local_48)[1];
      if (piVar1 != (int *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        local_21 = *piVar1 != 0;
        UNLOCK();
      }
      if (local_38 != 0) {
        uVar4 = 0;
        if ((piVar1 != (int *)0x0) && (uVar4 = 0, piVar1[1] != 0)) {
          uVar4 = uVar2;
        }
        FUN_10015a2b0(&local_58,uVar4);
        FUN_10060d6d0(param_1,&local_58);
        FUN_10060f560(param_1,&local_58);
        FUN_1006103a0(param_1,&local_58);
        FUN_100609af0(param_1,&local_58,1);
        if (*(int *)local_58 != -1) {
          if (*(int *)local_58 != 0) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + -1;
            local_21 = *(int *)local_58 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_100611113;
          }
          QArrayData::deallocate(local_58,2,8);
        }
LAB_100611113:
        local_38 = 0;
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
      local_48 = local_48 + 2;
      uVar3 = local_38 ^ 1;
      bVar5 = local_38 != 1;
      local_38 = uVar3;
    } while ((bVar5) && (local_48 != local_40));
  }
  if (*local_50 != -1) {
    if (*local_50 != 0) {
      LOCK();
      *local_50 = *local_50 + -1;
      local_21 = *local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100611185;
    }
    FUN_100063050(&local_50,local_50);
  }
LAB_100611185:
  if (*local_30 != -1) {
    if (*local_30 != 0) {
      LOCK();
      *local_30 = *local_30 + -1;
      UNLOCK();
      if (*local_30 != 0) {
        return;
      }
      local_21 = 0;
    }
    FUN_100063050(&local_30,local_30);
  }
  return;
}

