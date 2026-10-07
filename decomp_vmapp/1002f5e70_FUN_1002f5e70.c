
undefined8 FUN_1002f5e70(long param_1,ulong *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong local_30;
  undefined1 local_28 [8];
  
  local_30 = 0;
  uVar2 = (**(code **)(**(long **)(param_1 + 0x20) + 0xb8))
                    (*(long **)(param_1 + 0x20),&local_30,local_28);
  if ((int)uVar2 == 0) {
    uVar1 = *(ulong *)(param_1 + 0x28);
    uVar3 = uVar1 + 1;
    if (uVar1 < local_30 + 8) {
      if ((uVar3 < local_30) && (1 < DAT_1011c568c)) {
        FUN_1008e3970("","USB",0,"[%s] LL LAG LastFrame:%llx HostFrame:%llx",
                      *(long *)(param_1 + 0x10) + 0xcf,uVar1,local_30);
      }
      if (uVar3 < local_30 + 2) {
        uVar3 = local_30 + 2;
      }
    }
    else if (local_30 + 0x6c < uVar1) {
      if (-1 < DAT_1011c568c) {
        FUN_1008e3970("","USB",0,"[%s] LL OVERRUN %llx %llx",*(long *)(param_1 + 0x10) + 0xcf,uVar1,
                      local_30);
      }
      uVar3 = local_30 + 8;
    }
    *param_2 = uVar3;
    uVar2 = 0;
  }
  return uVar2;
}

