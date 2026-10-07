
undefined4 FUN_10064e670(int param_1,int param_2,int param_3)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = &DAT_100b492c8;
  uVar2 = 0;
  while (((piVar1[-2] != param_1 ||
          ((piVar1[-1] != param_2 && ((0xa1cfUL >> (uVar2 & 0x3f) & 1) == 0)))) ||
         ((*piVar1 != param_3 && ((0xe1cfUL >> (uVar2 & 0x3f) & 1) == 0))))) {
    uVar2 = uVar2 + 1;
    piVar1 = piVar1 + 4;
    if (0xf < uVar2) {
      return 0;
    }
  }
  return (&DAT_100b492cc)[uVar2 * 4];
}

