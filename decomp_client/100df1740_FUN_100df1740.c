
bool FUN_100df1740(int *param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *param_1;
  if (iVar1 == 0x13c) {
    param_1[7] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[2] = 0x40;
    param_1[1] = 7;
    lVar2 = _sysconf(0x1d);
    param_1[4] = (int)lVar2;
    lVar2 = _sysconf(0x3a);
    param_1[3] = (int)lVar2;
    ___bzero(param_1 + 9,0x118);
    param_1[8] = 0;
    FUN_100df15c0(param_1 + 9);
  }
  return iVar1 == 0x13c;
}

