
ulong FUN_100540c30(long param_1,void *param_2,uint param_3)

{
  ulong uVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar1 = _send(*(int *)(param_1 + 8),param_2,(ulong)param_3,0);
  if ((int)uVar1 == -1) {
    piVar2 = ___error();
    iVar3 = *piVar2;
  }
  *(int *)(param_1 + 0xc) = iVar3;
  return uVar1 & 0xffffffff;
}

