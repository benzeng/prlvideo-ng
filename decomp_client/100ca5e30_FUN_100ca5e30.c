
undefined8 FUN_100ca5e30(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  
  if (param_2 != (long *)0x0) {
    if (((*param_2 != 0) && (*(long *)(param_1 + 0x68) != 0)) &&
       (iVar2 = FUN_100c76bb0(), iVar2 != 0)) {
      return 0x1e;
    }
    if (param_2[2] != 0) {
      uVar4 = FUN_100c926a0(param_1);
      iVar2 = FUN_100c76010(uVar4,param_2[2]);
      if (iVar2 != 0) {
        return 0x1f;
      }
    }
    lVar1 = param_2[1];
    if ((lVar1 != 0) && (iVar2 = FUN_100c60800(lVar1), 0 < iVar2)) {
      iVar2 = 0;
      do {
        piVar5 = (int *)FUN_100c60820(lVar1,iVar2);
        if (*piVar5 == 4) {
          lVar1 = *(long *)(piVar5 + 2);
          if (lVar1 == 0) {
            return 0;
          }
          uVar4 = FUN_100c92460(param_1);
          iVar2 = FUN_100c92120(lVar1,uVar4);
          if (iVar2 == 0) {
            return 0;
          }
          return 0x1f;
        }
        iVar2 = iVar2 + 1;
        iVar3 = FUN_100c60800(lVar1);
      } while (iVar2 < iVar3);
    }
  }
  return 0;
}

