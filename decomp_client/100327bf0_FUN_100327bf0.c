
long * FUN_100327bf0(long *param_1,uint *param_2,uint *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  uint uVar5;
  
  plVar1 = (long *)*param_1;
  uVar5 = *(uint *)(plVar1 + 4);
  if ((param_3 != (uint *)0x0) || (uVar5 != 0)) {
    uVar3 = param_2[6] ^ *(uint *)((long)plVar1 + 0x24) ^ param_2[4] ^ param_2[5] ^ *param_2 ^
            param_2[1] ^ (1 - *param_2) + param_2[2] ^ (1 - param_2[1]) + param_2[3];
    if (param_3 != (uint *)0x0) {
      *param_3 = uVar3;
      uVar5 = *(uint *)(plVar1 + 4);
    }
    if (uVar5 != 0) {
      param_1 = (long *)(plVar1[1] + ((ulong)uVar3 % (ulong)uVar5) * 8);
      plVar2 = *(long **)(plVar1[1] + ((ulong)uVar3 % (ulong)uVar5) * 8);
      if (plVar2 != plVar1) {
        plVar4 = param_1;
        do {
          param_1 = plVar2;
          if (((((*(uint *)(param_1 + 1) == uVar3) &&
                (param_2[4] == *(uint *)((long)param_1 + 0x1c))) &&
               (param_2[5] == *(uint *)(param_1 + 4))) &&
              ((*param_2 == *(uint *)((long)param_1 + 0xc) &&
               (param_2[2] == *(uint *)((long)param_1 + 0x14))))) &&
             ((param_2[1] == *(uint *)(param_1 + 2) &&
              ((param_2[3] == *(uint *)(param_1 + 3) &&
               (param_2[6] == *(uint *)((long)param_1 + 0x24))))))) {
            return plVar4;
          }
          plVar2 = (long *)*param_1;
          plVar4 = param_1;
        } while ((long *)*param_1 != plVar1);
      }
    }
  }
  return param_1;
}

