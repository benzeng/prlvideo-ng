
void FUN_100304730(long param_1,int param_2,ulong param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  ulong uVar5;
  int iVar6;
  uint local_24;
  
  uVar5 = param_3 & 0xffffffff;
  iVar6 = (int)param_3;
  if (*(uint *)(param_1 + 0x25c8) < 0x20) {
    uVar2 = 0x20;
    param_3 = uVar5;
    do {
      uVar2 = uVar2 >> 1;
      param_3 = (ulong)((uint)param_3 ^ (uint)param_3 >> (sbyte)uVar2);
    } while (*(uint *)(param_1 + 0x25c8) < uVar2);
  }
  local_24 = 0;
  for (piVar4 = *(int **)(param_1 + 0x1dc8 + (param_3 & 0xff) * 8); piVar4 != (int *)0x0;
      piVar4 = *(int **)(piVar4 + 2)) {
    if (*piVar4 == iVar6) {
      local_24 = piVar4[1];
      break;
    }
  }
  if ((iVar6 != 0) && (local_24 == 0)) {
    (*(code *)DAT_1011c4a88[0x27b])(*DAT_1011c4a88,1,&local_24);
    FUN_1003061a0(param_1,uVar5,local_24);
  }
  uVar2 = 0;
  if (param_2 < 0x8c87) {
    if (param_2 == 0x8914) {
      uVar2 = *(uint *)(param_1 + 0x25d0);
      *(int *)(param_1 + 0x25d0) = iVar6;
    }
    else if (param_2 == 0x8c2f) {
      uVar2 = *(uint *)(param_1 + 0x25d4);
      *(int *)(param_1 + 0x25d4) = iVar6;
    }
  }
  else if (param_2 == 0x8c87) {
    uVar2 = *(uint *)(param_1 + 0x25dc);
    *(int *)(param_1 + 0x25dc) = iVar6;
  }
  else if (param_2 == 0x8c88) {
    uVar2 = *(uint *)(param_1 + 0x25e0);
    *(int *)(param_1 + 0x25e0) = iVar6;
  }
  if (iVar6 == 0) {
    if (uVar2 != 0) {
      uVar5 = (ulong)uVar2;
      if (*(uint *)(param_1 + 0x25c8) < 0x20) {
        uVar3 = 0x20;
        uVar5 = (ulong)uVar2;
        do {
          uVar3 = uVar3 >> 1;
          uVar5 = (ulong)((uint)uVar5 ^ (uint)uVar5 >> (sbyte)uVar3);
        } while (*(uint *)(param_1 + 0x25c8) < uVar3);
      }
      uVar3 = 0;
      for (puVar1 = *(uint **)(param_1 + 0x1dc8 + (uVar5 & 0xff) * 8); puVar1 != (uint *)0x0;
          puVar1 = *(uint **)(puVar1 + 2)) {
        if (*puVar1 == uVar2) {
          uVar3 = puVar1[1];
          break;
        }
      }
      uVar5 = (ulong)uVar3;
      if (*(uint *)(param_1 + 0x1db8) < 0x20) {
        uVar2 = 0x20;
        do {
          uVar2 = uVar2 >> 1;
          uVar5 = (ulong)((uint)uVar5 ^ (uint)uVar5 >> (sbyte)uVar2);
        } while (*(uint *)(param_1 + 0x1db8) < uVar2);
      }
      for (puVar1 = *(uint **)(param_1 + 0x15b8 + (uVar5 & 0xff) * 8); puVar1 != (uint *)0x0;
          puVar1 = *(uint **)(puVar1 + 4)) {
        if (*puVar1 == uVar3) {
          if (*(long *)(puVar1 + 2) != 0) {
            *(undefined4 *)(*(long *)(puVar1 + 2) + 4) = 0xffffffff;
          }
          break;
        }
      }
    }
    (*(code *)DAT_1011c4a88[0x27f])(*DAT_1011c4a88,param_2);
  }
  else {
    uVar2 = local_24;
    if (*(uint *)(param_1 + 0x1db8) < 0x20) {
      uVar3 = 0x20;
      do {
        uVar3 = uVar3 >> 1;
        uVar2 = uVar2 ^ uVar2 >> (sbyte)uVar3;
      } while (*(uint *)(param_1 + 0x1db8) < uVar3);
    }
    for (puVar1 = *(uint **)(param_1 + 0x15b8 + (ulong)(uVar2 & 0xff) * 8); puVar1 != (uint *)0x0;
        puVar1 = *(uint **)(puVar1 + 4)) {
      if (*puVar1 == local_24) {
        if (*(long *)(puVar1 + 2) != 0) {
          *(undefined4 *)(*(long *)(puVar1 + 2) + 4) = 0xfffffffe;
        }
        break;
      }
    }
    (*(code *)DAT_1011c4a88[0x27e])(*DAT_1011c4a88,param_2,local_24);
  }
  return;
}

