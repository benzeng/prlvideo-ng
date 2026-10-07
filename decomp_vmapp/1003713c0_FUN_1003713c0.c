
void FUN_1003713c0(long param_1,ulong param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  bool bVar4;
  long *local_38;
  
  if (*(long **)(param_1 + 0x1058) != (long *)(param_1 + 0x1060)) {
    local_38 = *(long **)(param_1 + 0x1058);
    do {
      plVar2 = local_38;
      plVar1 = (long *)local_38[1];
      if ((long *)local_38[1] == (long *)0x0) {
        do {
          plVar3 = (long *)plVar2[2];
          bVar4 = (long *)*plVar3 != plVar2;
          plVar2 = plVar3;
        } while (bVar4);
      }
      else {
        do {
          plVar3 = plVar1;
          plVar1 = (long *)*plVar3;
        } while ((long *)*plVar3 != (long *)0x0);
      }
      if (*(int *)(local_38[0x49] + 0x238 + (param_2 & 0xffffffff) * 4) == param_3) {
        FUN_100371040(param_1,&local_38);
      }
      local_38 = plVar3;
    } while (plVar3 != (long *)(param_1 + 0x1060));
  }
  return;
}

