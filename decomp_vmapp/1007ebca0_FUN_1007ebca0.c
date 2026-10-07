
string * FUN_1007ebca0(string *param_1)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  
  if (DAT_1011c0530 == '\0') {
    iVar1 = ___cxa_guard_acquire(&DAT_1011c0530);
    if (iVar1 != 0) {
      std::string::__init(&DAT_1011c0518,0x100b12c48);
      ___cxa_atexit(PTR__string_100ba21a0,&DAT_1011c0518,0x100000000);
      ___cxa_guard_release(&DAT_1011c0530);
    }
  }
  lVar2 = FUN_100888110();
  if (lVar2 == 0) {
    std::string::string(param_1,(string *)&DAT_1011c0518);
  }
  else {
    pcVar3 = (char *)FUN_100888d00(lVar2,0);
    _strlen(pcVar3);
    std::string::__init((char *)param_1,(ulong)pcVar3);
  }
  return param_1;
}

