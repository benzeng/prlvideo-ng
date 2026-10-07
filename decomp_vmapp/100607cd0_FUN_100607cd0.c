
void FUN_100607cd0(ushort *param_1,undefined2 *param_2)

{
  long lVar1;
  
  *param_2 = CONCAT11((char)*param_1,(char)(*param_1 >> 8));
  if (*param_1 != 0) {
    lVar1 = 0;
    do {
      param_2[lVar1 + 1] = CONCAT11((char)param_1[lVar1 + 1],(char)(param_1[lVar1 + 1] >> 8));
      lVar1 = lVar1 + 1;
    } while (lVar1 < (long)(ulong)*param_1);
  }
  return;
}

