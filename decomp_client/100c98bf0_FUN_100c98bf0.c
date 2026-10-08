
void FUN_100c98bf0(long param_1)

{
  code *pcVar1;
  
  if (param_1 != 0) {
    if ((*(long *)(param_1 + 8) != 0) &&
       (pcVar1 = *(code **)(*(long *)(param_1 + 8) + 0x10), pcVar1 != (code *)0x0)) {
      (*pcVar1)(param_1);
    }
    FUN_100bf3910(param_1);
    return;
  }
  return;
}

