
void FUN_100c19120(byte *param_1,byte *param_2,long param_3,undefined8 param_4,byte *param_5,
                  uint *param_6,int param_7)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint local_40;
  uint local_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  uVar3 = *param_6;
  if (param_7 == 0) {
    while (param_3 != 0) {
      param_3 = param_3 + -1;
      if (uVar3 == 0) {
        local_40 = (uint)param_5[3] |
                   (uint)param_5[2] << 8 | (uint)param_5[1] << 0x10 | (uint)*param_5 << 0x18;
        local_3c = (uint)param_5[7] |
                   (uint)param_5[6] << 8 | (uint)param_5[5] << 0x10 | (uint)param_5[4] << 0x18;
        FUN_100c184a0(&local_40,param_4);
        *param_5 = (byte)(local_40 >> 0x18);
        param_5[1] = (byte)(local_40 >> 0x10);
        param_5[2] = (byte)(local_40 >> 8);
        param_5[3] = (byte)local_40;
        param_5[4] = (byte)(local_3c >> 0x18);
        param_5[5] = (byte)(local_3c >> 0x10);
        param_5[6] = (byte)(local_3c >> 8);
        param_5[7] = (byte)local_3c;
      }
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      bVar2 = param_5[(int)uVar3];
      param_5[(int)uVar3] = bVar1;
      *param_2 = bVar2 ^ bVar1;
      param_2 = param_2 + 1;
      uVar3 = uVar3 + 1 & 7;
    }
  }
  else {
    while (param_3 != 0) {
      param_3 = param_3 + -1;
      if (uVar3 == 0) {
        local_40 = (uint)param_5[3] |
                   (uint)param_5[2] << 8 | (uint)param_5[1] << 0x10 | (uint)*param_5 << 0x18;
        local_3c = (uint)param_5[7] |
                   (uint)param_5[6] << 8 | (uint)param_5[5] << 0x10 | (uint)param_5[4] << 0x18;
        FUN_100c184a0(&local_40,param_4);
        *param_5 = (byte)(local_40 >> 0x18);
        param_5[1] = (byte)(local_40 >> 0x10);
        param_5[2] = (byte)(local_40 >> 8);
        param_5[3] = (byte)local_40;
        param_5[4] = (byte)(local_3c >> 0x18);
        param_5[5] = (byte)(local_3c >> 0x10);
        param_5[6] = (byte)(local_3c >> 8);
        param_5[7] = (byte)local_3c;
      }
      bVar1 = param_5[(int)uVar3];
      bVar2 = *param_1;
      param_1 = param_1 + 1;
      *param_2 = bVar1 ^ bVar2;
      param_2 = param_2 + 1;
      param_5[(int)uVar3] = bVar1 ^ bVar2;
      uVar3 = uVar3 + 1 & 7;
    }
  }
  *param_6 = uVar3;
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

