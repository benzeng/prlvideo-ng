
void FUN_100c4d5f0(long param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = FUN_100bf2cf0(param_1 + 0x60,0xffffffff,8,"dsa_lib.c",0xc4);
    if (iVar2 < 1) {
      pcVar1 = *(code **)(*(long *)(param_1 + 0x78) + 0x38);
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)(param_1);
      }
      if (*(long *)(param_1 + 0x80) != 0) {
        FUN_100c557e0();
      }
      FUN_100bf51c0(7,param_1,param_1 + 0x68);
      if (*(long *)(param_1 + 0x18) != 0) {
        FUN_100c26640();
      }
      if (*(long *)(param_1 + 0x20) != 0) {
        FUN_100c26640();
      }
      if (*(long *)(param_1 + 0x28) != 0) {
        FUN_100c26640();
      }
      if (*(long *)(param_1 + 0x30) != 0) {
        FUN_100c26640();
      }
      if (*(long *)(param_1 + 0x38) != 0) {
        FUN_100c26640();
      }
      if (*(long *)(param_1 + 0x40) != 0) {
        FUN_100c26640();
      }
      if (*(long *)(param_1 + 0x48) != 0) {
        FUN_100c26640();
      }
      FUN_100bf3910(param_1);
      return;
    }
  }
  return;
}

