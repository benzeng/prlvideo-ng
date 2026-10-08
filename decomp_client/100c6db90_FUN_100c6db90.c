
int FUN_100c6db90(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (((param_2 != 0) && (lVar1 = *(long *)(param_1 + 0x30), lVar1 != 0)) &&
     (*(long *)(param_1 + 0x38) != 0)) {
    iVar2 = FUN_100c588a0(*(long *)(param_1 + 0x38),param_2);
    if (((0 < iVar2) && (*(int *)(param_1 + 0x18) != 0)) &&
       (iVar3 = FUN_100c65b10(lVar1,param_2,iVar2), iVar3 < 1)) {
      return -1;
    }
    FUN_100c58810(param_1,0xf);
    FUN_100c59780(param_1);
  }
  return iVar2;
}

