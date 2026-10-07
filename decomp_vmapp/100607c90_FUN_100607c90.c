
void FUN_100607c90(ushort *param_1,undefined2 *param_2)

{
  ushort uVar1;
  long lVar2;
  
  uVar1 = CONCAT11((char)*param_2,(char)((ushort)*param_2 >> 8));
  *param_1 = uVar1;
  if (uVar1 != 0) {
    lVar2 = 0;
    do {
      param_1[lVar2 + 1] =
           CONCAT11((char)param_2[lVar2 + 1],(char)((ushort)param_2[lVar2 + 1] >> 8));
      lVar2 = lVar2 + 1;
    } while (lVar2 < (long)(ulong)*param_1);
  }
  return;
}

