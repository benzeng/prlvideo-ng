
void FUN_10035e0e0(long param_1,long param_2,uint *param_3,uint param_4,undefined4 param_5)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  
  uVar5 = (ulong)param_4;
  bVar3 = (byte)param_5;
  if (param_3 == (uint *)0x0) {
    FUN_100382460(*(undefined8 *)(param_1 + 0x28),param_2,0,uVar5,param_5);
  }
  else if (((&DAT_100b3ca14)[(ulong)*(uint *)(param_2 + 8) * 8] & 4) == 0) {
    FUN_100382460(*(undefined8 *)(param_1 + 0x28),param_2,param_3,uVar5,param_5);
    if (*param_3 != 0) {
      return;
    }
    uVar4 = 1;
    if (*(uint *)(param_2 + 0xc) >> (bVar3 & 0x1f) != 0) {
      uVar4 = *(uint *)(param_2 + 0xc) >> (bVar3 & 0x1f);
    }
    if (param_3[2] != uVar4) {
      return;
    }
    iVar2 = *(int *)(param_2 + 0x24);
    if ((iVar2 != 2) && (iVar2 != 7)) {
      if (param_3[1] != 0) {
        return;
      }
      uVar4 = 1;
      if (*(uint *)(param_2 + 0x10) >> (bVar3 & 0x1f) != 0) {
        uVar4 = *(uint *)(param_2 + 0x10) >> (bVar3 & 0x1f);
      }
      if (param_3[3] != uVar4) {
        return;
      }
      if (iVar2 == 5) {
        if (param_3[4] != 0) {
          return;
        }
        uVar4 = 1;
        if (*(uint *)(param_2 + 0x14) >> (bVar3 & 0x1f) != 0) {
          uVar4 = *(uint *)(param_2 + 0x14) >> (bVar3 & 0x1f);
        }
        if (param_3[5] != uVar4) {
          return;
        }
      }
    }
  }
  else {
    local_48 = *param_3 & 0xfffffffc;
    local_44 = param_3[1] & 0xfffffffc;
    local_38 = param_3[4];
    uVar4 = param_3[2] + 3 & 0xfffffffc;
    local_40 = *(uint *)(param_2 + 0xc) >> (bVar3 & 0x1f);
    if (*(uint *)(param_2 + 0xc) >> (bVar3 & 0x1f) == 0) {
      local_40 = 1;
    }
    if (uVar4 < local_40) {
      local_40 = uVar4;
    }
    uVar4 = param_3[3] + 3 & 0xfffffffc;
    local_3c = *(uint *)(param_2 + 0x10) >> (bVar3 & 0x1f);
    if (*(uint *)(param_2 + 0x10) >> (bVar3 & 0x1f) == 0) {
      local_3c = 1;
    }
    if (uVar4 < local_3c) {
      local_3c = uVar4;
    }
    local_34 = param_3[5];
    FUN_100382460(*(undefined8 *)(param_1 + 0x28),param_2,&local_48,uVar5,param_5);
    if (local_48 != 0) {
      return;
    }
    uVar4 = 1;
    if (*(uint *)(param_2 + 0xc) >> (bVar3 & 0x1f) != 0) {
      uVar4 = *(uint *)(param_2 + 0xc) >> (bVar3 & 0x1f);
    }
    if (local_40 != uVar4) {
      return;
    }
    iVar2 = *(int *)(param_2 + 0x24);
    if ((iVar2 != 2) && (iVar2 != 7)) {
      if (local_44 != 0) {
        return;
      }
      uVar4 = 1;
      if (*(uint *)(param_2 + 0x10) >> (bVar3 & 0x1f) != 0) {
        uVar4 = *(uint *)(param_2 + 0x10) >> (bVar3 & 0x1f);
      }
      if (local_3c != uVar4) {
        return;
      }
      if (iVar2 == 5) {
        if (local_38 != 0) {
          return;
        }
        uVar4 = 1;
        if (*(uint *)(param_2 + 0x14) >> (bVar3 & 0x1f) != 0) {
          uVar4 = *(uint *)(param_2 + 0x14) >> (bVar3 & 0x1f);
        }
        if (local_34 != uVar4) {
          return;
        }
      }
    }
  }
  puVar1 = (uint *)(*(long *)(param_2 + 0x90) + uVar5 * 4);
  *puVar1 = *puVar1 | 1 << (bVar3 & 0x1f);
  return;
}

