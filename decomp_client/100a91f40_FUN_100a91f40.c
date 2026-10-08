
long * FUN_100a91f40(long *param_1,byte *param_2,uint *param_3)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  if (((param_3 != (uint *)0x0) || (uVar3 = 0, *(int *)(*param_1 + 0x20) != 0)) &&
     (uVar3 = ((uint)param_2[1] + ((uint)*param_2 * 0x401 >> 6 ^ (uint)*param_2 * 0x401)) * 0x401,
     uVar3 = ((uint)param_2[2] + (uVar3 >> 6 ^ uVar3)) * 0x401,
     uVar3 = ((uint)param_2[3] + (uVar3 >> 6 ^ uVar3)) * 0x401,
     uVar3 = ((uint)param_2[4] + (uVar3 >> 6 ^ uVar3)) * 0x401,
     uVar3 = ((uint)param_2[5] + (uVar3 >> 6 ^ uVar3)) * 0x401,
     uVar3 = ((uint)param_2[6] + (uVar3 >> 6 ^ uVar3)) * 0x401,
     uVar3 = ((uint)param_2[7] + (uVar3 >> 6 ^ uVar3)) * 0x401,
     uVar3 = ((uint)param_2[8] + (uVar3 >> 6 ^ uVar3)) * 0x401,
     uVar3 = ((uint)param_2[9] + (uVar3 >> 6 ^ uVar3)) * 0x401,
     uVar3 = ((uint)param_2[10] + (uVar3 >> 6 ^ uVar3)) * 0x401,
     uVar3 = ((uint)param_2[0xb] + (uVar3 >> 6 ^ uVar3)) * 0x401,
     uVar3 = ((uint)param_2[0xc] + (uVar3 >> 6 ^ uVar3)) * 0x401,
     uVar3 = ((uint)param_2[0xd] + (uVar3 >> 6 ^ uVar3)) * 0x401,
     uVar3 = ((uint)param_2[0xe] + (uVar3 >> 6 ^ uVar3)) * 0x401,
     uVar3 = ((uint)param_2[0xf] + (uVar3 >> 6 ^ uVar3)) * 0x401, uVar3 = (uVar3 >> 6 ^ uVar3) * 9,
     uVar3 = (uVar3 >> 0xb ^ uVar3) * 0x8001 ^ *(uint *)(*param_1 + 0x24), param_3 != (uint *)0x0))
  {
    *param_3 = uVar3;
  }
  plVar4 = (long *)*param_1;
  plVar5 = param_1;
  if (*(uint *)(plVar4 + 4) != 0) {
    uVar1 = (ulong)uVar3 % (ulong)*(uint *)(plVar4 + 4);
    plVar5 = (long *)(plVar4[1] + uVar1 * 8);
    plVar6 = *(long **)(plVar4[1] + uVar1 * 8);
    while (plVar6 != plVar4) {
      if (*(uint *)(plVar6 + 1) == uVar3) {
        iVar2 = FUN_100deb2c0(param_2,(long)plVar6 + 0xc);
        if (iVar2 == 0) {
          return plVar5;
        }
        plVar4 = (long *)*param_1;
        plVar6 = (long *)*plVar5;
      }
      plVar5 = plVar6;
      plVar6 = (long *)*plVar5;
    }
  }
  return plVar5;
}

