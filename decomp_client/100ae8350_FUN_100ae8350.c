
bool FUN_100ae8350(void)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  string local_28;
  undefined1 local_27 [15];
  undefined1 *local_18;
  
  if ((DAT_102313b60 == '\0') && (iVar3 = ___cxa_guard_acquire(&DAT_102313b60), iVar3 != 0)) {
    FUN_100deba20(&local_28,"Q29yZURvY2tHZXRBdXRvSGlkZUVuYWJsZWQ=");
    if (((byte)local_28 & 1) == 0) {
      local_18 = local_27;
    }
    pcVar1 = (code *)_dlsym(0xfffffffffffffffe,local_18);
    DAT_102313b58 = pcVar1;
    std::string::~string(&local_28);
    DAT_102313b58 = pcVar1;
    ___cxa_guard_release(&DAT_102313b60);
  }
  cVar2 = (*DAT_102313b58)();
  return cVar2 != '\0';
}

