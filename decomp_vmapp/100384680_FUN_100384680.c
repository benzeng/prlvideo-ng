
void FUN_100384680(long *param_1,long param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  
  uVar1 = 0;
  if ((*(ushort *)(param_2 + 0xb0) & 1) == 0) {
    uVar1 = (ulong)param_3;
  }
  if ((*(uint *)(*(long *)(*(long *)(*(long *)(param_2 + 0x40) + uVar1 * 8) + 0x88) +
                (ulong)param_3 * 4) >> (param_4 & 0x1f) & 1) != 0) {
    return;
  }
  (**(code **)(*param_1 + 0x30))(param_1);
  FUN_100383600(param_1,param_2,param_3,param_4);
  return;
}

