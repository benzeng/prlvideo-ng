
void FUN_100c51d00(long param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = FUN_100bf2cf0(param_1 + 0x68,0xffffffff,0x1a,"dh_lib.c",0xbb);
    if (iVar2 < 1) {
      pcVar1 = *(code **)(*(long *)(param_1 + 0x80) + 0x28);
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)(param_1);
      }
      if (*(long *)(param_1 + 0x88) != 0) {
        FUN_100c557e0();
      }
      FUN_100bf51c0(8,param_1,param_1 + 0x70);
      if (*(long *)(param_1 + 8) != 0) {
        FUN_100c26640();
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_100c26640();
      }
      if (*(long *)(param_1 + 0x40) != 0) {
        FUN_100c26640();
      }
      if (*(long *)(param_1 + 0x48) != 0) {
        FUN_100c26640();
      }
      if (*(long *)(param_1 + 0x50) != 0) {
        FUN_100bf3910();
      }
      if (*(long *)(param_1 + 0x60) != 0) {
        FUN_100c26640();
      }
      if (*(long *)(param_1 + 0x20) != 0) {
        FUN_100c26640();
      }
      if (*(long *)(param_1 + 0x28) != 0) {
        FUN_100c26640();
      }
      FUN_100bf3910(param_1);
      return;
    }
  }
  return;
}

