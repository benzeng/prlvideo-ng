
void FUN_100279cb0(byte *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _rand();
  iVar2 = FUN_1007d8850();
  _srand(iVar2 + iVar1);
  iVar1 = _rand();
  *param_1 = (byte)iVar1;
  iVar1 = _rand();
  param_1[1] = (byte)iVar1;
  iVar1 = _rand();
  param_1[2] = (byte)iVar1;
  iVar1 = _rand();
  param_1[3] = (byte)iVar1;
  iVar1 = _rand();
  param_1[4] = (byte)iVar1;
  iVar1 = _rand();
  param_1[5] = (byte)iVar1;
  *param_1 = *param_1 & 0xfc | 2;
  return;
}

