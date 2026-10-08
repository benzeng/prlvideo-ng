
int FUN_100be4d80(long param_1,long param_2,long param_3,code *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
  iVar4 = 0;
  if (param_2 != 0) {
    if (param_4 == (code *)0x0) {
      param_4 = *(code **)(*(long *)(param_1 + 8) + 0x98);
    }
    iVar1 = FUN_100c60800(param_2);
    iVar2 = (int)param_3;
    iVar4 = iVar2;
    if (0 < iVar1) {
      iVar1 = 0;
      lVar6 = param_3;
      do {
        lVar5 = FUN_100c60820(param_2,iVar1);
        if (((((*(byte *)(lVar5 + 0x38) & 4) == 0) ||
             ((0x302 < (int)*(uint *)(param_1 + 0x1c4) &&
              ((*(uint *)(param_1 + 0x1c4) & 0xffffff00) == 0x300)))) &&
            ((((*(ulong *)(lVar5 + 0x18) & 0x100) == 0 && ((*(byte *)(lVar5 + 0x20) & 0x80) == 0))
             || (*(long *)(param_1 + 0x160) != 0)))) &&
           ((((*(ulong *)(lVar5 + 0x18) & 0x400) == 0 && ((*(byte *)(lVar5 + 0x21) & 4) == 0)) ||
            ((*(byte *)(param_1 + 0x321) & 4) != 0)))) {
          iVar3 = (*param_4)(lVar5,lVar6);
          lVar6 = lVar6 + iVar3;
        }
        iVar1 = iVar1 + 1;
        iVar3 = FUN_100c60800(param_2);
      } while (iVar1 < iVar3);
      if (lVar6 != param_3) {
        if (*(int *)(param_1 + 0x2a4) == 0) {
          iVar4 = (*param_4)(&DAT_102303118,lVar6);
          lVar6 = lVar6 + iVar4;
        }
        iVar4 = (int)lVar6;
        if ((*(byte *)(param_1 + 0x1b0) & 0x80) != 0) {
          iVar1 = (*param_4)(&DAT_102303170,lVar6);
          iVar4 = iVar1 + iVar4;
        }
      }
    }
    iVar4 = iVar4 - iVar2;
  }
  return iVar4;
}

