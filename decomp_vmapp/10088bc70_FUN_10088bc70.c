
void FUN_10088bc70(long *param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  if (*param_1 != 0) {
    pcVar1 = *(code **)(*param_1 + 0x28);
    if ((pcVar1 != (code *)0x0) && (iVar2 = (*pcVar1)(param_1), iVar2 == 0)) goto LAB_10088bce5;
    if ((void *)param_1[0xf] != (void *)0x0) {
      _OPENSSL_cleanse((void *)param_1[0xf],(long)*(int *)(*param_1 + 0x30));
    }
  }
  if (param_1[0xf] != 0) {
    FUN_10081e1a0();
  }
  if (param_1[1] != 0) {
    FUN_10087a5e0();
  }
  ___bzero(param_1,0xa8);
LAB_10088bce5:
  FUN_10081e1a0(param_1);
  return;
}

