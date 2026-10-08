
void FUN_10025f640(long *param_1,int param_2)

{
  long lVar1;
  
  lVar1 = QObject::sender();
  if ((param_2 < 0) && (*(char *)(lVar1 + 0x38) == '\0')) {
    if (*(int *)(lVar1 + 0x70) == 100) {
      FUN_10025ecb0(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010025f671. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,param_2);
  return;
}

