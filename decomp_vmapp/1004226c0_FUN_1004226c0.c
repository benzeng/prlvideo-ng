
ulong FUN_1004226c0(int *param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = param_2 + 7U & 0xfffffffffffffff8;
  uVar3 = (ulong)(uint)param_1[2];
  uVar1 = *(ulong *)(param_1 + 4);
  if (uVar1 < uVar3 + uVar4) {
    iVar2 = _getpagesize();
    uVar3 = (long)iVar2;
    if ((ulong)(long)iVar2 <= uVar4) {
      uVar3 = uVar4;
    }
    lVar5 = uVar3 + uVar1;
    iVar2 = _ftruncate(*param_1,lVar5);
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    *(long *)(param_1 + 4) = lVar5;
    uVar3 = (ulong)(uint)param_1[2];
  }
  param_1[2] = (int)uVar4 + (int)uVar3;
  return uVar3;
}

