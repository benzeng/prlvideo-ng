
void FUN_10035f410(long param_1,long param_2,undefined8 *param_3,uint param_4,uint param_5,
                  long param_6,int *param_7,uint param_8,undefined4 param_9,undefined8 param_10)

{
  uint *puVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  ulong uVar6;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_60;
  uint local_5c;
  uint local_58;
  undefined4 local_54;
  long local_50;
  undefined4 local_48;
  uint local_44;
  uint local_40;
  undefined4 local_3c;
  long local_38;
  
  FUN_100384680(*(undefined8 *)(param_1 + 0x28),param_2,param_4);
  bVar5 = (byte)param_9;
  if (*(uint *)(param_6 + 0x1c) < 2) {
    uVar4 = FUN_10032df20(param_6);
    if (((((uVar4 < 2) && (*(uint *)(param_6 + 0x14) < 2)) && (*param_7 == 0)) &&
        ((param_7[1] == 0 && (param_7[2] == *(int *)(param_6 + 0xc))))) &&
       (param_7[3] == *(int *)(param_6 + 0x10))) {
      uVar6 = 0;
      if ((*(ushort *)(param_6 + 0xb0) & 1) == 0) {
        uVar6 = (ulong)param_8;
      }
      puVar1 = (uint *)(*(long *)(*(long *)(*(long *)(param_6 + 0x40) + uVar6 * 8) + 0x88) +
                       (ulong)param_8 * 4);
      *puVar1 = *puVar1 | 1 << (bVar5 & 0x1f);
      goto LAB_10035f4d1;
    }
  }
  FUN_100384680(*(undefined8 *)(param_1 + 0x28),param_6,param_8,param_9);
LAB_10035f4d1:
  if ((((ulong)*(uint *)(param_2 + 8) - 0x53 < 0x11) &&
      (*(uint *)(param_2 + 8) == *(uint *)(param_6 + 8))) &&
     ((*(uint *)(*(long *)(param_2 + 0x90) + (ulong)param_4 * 4) >> (param_5 & 0x1f) & 1) != 0)) {
    local_48 = *(undefined4 *)(**(long **)(param_2 + 0x40) + 0x1c);
    bVar3 = (byte)param_5 & 0x1f;
    local_44 = *(uint *)(param_2 + 0xc) >> bVar3;
    if (*(uint *)(param_2 + 0xc) >> bVar3 == 0) {
      local_44 = 1;
    }
    if (*(int *)(param_2 + 0x24) == 7) {
      local_40 = FUN_10032df20(param_2);
    }
    else {
      bVar3 = (byte)param_5 & 0x1f;
      local_40 = 1;
      if (*(uint *)(param_2 + 0x10) >> bVar3 != 0) {
        local_40 = *(uint *)(param_2 + 0x10) >> bVar3;
      }
    }
    local_3c = FUN_10032e340(param_2,param_4,param_5);
    lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 0x920);
    uVar4 = FUN_10032df60(param_2,param_4,param_5);
    local_38 = (ulong)uVar4 + lVar2;
    local_60 = *(undefined4 *)(**(long **)(param_6 + 0x40) + 0x1c);
    local_5c = *(uint *)(param_6 + 0xc) >> (bVar5 & 0x1f);
    if (*(uint *)(param_6 + 0xc) >> (bVar5 & 0x1f) == 0) {
      local_5c = 1;
    }
    if (*(int *)(param_6 + 0x24) == 7) {
      local_58 = FUN_10032df20(param_6);
    }
    else {
      local_58 = 1;
      if (*(uint *)(param_6 + 0x10) >> (bVar5 & 0x1f) != 0) {
        local_58 = *(uint *)(param_6 + 0x10) >> (bVar5 & 0x1f);
      }
    }
    local_54 = FUN_10032e340(param_6,param_8,param_9);
    lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 0x920);
    uVar4 = FUN_10032df60(param_6,param_8,param_9);
    local_50 = (ulong)uVar4 + lVar2;
    local_78 = *param_3;
    uStack_70 = param_3[1];
    local_88 = *param_7;
    iStack_84 = param_7[1];
    iStack_80 = param_7[2];
    iStack_7c = param_7[3];
    FUN_1003c6660(&local_48,&local_78,&local_60,&local_88,1);
    local_a0 = *(undefined8 *)param_7;
    local_98 = *(undefined8 *)(param_7 + 2);
    local_90 = 0x100000000;
    FUN_10035e0e0(param_1,param_6,&local_a0,param_8,param_9);
  }
  else if ((*(int *)(param_2 + 0x24) != 5) && (*(int *)(param_6 + 0x24) != 5)) {
    local_b8 = *param_3;
    local_b0 = param_3[1];
    local_a8 = 0x100000000;
    local_d0 = *(undefined8 *)param_7;
    local_c8 = *(undefined8 *)(param_7 + 2);
    local_c0 = 0x100000000;
    FUN_1003890c0(*(undefined8 *)(param_1 + 0x20),param_2,&local_b8,param_4,param_5,param_6,
                  &local_d0,param_8,param_9,param_10);
  }
  return;
}

