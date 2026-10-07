
int FUN_100527300(long param_1,uint *param_2,int param_3,undefined8 param_4,undefined8 param_5,
                 undefined4 param_6,undefined8 param_7)

{
  uint uVar1;
  long *plVar2;
  byte bVar3;
  int iVar4;
  long *plVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  long *plVar9;
  
  if ((param_2 == (uint *)0x0) || (param_3 < 0x30)) {
    iVar8 = -0xffffffd;
    if (1 < DAT_1011b55f8) {
      if (param_2 == (uint *)0x0) {
        param_3 = 0;
      }
      FUN_1008e3970("CHRSERVER","ChrDAStorage",2,
                    "window data (%p) is invalid (%d bytes): must be >= %ld",param_2,param_3,0x30);
    }
  }
  else {
    uVar1 = *param_2;
    uVar6 = uVar1 >> 0x10 ^ uVar1;
    uVar7 = (ulong)((uVar6 >> 8 ^ uVar6) & 0xff);
    plVar2 = *(long **)(param_1 + 8 + uVar7 * 8);
    plVar9 = (long *)(param_1 + 8 + uVar7 * 8);
    while (plVar5 = plVar2, plVar5 != (long *)0x0) {
      if (*(uint *)(plVar5 + 1) == uVar1) {
        iVar4 = FUN_1005278f0(param_1,param_2,param_4,param_7,plVar5);
        goto LAB_1005273e3;
      }
      plVar9 = plVar5;
      plVar2 = (long *)*plVar5;
    }
    iVar4 = FUN_1005274c0(param_1,param_2,param_4,param_5,param_6,param_7,plVar9);
LAB_1005273e3:
    iVar8 = iVar4;
    if ((iVar4 + 1U < 2) && (iVar8 = -0xffffffc, *plVar9 != 0)) {
      if (param_2[7] != 0) {
        bVar3 = FUN_100527c70(param_1,(long)param_2 +
                                      (ulong)param_2[5] * 0x10 + (ulong)param_2[6] * 2 + 0x30);
        *(byte *)(param_1 + 0x820) = *(byte *)(param_1 + 0x820) | bVar3;
      }
      iVar8 = iVar4;
      if (((param_2[4] & 0x44) == 4) && (uVar1 = *param_2, uVar1 != *(uint *)(param_1 + 0x808))) {
        *(uint *)(param_1 + 0x808) = uVar1;
        *(uint *)(param_1 + 0x824) = uVar1;
      }
    }
  }
  return iVar8;
}

