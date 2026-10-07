
void FUN_1004c0120(undefined8 *param_1)

{
  long *plVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  undefined4 *local_60;
  undefined4 *local_58;
  undefined4 *local_48;
  undefined4 *local_40;
  undefined4 local_38;
  
  uVar3 = FUN_100060640();
  bVar2 = FUN_1006d81f0(1);
  uVar5 = 0;
  if (uVar3 < 6) {
    uVar5 = *(uint *)(&DAT_100b44ee0 + (long)(int)uVar3 * 4);
  }
  uVar6 = 0;
  do {
    if (((((0xd0007fffUL >> (uVar6 & 0x3f) & 1) != 0) ||
         (uVar3 = *(uint *)(&DAT_100bc2ad0 + uVar6 * 0x10), (uVar3 & uVar5) != 0)) ||
        ((uVar3 >> 0x1e & 1) == -((int)uVar3 >> 0x1f))) ||
       ((uint)bVar2 == (-((int)uVar3 >> 0x1f) ^ 1U))) {
      lVar4 = (**(code **)(&PTR_PTR_100bc2ad8)[uVar6 * 2])(param_1);
      FUN_1004c0960(&local_60,lVar4 + 0x10);
      local_48 = local_60;
      local_40 = local_58;
      if (local_60 != local_58) {
        do {
          local_38 = 1;
          FUN_1002a50a0(*param_1,*local_48,local_48[1],lVar4);
          local_48 = local_48 + 2;
        } while (local_48 != local_40);
      }
      local_38 = 1;
      if (local_60 != (undefined4 *)0x0) {
        if (local_58 != local_60) {
          local_58 = (undefined4 *)
                     ((~((long)local_58 + (-8 - (long)local_60)) & 0xfffffffffffffff8U) +
                     (long)local_58);
        }
        operator_delete(local_60);
      }
      param_1[uVar6 + 1] = lVar4;
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0x20);
  lVar4 = 0;
  do {
    plVar1 = (long *)param_1[lVar4 + 1];
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x30))(plVar1,1);
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x20);
  return;
}

