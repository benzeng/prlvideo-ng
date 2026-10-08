
undefined1 FUN_100a2fff0(undefined8 *param_1)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = _PasteboardClear(*param_1);
  uVar2 = 1;
  if (iVar1 != 0) {
    if (DAT_10230ffd0 < 1) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      FUN_100df99c0("CPTOOL","CPInterceptor",1,"PasteboardClear failed with status %d");
    }
  }
  return uVar2;
}

