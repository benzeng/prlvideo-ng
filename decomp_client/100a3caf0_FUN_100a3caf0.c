
void FUN_100a3caf0(long param_1,int param_2,ulong param_3,int param_4,char param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  ulong local_38;
  undefined1 local_30 [8];
  
  local_38 = param_3;
  if (param_4 == 1) {
    if (*(int *)(*(long *)(param_1 + 0x30 + (long)param_2 * 8) + 0x14) == 0) {
      FUN_100a3e3e0(param_1,param_2,1);
    }
    FUN_100a40280(param_1 + 0x30 + (long)param_2 * 8,&local_38,local_30);
  }
  else if (param_5 != '\0') {
    plVar2 = *(long **)(param_1 + 0x30 + (long)param_2 * 8);
    if (*(uint *)(plVar2 + 4) != 0) {
      uVar4 = (uint)(param_3 >> 0x1f) ^ (uint)param_3 ^ *(uint *)((long)plVar2 + 0x24);
      plVar3 = *(long **)(plVar2[1] + ((ulong)uVar4 % (ulong)*(uint *)(plVar2 + 4)) * 8);
      if (plVar3 != plVar2) {
        plVar1 = (long *)(param_1 + 0x30 + (long)param_2 * 8);
        do {
          if ((*(uint *)(plVar3 + 1) == uVar4) && (plVar3[2] == param_3)) {
            if (plVar3 == plVar2) {
              return;
            }
            FUN_100a40410(plVar1,&local_38);
            if (*(int *)(*plVar1 + 0x14) != 0) {
              return;
            }
            FUN_100a3e3e0(param_1,param_2,0);
            return;
          }
          plVar3 = (long *)*plVar3;
        } while (plVar3 != plVar2);
      }
    }
  }
  return;
}

