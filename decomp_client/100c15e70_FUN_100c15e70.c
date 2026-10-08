
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c15e70(ulong param_1,ulong param_2,ulong param_3,ulong param_4,byte *param_5,
                  byte *param_6,long param_7,undefined8 param_8,byte *param_9,uint *param_10)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  ulong in_XMM0_Qb;
  ulong in_XMM1_Qb;
  ulong in_XMM2_Qb;
  ulong in_XMM3_Qb;
  ulong local_58;
  ulong uStack_50;
  byte local_40 [4];
  byte local_3c;
  byte local_3b;
  byte local_3a;
  byte local_39;
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar2;
  uVar3 = *param_10;
  local_40[0] = *param_9;
  local_40[1] = param_9[1];
  local_40[2] = param_9[2];
  local_40[3] = param_9[3];
  local_3c = param_9[4];
  local_3b = param_9[5];
  local_3a = param_9[6];
  local_39 = param_9[7];
  local_58 = ((param_4 & 0xffffffffffff0000 | (ulong)param_9[3]) & _DAT_101dae740) << 0x18 |
             ((param_3 & 0xffffffffffff0000 | (ulong)param_9[2]) & _DAT_101dae740) << 0x10 |
             ((param_2 & 0xffffffffffff0000 | (ulong)param_9[1]) & _DAT_101dae740) << 8 |
             (param_1 & 0xffffffffffff0000 | (ulong)*param_9) & _DAT_101dae740;
  uStack_50 = ((in_XMM3_Qb & 0xffffffffffff0000 | (ulong)param_9[7]) & _UNK_101dae748) << 0x18 |
              ((in_XMM2_Qb & 0xffffffffffff0000 | (ulong)param_9[6]) & _UNK_101dae748) << 0x10 |
              ((in_XMM1_Qb & 0xffffffffffff0000 | (ulong)param_9[5]) & _UNK_101dae748) << 8 |
              (in_XMM0_Qb & 0xffffffffffff0000 | (ulong)param_9[4]) & _UNK_101dae748;
  if (param_7 != 0) {
    iVar4 = 0;
    do {
      param_7 = param_7 + -1;
      if (uVar3 == 0) {
        FUN_100c15910(&local_58,param_8);
        local_40[0] = (byte)local_58;
        local_40[1] = (byte)(local_58 >> 8);
        local_40[2] = (byte)(local_58 >> 0x10);
        local_40[3] = (byte)(local_58 >> 0x18);
        local_3c = (byte)uStack_50;
        local_3b = (byte)(uStack_50 >> 8);
        local_3a = (byte)(uStack_50 >> 0x10);
        local_39 = (byte)(uStack_50 >> 0x18);
        iVar4 = iVar4 + 1;
      }
      bVar1 = *param_5;
      param_5 = param_5 + 1;
      *param_6 = local_40[(int)uVar3] ^ bVar1;
      param_6 = param_6 + 1;
      uVar3 = uVar3 + 1 & 7;
    } while (param_7 != 0);
    if (iVar4 != 0) {
      *param_9 = (byte)local_58;
      param_9[1] = (byte)(local_58 >> 8);
      param_9[2] = (byte)(local_58 >> 0x10);
      param_9[3] = (byte)(local_58 >> 0x18);
      param_9[4] = (byte)uStack_50;
      param_9[5] = (byte)(uStack_50 >> 8);
      param_9[6] = (byte)(uStack_50 >> 0x10);
      param_9[7] = (byte)(uStack_50 >> 0x18);
    }
    lVar2 = *(long *)PTR____stack_chk_guard_1021e1840;
  }
  *param_10 = uVar3;
  if (lVar2 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

