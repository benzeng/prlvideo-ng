
long * FUN_1002fccd0(long *param_1,long param_2,uint param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  
  iVar5 = 0;
  uVar3 = *(uint *)(param_2 + 0x11968);
  while( true ) {
    do {
      uVar2 = uVar3;
      if (uVar2 == 0) {
        *param_1 = 0;
        return param_1;
      }
      uVar3 = uVar2 >> 1;
      lVar4 = (ulong)(uVar3 + iVar5) * 0x10;
      uVar1 = *(uint *)(*(long *)(param_2 + 0x11970) + lVar4);
    } while (param_3 < uVar1);
    lVar4 = *(long *)(*(long *)(param_2 + 0x11970) + 8 + lVar4);
    if (param_3 < *(int *)(lVar4 + 8) + uVar1) break;
    iVar5 = uVar3 + iVar5 + 1;
    uVar3 = (uVar2 - 1) - uVar3;
  }
  *param_4 = param_3 - uVar1;
  *param_1 = lVar4;
  return param_1;
}

