
int FUN_100c85a70(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined8 in_RAX;
  int iVar2;
  long lVar3;
  undefined8 uStack_38;
  
  iVar2 = 0;
  if (param_2 != (int *)0x0) {
    if (*param_2 == 0) {
      iVar2 = 1;
      iVar1 = FUN_100c58980(param_1,"0",1);
      if (iVar1 != 1) {
LAB_100c85b5f:
        iVar2 = -1;
      }
    }
    else {
      iVar2 = 0;
      if (0 < *param_2) {
        lVar3 = 0;
        iVar2 = 0;
        uStack_38 = in_RAX;
        do {
          iVar1 = (int)lVar3;
          if ((iVar1 != 0) && (iVar1 == (iVar1 / 0x23) * 0x23)) {
            iVar1 = FUN_100c58980(param_1,"\\\n",2);
            if (iVar1 != 2) goto LAB_100c85b5f;
            iVar2 = iVar2 + 2;
          }
          uStack_38 = CONCAT17("0123456789ABCDEF"
                               [(ulong)*(byte *)(*(long *)(param_2 + 2) + lVar3) & 0xf],
                               CONCAT16("0123456789ABCDEF"
                                        [*(byte *)(*(long *)(param_2 + 2) + lVar3) >> 4],
                                        (undefined6)uStack_38));
          iVar1 = FUN_100c58980(param_1,(long)&uStack_38 + 6,2);
          if (iVar1 != 2) goto LAB_100c85b5f;
          iVar2 = iVar2 + 2;
          lVar3 = lVar3 + 1;
        } while (lVar3 < *param_2);
      }
    }
  }
  return iVar2;
}

