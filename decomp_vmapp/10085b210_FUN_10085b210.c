
void FUN_10085b210(long *param_1)

{
  code *pcVar1;
  
  if (param_1 != (long *)0x0) {
    pcVar1 = *(code **)(*param_1 + 0x58);
    if ((pcVar1 != (code *)0x0) || (pcVar1 = *(code **)(*param_1 + 0x50), pcVar1 != (code *)0x0)) {
      (*pcVar1)(param_1);
    }
    _OPENSSL_cleanse(param_1,0x58);
    FUN_10081e1a0(param_1);
    return;
  }
  return;
}

