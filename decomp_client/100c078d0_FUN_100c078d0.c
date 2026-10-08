
void FUN_100c078d0(byte *param_1,byte *param_2,long param_3,undefined8 param_4,byte *param_5,
                  uint *param_6)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined4 local_48;
  undefined4 local_44;
  byte local_40 [4];
  byte local_3c;
  byte local_3b;
  byte local_3a;
  byte local_39;
  long local_38;
  
  lVar4 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar4;
  uVar2 = *param_6;
  local_48 = *(undefined4 *)param_5;
  local_44 = *(undefined4 *)(param_5 + 4);
  local_40[0] = *param_5;
  local_40[1] = param_5[1];
  local_40[2] = param_5[2];
  local_40[3] = param_5[3];
  local_3c = param_5[4];
  local_3b = param_5[5];
  local_3a = param_5[6];
  local_39 = param_5[7];
  if (param_3 != 0) {
    iVar3 = 0;
    do {
      param_3 = param_3 + -1;
      if (uVar2 == 0) {
        FUN_100c07a60(&local_48,param_4,1);
        local_40[0] = (byte)local_48;
        local_40[1] = (byte)((uint)local_48 >> 8);
        local_40[2] = (byte)((uint)local_48 >> 0x10);
        local_40[3] = (byte)((uint)local_48 >> 0x18);
        local_3c = (byte)local_44;
        local_3b = (byte)((uint)local_44 >> 8);
        local_3a = (byte)((uint)local_44 >> 0x10);
        local_39 = (byte)((uint)local_44 >> 0x18);
        iVar3 = iVar3 + 1;
      }
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      *param_2 = local_40[(int)uVar2] ^ bVar1;
      param_2 = param_2 + 1;
      uVar2 = uVar2 + 1 & 7;
    } while (param_3 != 0);
    if (iVar3 != 0) {
      *param_5 = (byte)local_48;
      param_5[1] = (byte)((uint)local_48 >> 8);
      param_5[2] = (byte)((uint)local_48 >> 0x10);
      param_5[3] = (byte)((uint)local_48 >> 0x18);
      param_5[4] = (byte)local_44;
      param_5[5] = (byte)((uint)local_44 >> 8);
      param_5[6] = (byte)((uint)local_44 >> 0x10);
      param_5[7] = (byte)((uint)local_44 >> 0x18);
    }
    lVar4 = *(long *)PTR____stack_chk_guard_1021e1840;
  }
  *param_6 = uVar2;
  if (lVar4 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

