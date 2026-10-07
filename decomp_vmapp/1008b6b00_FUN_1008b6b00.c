
int FUN_1008b6b00(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  
  lVar1 = *param_1;
  lVar2 = *param_2;
  iVar3 = FUN_1008afeb0(*(undefined8 *)(lVar1 + 8),*(undefined8 *)(lVar2 + 8));
  if (iVar3 == 0) {
    lVar1 = *(long *)(lVar1 + 0x18);
    lVar2 = *(long *)(lVar2 + 0x18);
    if (((*(long *)(lVar1 + 0x18) == 0) || (*(int *)(lVar1 + 8) != 0)) &&
       (iVar3 = FUN_1008a1170(lVar1,0), iVar3 < 0)) {
      return -2;
    }
    if (((*(long *)(lVar2 + 0x18) == 0) || (*(int *)(lVar2 + 8) != 0)) &&
       (iVar3 = FUN_1008a1170(lVar2,0), iVar3 < 0)) {
      return -2;
    }
    iVar3 = *(int *)(lVar1 + 0x20);
    if (iVar3 == *(int *)(lVar2 + 0x20)) {
      iVar3 = _memcmp(*(void **)(lVar1 + 0x18),*(void **)(lVar2 + 0x18),(long)iVar3);
      return iVar3;
    }
    iVar3 = iVar3 - *(int *)(lVar2 + 0x20);
  }
  return iVar3;
}

