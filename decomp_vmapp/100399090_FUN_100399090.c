
void FUN_100399090(int param_1,long param_2,uint param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined8 local_88;
  undefined8 uStack_80;
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  int local_5c;
  undefined4 local_58;
  undefined1 local_54;
  undefined4 local_50;
  undefined8 local_4c;
  undefined8 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_2c;
  
  param_1 = param_1 * 0x40;
  iVar1 = *(int *)(param_2 + (ulong)(param_1 + 0x110) * 4);
  uVar4 = *(uint *)(param_2 + (ulong)(param_1 + 0x111) * 4);
  iVar2 = *(int *)(param_2 + (ulong)(param_1 + 0x112) * 4);
  local_6c = 0x2600;
  if (iVar1 != 1) {
    local_6c = iVar1 != 0 | 0x2600;
  }
  if (iVar2 == 1) {
    local_70 = uVar4 != 1 | 0x2700;
  }
  else if (iVar2 == 0) {
    local_70 = 0x2600;
    if (uVar4 != 1) {
      local_70 = uVar4 != 0 | 0x2600;
    }
  }
  else {
    local_70 = 1 < uVar4 | 0x2702;
  }
  uVar5 = *(int *)(param_2 + (ulong)(param_1 + 0x10d) * 4) - 1;
  local_64 = 0x812f;
  local_68 = 0x812f;
  if (uVar5 < 5) {
    local_68 = *(undefined4 *)(&DAT_100b3f2e0 + (long)(int)uVar5 * 4);
  }
  uVar5 = *(int *)(param_2 + (ulong)(param_1 + 0x10e) * 4) - 1;
  if (uVar5 < 5) {
    local_64 = *(undefined4 *)(&DAT_100b3f2e0 + (long)(int)uVar5 * 4);
  }
  uVar5 = *(int *)(param_2 + (ulong)(param_1 + 0x119) * 4) - 1;
  local_60 = 0x812f;
  if (uVar5 < 5) {
    local_60 = *(undefined4 *)(&DAT_100b3f2e0 + (long)(int)uVar5 * 4);
  }
  local_5c = *(int *)(param_2 + (ulong)(param_1 + 0x113) * 4);
  if ((local_5c == 0x31544547) || (local_5c == 0x34544547)) {
    local_5c = 0;
  }
  if ((iVar1 == 3) || (local_58 = 1, uVar4 == 3)) {
    local_58 = *(undefined4 *)(param_2 + (ulong)(param_1 + 0x115) * 4);
  }
  local_50 = 0x203;
  local_2c = *(undefined4 *)(param_2 + (ulong)(param_1 + 0x10f) * 4);
  local_88 = 0;
  uStack_80 = 0;
  FUN_10038e060(&local_88,&local_2c);
  cVar3 = FUN_10038e320(param_3);
  if (cVar3 == '\0') {
    cVar3 = FUN_10038e310(param_3);
    if (cVar3 == '\0') {
      local_44 = uStack_80;
      local_4c = local_88;
    }
    else {
      local_4c = CONCAT44(uStack_80._4_4_,(int)local_88);
    }
  }
  else {
    local_4c = CONCAT44(local_4c._4_4_,uStack_80._4_4_);
  }
  if (*(int *)(param_2 + (ulong)(param_1 + 0x11d) * 4) != 0) {
    local_34 = 1;
    if ((int)param_3 < 0x66) {
      if (param_3 < 9) {
        uVar4 = 0x10a;
LAB_10039927c:
        if ((uVar4 >> (param_3 & 0x1f) & 1) != 0) goto LAB_100399284;
      }
    }
    else {
      param_3 = param_3 - 0x66;
      if (param_3 < 0xd) {
        uVar4 = 0x1015;
        goto LAB_10039927c;
      }
    }
  }
  local_34 = 0;
LAB_100399284:
  local_3c = 0;
  local_38 = 0x7f7fffff;
  local_54 = param_4;
  FUN_10039e9e0(&local_70);
  return;
}

