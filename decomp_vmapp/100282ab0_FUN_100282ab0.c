
undefined4 FUN_100282ab0(long *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long *local_958;
  code *pcStack_950;
  code *local_948;
  ulong uStack_940;
  long local_938;
  long **pplStack_930;
  ulong local_928;
  long *plStack_920;
  undefined8 local_918;
  undefined8 uStack_910;
  undefined8 local_908;
  undefined8 uStack_900;
  undefined8 local_8f8;
  undefined8 uStack_8f0;
  undefined8 local_8e8;
  int local_898;
  long local_890;
  undefined8 local_888;
  undefined4 *local_880;
  undefined4 local_878 [2];
  undefined8 local_870;
  long local_50;
  long local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  ulong local_30;
  long local_28;
  int local_20;
  
  local_890 = DAT_1011c3688;
  local_888 = *(undefined8 *)(*(long *)(DAT_1011c3688 + 0x60) + 0x20);
  local_880 = local_878;
  local_878[0] = 0;
  local_870 = 0;
  iVar1 = FUN_100410280(param_1[0x1a],&local_30,(int)param_1[0x32]);
  if (iVar1 == 0) {
    local_48 = param_1[0x1e];
    local_40 = *(undefined4 *)((long)param_1 + 0xec);
    local_3c = (uint)(local_20 == 1);
    local_38 = (undefined4)local_30;
    local_50 = local_28;
    local_8f8 = 0;
    uStack_8f0 = 0;
    local_908 = 0;
    uStack_900 = 0;
    local_918 = 0;
    uStack_910 = 0;
    local_8e8 = 0;
    local_898 = 0;
    local_948 = FUN_100281d60;
    pcStack_950 = FUN_100281d80;
    pplStack_930 = &local_958;
    plStack_920 = &local_50;
    local_928 = (ulong)(local_20 == 1);
    uStack_940 = local_30 & 0xffffffff;
    local_938 = local_28 * param_1[0x32];
    local_958 = param_1;
    FUN_1004035a0(param_1 + 0x29,&local_958,param_1[0x26],8000000);
    local_928 = local_928 | 0x1000;
    FUN_100281db0(param_1,&local_958);
    uVar2 = 0;
    if (local_898 == 0) goto LAB_100282c6c;
  }
  uVar3 = 0x30c00;
  if (local_20 != 1) {
    uVar3 = 0x31100;
  }
  uVar2 = (**(code **)(*param_1 + 0x58))(param_1,uVar3,param_1[0x1f],(char)param_1[0x20],0);
LAB_100282c6c:
  FUN_10008d470(&local_890);
  return uVar2;
}

