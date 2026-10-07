
ulong FUN_1003e2020(long *param_1)

{
  undefined2 uVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined1 uVar10;
  byte bVar11;
  bool bVar12;
  
  uVar3 = CONCAT11((char)*(undefined2 *)(param_1[0xb] + 2),
                   (char)((ushort)*(undefined2 *)(param_1[0xb] + 2) >> 8));
  bVar11 = *(byte *)(param_1[0xb] + 1);
  uVar1 = *(undefined2 *)(param_1[0xb] + 7);
  uVar4 = CONCAT11((char)uVar1,(char)((ushort)uVar1 >> 8));
  uVar5 = uVar4;
  if (((*(byte *)((long)param_1 + 0x6c) & 2) == 0) &&
     (uVar7 = *(uint *)(param_1 + 0x19), uVar7 != 0xffffffff)) {
    uVar6 = 100;
    if (uVar7 < 100) {
      uVar6 = uVar7;
    }
    uVar5 = 100;
    if (uVar7 < 100) {
      uVar5 = (ushort)uVar7;
    }
    if ((uint)uVar4 < (uVar6 & 0xffff)) {
      uVar5 = uVar4;
    }
  }
  if (uVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001003e2301. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar9 = (**(code **)(*param_1 + 0x260))(param_1);
    return uVar9;
  }
  puVar8 = _calloc(0x100,1);
  if (puVar8 == (undefined1 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001003e232b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar9 = (**(code **)(*param_1 + 0x268))(param_1,0x52400,param_1[0xc]);
    return uVar9;
  }
  bVar11 = bVar11 & 3;
  if (uVar3 < 0x1e) {
    switch(uVar3) {
    case 0:
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      uVar7 = 0x5c;
      if (bVar11 == 0) {
        uVar7 = 0x8c;
      }
      uVar5 = 0x5c;
      if (bVar11 == 0) {
        uVar5 = 0x8c;
      }
      puVar8[3] = (char)uVar7 + -4;
      uVar6 = *(uint *)(param_1 + 0x19);
      puVar8[4] = 0;
      puVar8[5] = 0;
      puVar8[6] = 0;
      iVar2 = *(int *)((long)param_1 + 0x7c);
      puVar8[7] = (iVar2 != 2) << 3;
      puVar8[8] = 0;
      puVar8[9] = 0;
      puVar8[10] = 3;
      puVar8[0xb] = 0x28;
      puVar8[0xc] = 0;
      puVar8[0xd] = 0x1b;
      puVar8[0xe] = 0;
      puVar8[0xf] = 0;
      puVar8[0x10] = 0;
      puVar8[0x11] = 0x1a;
      puVar8[0x12] = 0;
      puVar8[0x13] = 0;
      puVar8[0x14] = 0;
      puVar8[0x15] = 0x15;
      puVar8[0x16] = 0;
      puVar8[0x17] = 0;
      puVar8[0x18] = 0;
      puVar8[0x19] = 0x14;
      puVar8[0x1a] = 0;
      puVar8[0x1b] = 0;
      puVar8[0x1c] = 0;
      puVar8[0x1d] = 0x13;
      puVar8[0x1e] = 0;
      puVar8[0x1f] = 0;
      puVar8[0x20] = 0;
      puVar8[0x21] = 0x11;
      puVar8[0x22] = 0;
      puVar8[0x23] = 0;
      puVar8[0x24] = 0;
      puVar8[0x25] = 0x10;
      puVar8[0x26] = 0;
      puVar8[0x27] = 0;
      puVar8[0x28] = 0;
      puVar8[0x29] = 10;
      puVar8[0x2a] = 0;
      puVar8[0x2b] = 0;
      puVar8[0x2c] = 0;
      puVar8[0x2d] = 9;
      puVar8[0x2e] = 0;
      puVar8[0x2f] = 0;
      puVar8[0x30] = 0;
      puVar8[0x31] = 8;
      puVar8[0x32] = iVar2 != 2;
      uVar3 = (ushort)uVar7;
      if (uVar6 < uVar7) {
        uVar3 = (ushort)uVar6;
      }
      else {
        uVar6 = (uint)uVar5;
      }
      uVar5 = (ushort)uVar6;
      if (uVar4 < uVar3) {
        uVar5 = uVar4;
      }
      puVar8[0x33] = 0;
      puVar8[0x34] = 0;
      puVar8[0x35] = 1;
      puVar8[0x36] = 3;
      puVar8[0x37] = 8;
      puVar8[0x38] = 0;
      puVar8[0x39] = 0;
      puVar8[0x3a] = 0;
      puVar8[0x3b] = 2;
      puVar8[0x40] = 0;
      *(undefined4 *)(puVar8 + 0x3c) = 0;
      *(undefined2 *)(puVar8 + 0x41) = 0x301;
      puVar8[0x43] = 4;
      puVar8[0x48] = 0;
      *(undefined4 *)(puVar8 + 0x44) = 0;
      puVar8[0x49] = 3;
      puVar8[0x4a] = 3;
      puVar8[0x4b] = 4;
      puVar8[0x4c] = 0x29;
      puVar8[0x4d] = 0;
      puVar8[0x4e] = 0;
      puVar8[0x4f] = 0;
      puVar8[0x50] = 1;
      puVar8[0x51] = 0;
      puVar8[0x52] = 3;
      puVar8[0x53] = 0;
      puVar8[0x54] = 1;
      puVar8[0x55] = 5;
      puVar8[0x56] = 3;
      puVar8[0x57] = 0;
      puVar8[0x58] = 1;
      puVar8[0x59] = 8;
      puVar8[0x5a] = 3;
      puVar8[0x5b] = 0xc;
      *(undefined4 *)(puVar8 + 0x5c) = 0;
      *(undefined4 *)(puVar8 + 0x60) = 0x3000502;
      uVar7 = *(uint *)(param_1 + 0x19);
      break;
    case 1:
      uVar7 = *(uint *)(param_1 + 0x19);
      uVar5 = 0x14;
      if (uVar7 < 0x14) {
        uVar5 = (ushort)uVar7;
      }
      if (uVar4 < uVar5) {
        uVar5 = uVar4;
      }
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      uVar10 = 0xc;
      if (bVar11 != 2) {
        uVar10 = 0x14;
      }
      puVar8[3] = uVar10;
      puVar8[4] = 0;
      puVar8[5] = 0;
      puVar8[6] = 0;
      if (*(int *)((long)param_1 + 0x7c) == 2) {
        uVar10 = 0;
      }
      else {
        uVar10 = 8;
      }
      puVar8[7] = uVar10;
      puVar8[8] = 0;
      puVar8[9] = 1;
      puVar8[10] = 0xb;
      puVar8[0xb] = 8;
      puVar8[0xc] = 0;
      puVar8[0xd] = 0;
      puVar8[0xe] = 0;
      puVar8[0xf] = 2;
      *(undefined4 *)(puVar8 + 0x10) = 0;
      break;
    case 2:
      uVar7 = *(uint *)(param_1 + 0x19);
      uVar5 = 0x10;
      if (uVar7 < 0x10) {
        uVar5 = (ushort)uVar7;
      }
      if (uVar4 < uVar5) {
        uVar5 = uVar4;
      }
      uVar10 = 0xc;
      if (bVar11 != 2) {
        uVar10 = 0x10;
      }
      puVar8[3] = uVar10;
      puVar8[4] = 0;
      puVar8[5] = 0;
      puVar8[6] = 0;
      if (*(int *)((long)param_1 + 0x7c) == 2) {
        uVar10 = 0;
      }
      else {
        uVar10 = 8;
      }
      puVar8[7] = uVar10;
      puVar8[8] = 0;
      puVar8[9] = 2;
      puVar8[10] = 7;
LAB_1003e277d:
      puVar8[0xb] = 4;
      *(undefined4 *)(puVar8 + 0xc) = 0;
      break;
    case 3:
      uVar7 = *(uint *)(param_1 + 0x19);
      uVar5 = 0x14;
      if (uVar7 < 0x14) {
        uVar5 = (ushort)uVar7;
      }
      if (uVar4 < uVar5) {
        uVar5 = uVar4;
      }
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      uVar10 = 0xc;
      if (bVar11 != 2) {
        uVar10 = 0x14;
      }
      puVar8[3] = uVar10;
      puVar8[4] = 0;
      puVar8[5] = 0;
      puVar8[6] = 0;
      bVar12 = *(int *)((long)param_1 + 0x7c) != 2;
      puVar8[7] = bVar12 << 3;
      puVar8[8] = 0;
      puVar8[9] = 3;
      puVar8[10] = bVar12 | 2;
      puVar8[0xb] = 4;
      puVar8[0xc] = 0x29;
      puVar8[0xd] = 0;
      puVar8[0xe] = 0;
      puVar8[0xf] = 0;
      break;
    default:
switchD_1003e20d1_default:
      uVar7 = (**(code **)(*param_1 + 0x268))(param_1,0x52400,param_1[0xc]);
      goto LAB_1003e27ca;
    }
  }
  else if (uVar3 < 0x108) {
    if (uVar3 < 0x100) {
      if (uVar3 == 0x1e) {
        uVar7 = *(uint *)(param_1 + 0x19);
        uVar5 = 0x10;
        if (uVar7 < 0x10) {
          uVar5 = (ushort)uVar7;
        }
        if (uVar4 < uVar5) {
          uVar5 = uVar4;
        }
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = 0;
        uVar10 = 0xc;
        if (bVar11 != 2) {
          uVar10 = 0x10;
        }
        puVar8[3] = uVar10;
        puVar8[4] = 0;
        puVar8[5] = 0;
        puVar8[6] = 0;
        bVar12 = *(int *)((long)param_1 + 0x7c) != 2;
        puVar8[7] = bVar12 << 3;
        puVar8[8] = 0;
        puVar8[9] = 0x1e;
        puVar8[10] = bVar12 | 2;
        goto LAB_1003e277d;
      }
      if (uVar3 != 0x1f) goto switchD_1003e20d1_default;
      uVar7 = *(uint *)(param_1 + 0x19);
      uVar5 = 0x10;
      if (uVar7 < 0x10) {
        uVar5 = (ushort)uVar7;
      }
      if (uVar4 < uVar5) {
        uVar5 = uVar4;
      }
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      uVar10 = 0xc;
      if (bVar11 != 2) {
        uVar10 = 0x10;
      }
      puVar8[3] = uVar10;
      puVar8[4] = 0;
      puVar8[5] = 0;
      puVar8[6] = 0;
      bVar12 = *(int *)((long)param_1 + 0x7c) != 2;
      puVar8[7] = bVar12 << 3;
      puVar8[8] = 0;
      puVar8[9] = 0x1f;
      puVar8[10] = bVar12 | 6;
      puVar8[0xb] = 4;
      puVar8[0xc] = 0;
      puVar8[0xd] = 0;
      puVar8[0xe] = 1;
      puVar8[0xf] = 0;
    }
    else if (uVar3 == 0x100) {
      uVar7 = *(uint *)(param_1 + 0x19);
      uVar5 = 0xc;
      if (uVar7 < 0xc) {
        uVar5 = (ushort)uVar7;
      }
      if (uVar4 < uVar5) {
        uVar5 = uVar4;
      }
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0xc;
      puVar8[4] = 0;
      puVar8[5] = 0;
      puVar8[6] = 0;
      if (*(int *)((long)param_1 + 0x7c) == 2) {
        uVar10 = 0;
      }
      else {
        uVar10 = 8;
      }
      puVar8[7] = uVar10;
      puVar8[8] = 1;
      puVar8[9] = 0;
      puVar8[10] = 3;
      puVar8[0xb] = 0;
    }
    else {
      if (uVar3 != 0x105) goto switchD_1003e20d1_default;
      uVar7 = *(uint *)(param_1 + 0x19);
      uVar5 = 0x10;
      if (uVar7 < 0x10) {
        uVar5 = (ushort)uVar7;
      }
      if (uVar4 < uVar5) {
        uVar5 = uVar4;
      }
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      uVar10 = 0xc;
      if (bVar11 != 2) {
        uVar10 = 0x10;
      }
      puVar8[3] = uVar10;
      puVar8[4] = 0;
      puVar8[5] = 0;
      puVar8[6] = 0;
      if (*(int *)((long)param_1 + 0x7c) == 2) {
        uVar10 = 0;
      }
      else {
        uVar10 = 8;
      }
      puVar8[7] = uVar10;
      puVar8[8] = 1;
      puVar8[9] = 5;
      puVar8[10] = 7;
      puVar8[0xb] = 0;
    }
  }
  else {
    if (uVar3 != 0x108) goto switchD_1003e20d1_default;
    uVar7 = *(uint *)(param_1 + 0x19);
    uVar5 = 0x14;
    if (uVar7 < 0x14) {
      uVar5 = (ushort)uVar7;
    }
    if (uVar4 < uVar5) {
      uVar5 = uVar4;
    }
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = 0;
    uVar10 = 0xc;
    if (bVar11 != 2) {
      uVar10 = 0x14;
    }
    puVar8[3] = uVar10;
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8[6] = 0;
    if (*(int *)((long)param_1 + 0x7c) == 2) {
      uVar10 = 0;
    }
    else {
      uVar10 = 8;
    }
    puVar8[7] = uVar10;
    puVar8[8] = 1;
    puVar8[9] = 8;
    puVar8[10] = 3;
    puVar8[0xb] = 8;
    *(undefined4 *)(puVar8 + 0xc) = 0;
    *(undefined4 *)(puVar8 + 0x10) = 0x3000502;
  }
  uVar7 = (**(code **)(*param_1 + 0x278))(param_1,(ulong)uVar5,uVar7);
  _memcpy((void *)param_1[9],puVar8,(ulong)uVar5);
LAB_1003e27ca:
  _free(puVar8);
  return (ulong)uVar7;
}

