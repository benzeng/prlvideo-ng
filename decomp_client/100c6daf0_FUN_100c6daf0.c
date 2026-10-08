
int FUN_100c6daf0(long param_1,long param_2,int param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if ((param_2 != 0) && (0 < param_3)) {
    lVar1 = *(long *)(param_1 + 0x30);
    iVar2 = 0;
    if (((lVar1 != 0) &&
        (((*(long *)(param_1 + 0x38) != 0 &&
          (iVar2 = FUN_100c58980(*(long *)(param_1 + 0x38),param_2), 0 < iVar2)) &&
         (*(int *)(param_1 + 0x18) != 0)))) &&
       (iVar3 = FUN_100c65b10(lVar1,param_2,iVar2), iVar3 == 0)) {
      FUN_100c58810(param_1,0xf);
      return 0;
    }
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_100c58810(param_1,0xf);
      FUN_100c59780(param_1);
    }
  }
  return iVar2;
}

