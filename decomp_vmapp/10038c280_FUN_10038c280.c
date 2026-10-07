
void FUN_10038c280(long *param_1,long param_2,undefined4 param_3,undefined4 param_4,ulong param_5)

{
  int iVar1;
  long lVar2;
  undefined8 local_40;
  int local_38;
  int local_34;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x40) + (param_5 & 0xffffffff) * 8);
  iVar1 = *(int *)(lVar2 + 0x78);
  local_38 = 1;
  if (iVar1 != 0) {
    local_38 = iVar1;
  }
  local_40 = 0;
  local_34 = 1;
  FUN_10038e3f0(&local_40);
  (*DAT_1011c5738)(0x8d40,(int)param_1[4]);
  (**(code **)(*param_1 + 0x38))(param_1,lVar2,param_3,param_4);
  (*DAT_1011c5708)(0x88eb,**(undefined4 **)(param_2 + 0x58));
  (*DAT_1011c66f0)(0x806c,local_34 - local_40._4_4_);
  FUN_100389b40();
  (*DAT_1011c5708)(0x88eb,0);
  (*DAT_1011c66f0)(0x806c,0);
  return;
}

