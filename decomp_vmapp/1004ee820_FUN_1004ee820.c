
void FUN_1004ee820(long param_1,long param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = 0;
  if (*(short *)(*(long *)(param_2 + 8) + 0x16) != 0) {
    uVar5 = 0;
    lVar3 = FUN_1002a6120(*(long *)(param_2 + 8),0,1);
    if (lVar3 != 0) {
      uVar5 = (ulong)*(uint *)(lVar3 + 8);
    }
  }
  lVar3 = *(long *)(param_1 + 0x68);
  if (lVar3 != 0) {
    uVar4 = 0;
    do {
      do {
        plVar1 = *(long **)(param_1 + 0x60);
        uVar4 = *(uint *)(plVar1 + 4) + uVar4;
        if (uVar5 < uVar4) {
          return;
        }
        *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) - *(uint *)(plVar1 + 4);
      } while ((param_3 == plVar1) || ((long *)plVar1[1] == param_3));
      lVar2 = *plVar1;
      *(long **)(lVar2 + 8) = (long *)plVar1[1];
      *(long *)plVar1[1] = lVar2;
      lVar2 = *param_3;
      *(long **)(lVar2 + 8) = plVar1;
      *plVar1 = lVar2;
      *param_3 = (long)plVar1;
      plVar1[1] = (long)param_3;
      *(long *)(param_1 + 0x68) = lVar3 + -1;
      param_3[2] = param_3[2] + 1;
      lVar3 = *(long *)(param_1 + 0x68);
    } while (lVar3 != 0);
  }
  return;
}

