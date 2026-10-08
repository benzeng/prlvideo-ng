
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c15c20(ulong param_1,byte *param_2,byte *param_3,long param_4,undefined8 param_5,
                  byte *param_6,uint *param_7,int param_8)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  ulong in_XMM0_Qb;
  ulong uVar5;
  ulong extraout_XMM0_Qb;
  ulong extraout_XMM0_Qb_00;
  ulong uVar6;
  ulong uVar7;
  ulong local_48;
  ulong uStack_40;
  
  uVar3 = *param_7;
  if (param_8 == 0) {
    while (param_4 != 0) {
      param_4 = param_4 + -1;
      if (uVar3 == 0) {
        uVar4 = (param_1 & 0xffffffffffff0000 | (ulong)*param_6) & _DAT_101dae740;
        uVar5 = (in_XMM0_Qb & 0xffffffffffff0000 | (ulong)param_6[4]) & _UNK_101dae748;
        uVar6 = ((_DAT_101dae740 & 0xffffffffffff0000 | (ulong)param_6[1]) & _DAT_101dae740) << 8 |
                uVar4;
        uVar7 = ((_UNK_101dae748 & 0xffffffffffff0000 | (ulong)param_6[5]) & _UNK_101dae748) << 8 |
                uVar5;
        local_48 = ((uVar6 & 0xffffffffffff0000 | (ulong)param_6[3]) & _DAT_101dae740) << 0x18 |
                   ((uVar4 & 0xffffffffffff0000 | (ulong)param_6[2]) & _DAT_101dae740) << 0x10 |
                   uVar6;
        uStack_40 = ((uVar7 & 0xffffffffffff0000 | (ulong)param_6[7]) & _UNK_101dae748) << 0x18 |
                    ((uVar5 & 0xffffffffffff0000 | (ulong)param_6[6]) & _UNK_101dae748) << 0x10 |
                    uVar7;
        param_1 = FUN_100c15910(&local_48,param_5);
        *param_6 = (byte)local_48;
        param_6[1] = (byte)(local_48 >> 8);
        param_6[2] = (byte)(local_48 >> 0x10);
        param_6[3] = (byte)(local_48 >> 0x18);
        param_6[4] = (byte)uStack_40;
        param_6[5] = (byte)(uStack_40 >> 8);
        param_6[6] = (byte)(uStack_40 >> 0x10);
        param_6[7] = (byte)(uStack_40 >> 0x18);
        in_XMM0_Qb = extraout_XMM0_Qb_00;
      }
      bVar1 = *param_2;
      param_2 = param_2 + 1;
      bVar2 = param_6[(int)uVar3];
      param_6[(int)uVar3] = bVar1;
      *param_3 = bVar2 ^ bVar1;
      param_3 = param_3 + 1;
      uVar3 = uVar3 + 1 & 7;
    }
  }
  else {
    while (param_4 != 0) {
      param_4 = param_4 + -1;
      if (uVar3 == 0) {
        uVar4 = (param_1 & 0xffffffffffff0000 | (ulong)*param_6) & _DAT_101dae740;
        uVar5 = (in_XMM0_Qb & 0xffffffffffff0000 | (ulong)param_6[4]) & _UNK_101dae748;
        uVar6 = ((_DAT_101dae740 & 0xffffffffffff0000 | (ulong)param_6[1]) & _DAT_101dae740) << 8 |
                uVar4;
        uVar7 = ((_UNK_101dae748 & 0xffffffffffff0000 | (ulong)param_6[5]) & _UNK_101dae748) << 8 |
                uVar5;
        local_48 = ((uVar6 & 0xffffffffffff0000 | (ulong)param_6[3]) & _DAT_101dae740) << 0x18 |
                   ((uVar4 & 0xffffffffffff0000 | (ulong)param_6[2]) & _DAT_101dae740) << 0x10 |
                   uVar6;
        uStack_40 = ((uVar7 & 0xffffffffffff0000 | (ulong)param_6[7]) & _UNK_101dae748) << 0x18 |
                    ((uVar5 & 0xffffffffffff0000 | (ulong)param_6[6]) & _UNK_101dae748) << 0x10 |
                    uVar7;
        param_1 = FUN_100c15910(&local_48,param_5);
        *param_6 = (byte)local_48;
        param_6[1] = (byte)(local_48 >> 8);
        param_6[2] = (byte)(local_48 >> 0x10);
        param_6[3] = (byte)(local_48 >> 0x18);
        param_6[4] = (byte)uStack_40;
        param_6[5] = (byte)(uStack_40 >> 8);
        param_6[6] = (byte)(uStack_40 >> 0x10);
        param_6[7] = (byte)(uStack_40 >> 0x18);
        in_XMM0_Qb = extraout_XMM0_Qb;
      }
      bVar1 = param_6[(int)uVar3];
      bVar2 = *param_2;
      param_2 = param_2 + 1;
      *param_3 = bVar1 ^ bVar2;
      param_3 = param_3 + 1;
      param_6[(int)uVar3] = bVar1 ^ bVar2;
      uVar3 = uVar3 + 1 & 7;
    }
  }
  *param_7 = uVar3;
  return;
}

