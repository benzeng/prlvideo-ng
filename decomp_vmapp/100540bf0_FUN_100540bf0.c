
ulong FUN_100540bf0(long param_1,void *param_2,uint param_3)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  
  uVar2 = _recv(*(int *)(param_1 + 8),param_2,(ulong)param_3,0x40);
  iVar1 = 0;
  if ((int)uVar2 == -1) {
    piVar3 = ___error();
    iVar1 = *piVar3;
  }
  *(int *)(param_1 + 0xc) = iVar1;
  return uVar2 & 0xffffffff;
}

