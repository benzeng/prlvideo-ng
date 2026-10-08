
void FUN_100db6cd0(undefined4 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0x80000001;
    piVar1 = ___error();
    if (*piVar1 == 0xd) {
      *param_1 = 0x80000005;
    }
  }
  return;
}

