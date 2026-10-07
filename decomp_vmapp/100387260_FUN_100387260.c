
void FUN_100387260(long *param_1,long param_2,uint param_3,uint param_4,ulong param_5)

{
  long lVar1;
  uint local_40 [3];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  lVar1 = 0;
  if ((param_5 & 0xffffffff) < (ulong)(*(long *)(param_2 + 0x48) - *(long *)(param_2 + 0x40) >> 3))
  {
    lVar1 = *(long *)(*(long *)(param_2 + 0x40) + (param_5 & 0xffffffff) * 8);
  }
  local_40[2] = 1;
  if (*(uint *)(lVar1 + 0x78) != 0) {
    local_40[2] = *(uint *)(lVar1 + 0x78);
  }
  if (param_4 < local_40[2]) {
    local_40[2] = param_4;
  }
  local_40[1] = 0;
  local_34 = 1;
  local_30 = 0;
  local_2c = 1;
  if (param_3 < local_40[2]) {
    local_40[0] = param_3;
    FUN_10038e3f0(local_40);
    (**(code **)(*param_1 + 0x30))(param_1);
    (*DAT_1011c5768)(*(undefined4 *)(lVar1 + 0x14),*(undefined4 *)(lVar1 + 0xc));
    (*DAT_1011c5708)(0x88ec,**(undefined4 **)(param_2 + 0x58));
    FUN_100383ac0();
    (*DAT_1011c5708)(0x88ec,0);
  }
  return;
}

