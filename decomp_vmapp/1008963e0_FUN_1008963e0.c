
void FUN_1008963e0(long *param_1)

{
  code *pcVar1;
  
  if (param_1 != (long *)0x0) {
    if ((*param_1 != 0) && (pcVar1 = *(code **)(*param_1 + 0x18), pcVar1 != (code *)0x0)) {
      (*pcVar1)(param_1);
    }
    if (param_1[2] != 0) {
      FUN_1008924e0();
    }
    if (param_1[3] != 0) {
      FUN_1008924e0();
    }
    if (param_1[1] != 0) {
      FUN_10087a5e0();
    }
    FUN_10081e1a0(param_1);
    return;
  }
  return;
}

