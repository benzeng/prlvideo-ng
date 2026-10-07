
void FUN_1000a7d10(long param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 1) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","reason != STOP_SHUTDOWN",
                  "VirtualPC.cpp",0x4d1,"VMStopImmediately");
  }
  *(int *)(param_1 + 0x1948) = param_2;
  FUN_100062ab0(DAT_1011c3650);
  FUN_10008fa70(param_1,0x4e27);
  uVar2 = 0;
  while( true ) {
    uVar1 = *(uint *)(param_1 + 0x1164);
    if (uVar1 == 0) {
      uVar1 = *(uint *)(param_1 + 0x5d8);
      *(uint *)(param_1 + 0x1164) = uVar1;
    }
    if (uVar1 <= (uint)uVar2) break;
    FUN_10008fa70(*(undefined8 *)(param_1 + 0x1810 + uVar2 * 8),4);
    uVar2 = (ulong)((uint)uVar2 + 1);
  }
  return;
}

