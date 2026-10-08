
void FUN_100a2ff20(long *param_1)

{
  int iVar1;
  char *pcVar2;
  
  FUN_100df99c0("CPTOOL","CPInterceptor",0,"CPPasteboard deinit start");
  if (*param_1 == 0) {
    pcVar2 = "m_board is empty";
  }
  else {
    iVar1 = _PasteboardResolvePromises();
    if (iVar1 != 0) {
      FUN_100df99c0("CPTOOL","CPInterceptor",0,"CPPasteboard PasteboardResolvePromises failed (%d)")
      ;
    }
    _CFRelease(*param_1);
    *param_1 = 0;
    DAT_1023112a0 = 0;
    pcVar2 = "CPPasteboard deinit stop";
  }
  FUN_100df99c0("CPTOOL","CPInterceptor",0,pcVar2);
  return;
}

