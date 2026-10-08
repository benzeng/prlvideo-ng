
void FUN_100c71960(long *param_1)

{
  code *pcVar1;
  
  if (param_1 != (long *)0x0) {
    if ((*param_1 != 0) && (pcVar1 = *(code **)(*param_1 + 0x18), pcVar1 != (code *)0x0)) {
      (*pcVar1)(param_1);
    }
    if (param_1[2] != 0) {
      FUN_100c6d8c0();
    }
    if (param_1[3] != 0) {
      FUN_100c6d8c0();
    }
    if (param_1[1] != 0) {
      FUN_100c557e0();
    }
    FUN_100bf3910(param_1);
    return;
  }
  return;
}

