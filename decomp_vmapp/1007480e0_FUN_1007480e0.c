
int FUN_1007480e0(long param_1,long *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  
  if ((*(int *)(param_1 + 0x4004) != 0) || (0x40000000 < *(uint *)(param_1 + 0x4000))) {
    ___bzero(param_1,0x4020);
  }
  if (param_3 < 8) {
    *(undefined8 *)(param_1 + 0x4008) = 0;
    *(undefined4 *)(param_1 + 0x4018) = 0;
    iVar2 = 0;
  }
  else {
    plVar4 = param_2;
    if (0x10000 < param_3) {
      plVar4 = (long *)((long)param_3 + -0x10000 + (long)param_2);
    }
    iVar1 = *(int *)(param_1 + 0x4000);
    *(long **)(param_1 + 0x4008) = plVar4;
    iVar3 = (int)plVar4;
    iVar2 = ((int)param_2 + param_3) - iVar3;
    *(int *)(param_1 + 0x4018) = iVar2;
    *(int *)(param_1 + 0x4000) = iVar2 + 0x10000 + iVar1;
    param_2 = (long *)((long)param_3 + -8 + (long)param_2);
    if (plVar4 <= param_2) {
      do {
        *(int *)(param_1 + ((ulong)(*plVar4 * 0xcf1bbcdcbb) >> 0x1a & 0x3ffc)) =
             (int)plVar4 - (iVar3 - (iVar1 + 0x10000));
        plVar4 = (long *)((long)plVar4 + 3);
      } while (plVar4 <= param_2);
      iVar2 = *(int *)(param_1 + 0x4018);
    }
  }
  return iVar2;
}

