
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10032f040(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,int param_7,undefined4 param_8,
                  undefined4 param_9,undefined4 param_10,uint *param_11)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 local_34;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  *(undefined4 *)((long)param_1 + 0xc) = param_4;
  *(undefined4 *)(param_1 + 2) = param_5;
  *(undefined4 *)((long)param_1 + 0x14) = param_6;
  *(int *)(param_1 + 3) = param_7;
  *(undefined4 *)((long)param_1 + 0x1c) = param_8;
  *(undefined4 *)(param_1 + 4) = param_9;
  *(undefined4 *)((long)param_1 + 0x24) = param_10;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[0xd] = param_1 + 0xe;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((long)param_1 + 0x84) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)((long)param_1 + 0xac) = 0;
  *(undefined8 *)((long)param_1 + 0xa4) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  uVar4 = *param_11;
  *(uint *)(param_1 + 0x16) = uVar4;
  *(undefined1 *)((long)param_1 + 0xb4) = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  uVar3 = 0;
  if (param_7 != 0) {
    FUN_10032f380(param_1 + 5,param_7);
    uVar3 = *(uint *)(param_1 + 3);
    uVar4 = (uint)*(uint3 *)(param_1 + 0x16);
  }
  if ((uVar4 & 7) == 1) {
    uVar3 = uVar3 / *(uint *)((long)param_1 + 0x1c);
  }
  uVar5 = (ulong)uVar3;
  lVar2 = param_1[0x13];
  uVar6 = lVar2 - param_1[0x12] >> 2;
  if (uVar6 < uVar5) {
    FUN_10032f560(param_1 + 0x12);
  }
  else if ((uVar5 < uVar6) && (lVar1 = param_1[0x12] + uVar5 * 4, lVar2 != lVar1)) {
    param_1[0x13] = (~((lVar2 + -4) - lVar1) & 0xfffffffffffffffcU) + lVar2;
  }
  *(undefined1 *)(param_1 + 0x1a) = 1;
  if ((*(ushort *)(param_1 + 0x16) & 0x2000) != 0) {
    uVar5 = (ulong)(uint)(*(int *)((long)param_1 + 0xc) << 2);
    local_34 = 0;
    lVar2 = param_1[0x18];
    uVar6 = lVar2 - param_1[0x17] >> 2;
    if (uVar5 < uVar6 || uVar5 - uVar6 == 0) {
      if ((uVar5 < uVar6) && (lVar1 = param_1[0x17] + uVar5 * 4, lVar2 != lVar1)) {
        param_1[0x18] = (~((lVar2 + -4) - lVar1) & 0xfffffffffffffffcU) + lVar2;
      }
    }
    else {
      FUN_10032f6b0(param_1 + 0x17,uVar5 - uVar6,&local_34);
    }
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  _DAT_1011c8128 = _DAT_1011c8128 + 1;
  return;
}

