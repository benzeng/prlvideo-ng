
uint FUN_1008aa010(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined8 in_RAX;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uStack_38;
  
  uVar2 = 0;
  if (param_2 != (int *)0x0) {
    uVar2 = 0;
    uStack_38 = in_RAX;
    if ((*(byte *)((long)param_2 + 5) & 1) != 0) {
      uVar2 = 1;
      iVar1 = FUN_10087d780(param_1,"-",1);
      if (iVar1 != 1) {
        return 0xffffffff;
      }
    }
    if (*param_2 == 0) {
      iVar1 = FUN_10087d780(param_1,"00",2);
      uVar3 = uVar2 | 2;
      uVar2 = 0xffffffff;
      if (iVar1 == 2) {
        uVar2 = uVar3;
      }
    }
    else if (0 < *param_2) {
      lVar4 = 0;
      do {
        iVar1 = (int)lVar4;
        if ((iVar1 != 0) && (iVar1 == (iVar1 / 0x23) * 0x23)) {
          iVar1 = FUN_10087d780(param_1,"\\\n",2);
          if (iVar1 != 2) {
            return 0xffffffff;
          }
          uVar2 = uVar2 + 2;
        }
        uStack_38 = CONCAT17("0123456789ABCDEF"
                             [(ulong)*(byte *)(*(long *)(param_2 + 2) + lVar4) & 0xf],
                             CONCAT16("0123456789ABCDEF"
                                      [*(byte *)(*(long *)(param_2 + 2) + lVar4) >> 4],
                                      (undefined6)uStack_38));
        iVar1 = FUN_10087d780(param_1,(long)&uStack_38 + 6,2);
        if (iVar1 != 2) {
          return 0xffffffff;
        }
        uVar2 = uVar2 + 2;
        lVar4 = lVar4 + 1;
      } while (lVar4 < *param_2);
    }
  }
  return uVar2;
}

