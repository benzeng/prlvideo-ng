
void FUN_1008d20a7(long param_1,uchar *param_2)

{
  int iVar1;
  
  if ((param_2 != (uchar *)0x0) && (*(int *)(param_1 + 0x90) != 0)) {
    iVar1 = _xmlCheckUTF8(param_2);
    if (iVar1 == 0) {
      FUN_1008d1f2f(param_1,0x13a8,"String is not UTF-8 %s",param_2);
    }
  }
  return;
}

