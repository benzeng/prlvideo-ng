
undefined8 FUN_100708200(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x78))();
  if ((DAT_1011bdaa0 == (code *)0x0) || (param_1[0xe] != lVar2)) {
    iVar1 = _fsync((int)param_1[1]);
  }
  else {
    iVar1 = (*DAT_1011bdaa0)((int)param_1[1]);
  }
  param_1[0xe] = lVar2;
  uVar3 = 0x80021031;
  if (-1 < iVar1) {
    uVar3 = 0;
    if ((param_1[6] != 0) && (*(long *)(param_1[6] + 0x10) != 0)) {
      lVar2 = FUN_1007dc310();
      if (DAT_1011ccb08 < (ulong)(lVar2 - **(long **)(param_1[6] + 0x10))) {
        iVar1 = _fcntl((int)param_1[1],0x33,0);
        uVar3 = 0x80021032;
        if (-1 < iVar1) {
          **(long **)(param_1[6] + 0x10) = lVar2;
          uVar3 = 0;
        }
      }
    }
  }
  return uVar3;
}

