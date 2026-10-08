
void FUN_100c47630(long param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = FUN_100bf2cf0(param_1 + 0x70,0xffffffff,9,"rsa_lib.c",0xd7);
    if (iVar2 < 1) {
      pcVar1 = *(code **)(*(long *)(param_1 + 0x10) + 0x40);
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)(param_1);
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        FUN_100c557e0();
      }
      FUN_100bf51c0(6,param_1,param_1 + 0x60);
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
      if (*(long *)(param_1 + 0x50) != 0) {
        FUN_100c26640();
      }
      if (*(long *)(param_1 + 0x58) != 0) {
        FUN_100c26640();
      }
      if (*(long *)(param_1 + 0x98) != 0) {
        FUN_100c2bcf0();
      }
      if (*(long *)(param_1 + 0xa0) != 0) {
        FUN_100c2bcf0();
      }
      if (*(long *)(param_1 + 0x90) != 0) {
        FUN_100bf34f0();
      }
      FUN_100bf3910(param_1);
      return;
    }
  }
  return;
}

