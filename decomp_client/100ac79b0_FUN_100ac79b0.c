
void FUN_100ac79b0(long param_1)

{
  char cVar1;
  long lVar2;
  
  if (*(int *)(*(long *)(param_1 + 0xaf8) + 4) != 0) {
    if (DAT_10230ffd0 < 3) {
      return;
    }
    FUN_100df99c0("CHRCLIENT","ChrToolClient",3,
                  "Guest deactivation logic blocked by FS entering window");
    return;
  }
  FUN_100ad5da0(param_1);
  lVar2 = FUN_1000a9690(param_1 + 0x988);
  if ((lVar2 != 0) && (cVar1 = FUN_1000b7a80(lVar2,0,0), cVar1 != '\0')) {
    return;
  }
  FUN_100ad5960(param_1,2,0,0);
  return;
}

