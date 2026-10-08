
void FUN_100c3b730(long param_1)

{
  int iVar1;
  long *plVar2;
  
  if ((param_1 != 0) &&
     (iVar1 = FUN_100bf2cf0(param_1 + 0x30,0xffffffff,0x24,"ec_mult.c",0x89), iVar1 < 1)) {
    plVar2 = *(long **)(param_1 + 0x20);
    if (plVar2 != (long *)0x0) {
      if (*plVar2 != 0) {
        do {
          plVar2 = plVar2 + 1;
          FUN_100c36280();
        } while (*plVar2 != 0);
        plVar2 = *(long **)(param_1 + 0x20);
      }
      FUN_100bf3910(plVar2);
    }
    FUN_100bf3910(param_1);
    return;
  }
  return;
}

