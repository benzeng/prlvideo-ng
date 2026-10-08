
string * FUN_100ab5660(string *param_1)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  
  if (DAT_102313ac8 == '\0') {
    iVar1 = ___cxa_guard_acquire(&DAT_102313ac8);
    if (iVar1 != 0) {
      std::string::__init(&DAT_102313ab0,0x101e4166f);
      ___cxa_atexit(PTR__string_1021e1608,&DAT_102313ab0,0x100000000);
      ___cxa_guard_release(&DAT_102313ac8);
    }
  }
  lVar2 = FUN_100c63310();
  if (lVar2 == 0) {
    std::string::string(param_1,(string *)&DAT_102313ab0);
  }
  else {
    pcVar3 = (char *)FUN_100c63f00(lVar2,0);
    _strlen(pcVar3);
    std::string::__init((char *)param_1,(ulong)pcVar3);
  }
  return param_1;
}

