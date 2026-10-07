
void FUN_1002cbe20(undefined8 param_1,long param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  local_48 = (uint *)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_10008d2d0(&local_48,*(uint *)(*param_3 + 4) & 0xfffffff0,0x20);
  uVar1 = *(uint *)(*(long *)(param_2 + 0x458) + 0x104);
  uVar5 = (local_48[2] >> 0x15) + 1 & 0x7ff;
  uVar3 = *(uint *)(param_2 + 0x450);
  while( true ) {
    if (((uVar5 != 0) && (uVar3 != 0x69)) && (local_48[3] != 0)) {
      FUN_10008cba0(DAT_1011c3688,param_2 + 0x4d8 + (ulong)*(uint *)(param_2 + 0x43c),local_48[3],
                    uVar5);
    }
    *(int *)(param_2 + 0x43c) = *(int *)(param_2 + 0x43c) + uVar5;
    if ((((uVar5 == 0) || (uVar5 % uVar1 != 0)) ||
        (((*(byte *)((long)local_48 + 7) & 1) != 0 &&
         ((*(byte *)(*(long *)(param_2 + 0x458) + 0x90) & 2) == 0)))) ||
       (((*local_48 & 3) != 0 || (uVar3 = *local_48 & 0xfffffff0, uVar3 == 0)))) break;
    uVar4 = DAT_1011c5640;
    if (0xb0000000 < DAT_1011c5640) {
      uVar4 = 0xb0000000;
    }
    if (uVar4 <= uVar3) break;
    FUN_10008d3f0(&local_48);
    uStack_40 = 0;
    FUN_10008d2d0(&local_48,(ulong)uVar3,0x20);
    if ((((*(byte *)((long)local_48 + 6) & 0x80) == 0) ||
        (uVar5 = local_48[2], (uVar5 >> 8 & 0x7f) != *(uint *)(param_2 + 0x448))) ||
       ((uVar5 >> 0xf & 0xf) != (*(uint *)(param_2 + 0x44c) & 0xffffff7f))) break;
    uVar3 = uVar5 & 0xff;
    uVar2 = *(uint *)(param_2 + 0x450);
    if (uVar3 != uVar2) goto LAB_1002cbfbb;
    uVar5 = (uVar5 >> 0x15) + 1 & 0x7ff;
    if ((0x500 < uVar5) || (*(uint *)(param_2 + 0x438) < *(int *)(param_2 + 0x43c) + uVar5)) break;
  }
  uVar2 = *(uint *)(param_2 + 0x450);
LAB_1002cbfbb:
  if ((uVar2 == 0x69) && (*(int *)(param_2 + 0x44c) != 0)) {
    uVar3 = (uVar1 - 1) + *(int *)(param_2 + 0x43c);
    *(uint *)(param_2 + 0x43c) = uVar3 - uVar3 % uVar1;
  }
  FUN_10008d3f0(&local_48);
  return;
}

