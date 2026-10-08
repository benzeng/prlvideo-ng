
undefined1 FUN_1000610b0(long param_1,long param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x18);
    if (((lVar1 == 0) || (*(int *)(lVar1 + 4) == 0)) ||
       (lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x20), lVar1 == 0)) {
      FUN_100df99c0("[CONTEXT_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                    "0 != context","Application/CAppContextLogic.mm",0x1da,"isInCurrentContext");
      return 0;
    }
    do {
      if (lVar1 == param_2) {
        return 1;
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 8) + 0x10);
    } while (lVar1 != 0);
  }
  return 0;
}

