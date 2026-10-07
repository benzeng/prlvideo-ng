
void FUN_100304a00(long param_1,undefined8 param_2,undefined8 param_3,uint *param_4,char param_5)

{
  ulong uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if ((int)param_3 != 0x8865) {
                    /* WARNING: Could not recover jumptable at 0x000100304a43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)DAT_1011c4a88[0x280])
              (*DAT_1011c4a88,param_2,param_3,param_4,(code *)DAT_1011c4a88[0x280]);
    return;
  }
  uVar5 = 0;
  iVar4 = (int)param_2;
  if (iVar4 < 0x8c87) {
    if (iVar4 == 0x8914) {
      uVar5 = *(uint *)(param_1 + 0x25d0);
    }
    else if (iVar4 == 0x8c2f) {
      uVar5 = *(uint *)(param_1 + 0x25d4);
    }
  }
  else if (iVar4 == 0x8c87) {
    uVar5 = *(uint *)(param_1 + 0x25dc);
  }
  else if (iVar4 == 0x8c88) {
    uVar5 = *(uint *)(param_1 + 0x25e0);
  }
  if (param_5 != '\0') {
    uVar1 = (ulong)uVar5;
    if (*(uint *)(param_1 + 0x25c8) < 0x20) {
      uVar3 = 0x20;
      uVar1 = (ulong)uVar5;
      do {
        uVar3 = uVar3 >> 1;
        uVar1 = (ulong)((uint)uVar1 ^ (uint)uVar1 >> (sbyte)uVar3);
      } while (*(uint *)(param_1 + 0x25c8) < uVar3);
    }
    puVar2 = *(uint **)(param_1 + 0x1dc8 + (uVar1 & 0xff) * 8);
    if (puVar2 == (uint *)0x0) {
      uVar5 = 0;
    }
    else {
      do {
        if (*puVar2 == uVar5) {
          uVar5 = puVar2[1];
          goto LAB_100304adc;
        }
        puVar2 = *(uint **)(puVar2 + 2);
      } while (puVar2 != (uint *)0x0);
      uVar5 = 0;
    }
  }
LAB_100304adc:
  *param_4 = uVar5;
  return;
}

