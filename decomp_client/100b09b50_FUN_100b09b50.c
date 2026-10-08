
void FUN_100b09b50(void *param_1)

{
  int iVar1;
  
  _free(*(void **)((long)param_1 + 8));
  iVar1 = *(int *)((long)param_1 + 4);
  if (iVar1 == 2) {
    iVar1 = _SCardDisconnect(*(undefined4 *)((long)param_1 + 0x14),0);
    if ((iVar1 != 0) && (2 < DAT_10230ffd0)) {
      FUN_100df99c0("","PrlPCSC",3,"PCSC Error: Failed SCardDisconnect\n");
    }
    iVar1 = *(int *)((long)param_1 + 4);
  }
  if (iVar1 != 0) {
    iVar1 = _SCardReleaseContext(*(undefined4 *)((long)param_1 + 0x10));
    if ((iVar1 != 0) && (2 < DAT_10230ffd0)) {
      FUN_100df99c0("","PrlPCSC",3,"PCSC Error: Failed SCardReleaseContext\n");
    }
  }
  _free(param_1);
  return;
}

