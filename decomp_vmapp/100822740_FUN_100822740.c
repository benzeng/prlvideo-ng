
ulong FUN_100822740(undefined8 param_1,long param_2,int param_3,int param_4,code *param_5)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = 0;
  if (param_3 != 0) {
    iVar1 = 0;
    uVar4 = 0;
    uVar2 = uVar5;
    do {
      iVar3 = param_3;
      if (iVar3 <= (int)uVar2) {
        if (iVar1 == 0) {
          return uVar4;
        }
        return 0;
      }
      param_3 = (iVar3 + (int)uVar2) / 2;
      uVar5 = param_3 * param_4 + param_2;
      iVar1 = (*param_5)(param_1,uVar5);
      uVar4 = uVar5;
    } while ((iVar1 < 0) || (uVar2 = (ulong)(param_3 + 1), param_3 = iVar3, 0 < iVar1));
  }
  return uVar5;
}

