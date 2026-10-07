
undefined1 FUN_100422540(int *param_1,void *param_2,ulong param_3,undefined8 *param_4)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 uVar4;
  ulong uVar5;
  
  uVar3 = param_3 + 7 & 0xfffffffffffffff8;
  uVar2 = (ulong)(uint)param_1[2];
  uVar5 = *(ulong *)(param_1 + 4);
  if (uVar5 < uVar2 + uVar3) {
    iVar1 = _getpagesize();
    uVar2 = (long)iVar1;
    if ((ulong)(long)iVar1 <= uVar3) {
      uVar2 = uVar3;
    }
    uVar5 = uVar2 + uVar5;
    iVar1 = _ftruncate(*param_1,uVar5);
    if (iVar1 != 0) {
      return 0;
    }
    *(ulong *)(param_1 + 4) = uVar5;
    uVar2 = (ulong)(uint)param_1[2];
  }
  param_1[2] = (int)uVar3 + (int)uVar2;
  if ((int)uVar2 == -1) {
    uVar4 = 0;
  }
  else if (uVar5 < uVar2 + param_3) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    uVar5 = _lseek(*param_1,uVar2,0);
    if (uVar5 == uVar2) {
      uVar5 = _write(*param_1,param_2,param_3);
      if (uVar5 == param_3) {
        *param_4 = param_2;
        param_4[1] = param_3 & 0xffffffff | uVar2 << 0x20;
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}

