
int FUN_100cdf770(byte param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(&DAT_101db0140 + (ulong)param_1 * 4 + (ulong)param_2 * 0x400);
  if (iVar1 == 0) {
    iVar1 = 0;
    if ((param_2 != 0) && (param_2 != 3)) {
      iVar1 = *(int *)(&DAT_101db0140 + (ulong)param_1 * 4);
    }
    if ((iVar1 == 0) && (2 < DAT_10230ffd0)) {
      iVar1 = 0;
      FUN_100df99c0("","VmKeyboard",3,"[Keyboard] Not defined convertion for %d %hhu");
    }
  }
  return iVar1;
}

