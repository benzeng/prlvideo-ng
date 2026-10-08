
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c14ec0(ulong param_1,undefined8 param_2,ulong param_3,byte *param_4,undefined1 *param_5,
                  undefined8 param_6,int param_7)

{
  ulong uVar1;
  ulong in_XMM0_Qb;
  ulong uVar2;
  ulong uVar3;
  ulong in_XMM2_Qb;
  ulong uVar4;
  ulong local_28;
  ulong uStack_20;
  
  uVar1 = (param_1 & 0xffffffffffff0000 | (ulong)*param_4) & _DAT_101dae740;
  uVar2 = (in_XMM0_Qb & 0xffffffffffff0000 | (ulong)param_4[4]) & _UNK_101dae748;
  uVar3 = ((param_3 & 0xffffffffffff0000 | (ulong)param_4[1]) & _DAT_101dae740) << 8 | uVar1;
  uVar4 = ((in_XMM2_Qb & 0xffffffffffff0000 | (ulong)param_4[5]) & _UNK_101dae748) << 8 | uVar2;
  local_28 = ((uVar3 & 0xffffffffffff0000 | (ulong)param_4[3]) & _DAT_101dae740) << 0x18 |
             ((uVar1 & 0xffffffffffff0000 | (ulong)param_4[2]) & _DAT_101dae740) << 0x10 | uVar3;
  uStack_20 = ((uVar4 & 0xffffffffffff0000 | (ulong)param_4[7]) & _UNK_101dae748) << 0x18 |
              ((uVar2 & 0xffffffffffff0000 | (ulong)param_4[6]) & _UNK_101dae748) << 0x10 | uVar4;
  if (param_7 == 0) {
    FUN_100c15a80(&local_28,param_6);
  }
  else {
    FUN_100c15910();
  }
  *param_5 = (char)local_28;
  param_5[1] = (char)(local_28 >> 8);
  param_5[2] = (char)(local_28 >> 0x10);
  param_5[3] = (char)(local_28 >> 0x18);
  param_5[4] = (char)uStack_20;
  param_5[5] = (char)(uStack_20 >> 8);
  param_5[6] = (char)(uStack_20 >> 0x10);
  param_5[7] = (char)(uStack_20 >> 0x18);
  return;
}

