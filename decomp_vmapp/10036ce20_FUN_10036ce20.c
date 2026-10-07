
void FUN_10036ce20(long param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = param_2 * 0x40;
  *(undefined4 *)(param_1 + (ulong)(iVar1 + 0x100) * 4) = 0;
  if (param_2 < 8) {
    *(uint *)(param_1 + (ulong)(iVar1 + 0x101) * 4) = (uint)(param_2 == 0) * 3 + 1;
    *(undefined4 *)(param_1 + (ulong)(iVar1 + 0x102) * 4) = 2;
    *(undefined4 *)(param_1 + (ulong)(iVar1 + 0x103) * 4) = 1;
    *(uint *)(param_1 + (ulong)(iVar1 + 0x104) * 4) = (param_2 == 0) + 1;
    *(undefined4 *)(param_1 + (ulong)(iVar1 + 0x105) * 4) = 2;
    *(undefined4 *)(param_1 + (ulong)(iVar1 + 0x106) * 4) = 1;
    *(undefined4 *)(param_1 + (ulong)(iVar1 + 0x107) * 4) = 0;
    *(undefined4 *)(param_1 + (ulong)(iVar1 + 0x108) * 4) = 0;
    *(undefined4 *)(param_1 + (ulong)(iVar1 + 0x109) * 4) = 0;
    *(undefined4 *)(param_1 + (ulong)(iVar1 + 0x10a) * 4) = 0;
    *(uint *)(param_1 + (ulong)(iVar1 + 0x10b) * 4) = param_2;
    *(undefined4 *)(param_1 + (ulong)(iVar1 + 0x116) * 4) = 0;
    *(undefined4 *)(param_1 + (ulong)(iVar1 + 0x117) * 4) = 0;
    *(undefined4 *)(param_1 + (ulong)(iVar1 + 0x118) * 4) = 0;
    *(undefined4 *)(param_1 + (ulong)(iVar1 + 0x11a) * 4) = 1;
    *(undefined4 *)(param_1 + (ulong)(iVar1 + 0x11b) * 4) = 1;
    *(undefined4 *)(param_1 + (ulong)(iVar1 + 0x11c) * 4) = 1;
  }
  else if (0x13 < param_2) {
    return;
  }
  *(undefined4 *)(param_1 + (ulong)(iVar1 + 0x10c) * 4) = 1;
  *(undefined4 *)(param_1 + (ulong)(iVar1 + 0x10d) * 4) = 1;
  *(undefined4 *)(param_1 + (ulong)(iVar1 + 0x10e) * 4) = 1;
  *(undefined4 *)(param_1 + (ulong)(iVar1 + 0x10f) * 4) = 0;
  *(undefined4 *)(param_1 + (ulong)(iVar1 + 0x110) * 4) = 1;
  *(undefined4 *)(param_1 + (ulong)(iVar1 + 0x111) * 4) = 1;
  *(undefined4 *)(param_1 + (ulong)(iVar1 + 0x112) * 4) = 0;
  *(undefined4 *)(param_1 + (ulong)(iVar1 + 0x113) * 4) = 0;
  *(undefined4 *)(param_1 + (ulong)(iVar1 + 0x114) * 4) = 0;
  *(undefined4 *)(param_1 + (ulong)(iVar1 + 0x115) * 4) = 1;
  return;
}

