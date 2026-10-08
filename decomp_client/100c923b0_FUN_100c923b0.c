
int FUN_100c923b0(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  
  lVar1 = *(long *)(*param_1 + 0x10);
  lVar2 = *(long *)(*param_2 + 0x10);
  if (((*(long *)(lVar1 + 0x18) == 0) || (*(int *)(lVar1 + 8) != 0)) &&
     (iVar3 = FUN_100c7c6f0(lVar1,0), iVar3 < 0)) {
    return -2;
  }
  if (((*(long *)(lVar2 + 0x18) == 0) || (*(int *)(lVar2 + 8) != 0)) &&
     (iVar3 = FUN_100c7c6f0(lVar2,0), iVar3 < 0)) {
    return -2;
  }
  iVar3 = *(int *)(lVar1 + 0x20);
  if (iVar3 != *(int *)(lVar2 + 0x20)) {
    return iVar3 - *(int *)(lVar2 + 0x20);
  }
  iVar3 = _memcmp(*(void **)(lVar1 + 0x18),*(void **)(lVar2 + 0x18),(long)iVar3);
  return iVar3;
}

