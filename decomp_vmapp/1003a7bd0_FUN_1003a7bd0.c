
void FUN_1003a7bd0(long *param_1,uint *param_2)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  
  *(byte *)((long)param_1 + 0x39) = *(byte *)((long)param_1 + 0x39) & 0xfe;
  uVar5 = *param_2;
  *(char *)(param_1 + 7) = (char)(uVar5 >> 0xc);
  uVar5 = (uVar5 >> 0xc & 0xff) - 6;
  if (uVar5 < 0xb) {
    bVar2 = (byte)(0x593 >> ((byte)uVar5 & 0x1f)) & 1;
  }
  else {
    bVar2 = 0;
  }
  *(byte *)((long)param_1 + 0x35) = *(byte *)((long)param_1 + 0x35) & 0xfe | bVar2;
  lVar1 = *(long *)(*param_1 + 0x40);
  lVar4 = FUN_1003a7de0(*(undefined2 *)(*param_1 + 0x4c));
  bVar2 = *(byte *)((long)param_1 + 0x35) & 0xfb |
          -((uint)((ulong)((long)param_1 - lVar1) >> 6) < (*(ushort *)(lVar4 + 0x1c) & 0xf)) & 4U;
  *(byte *)((long)param_1 + 0x35) = bVar2;
  *(undefined1 *)((long)param_1 + 0x31) = 0;
  *(undefined2 *)((long)param_1 + 0x32) = 0x201;
  *(undefined1 *)((long)param_1 + 0x34) = 3;
  uVar5 = *param_2;
  if ((uVar5 & 3) == 2) {
    uVar6 = uVar5 >> 2 & 3;
    if (uVar6 == 2) {
      *(uint *)((long)param_1 + 0x31) = (uVar5 >> 4 & 3) * 0x1010101;
      *(char *)(param_1 + 6) = (char)(1 << ((byte)(uVar5 >> 4) & 3));
    }
    else if (uVar6 == 1) {
      bVar3 = (byte)uVar5 >> 4 & 3;
      *(byte *)((long)param_1 + 0x31) = bVar3;
      bVar8 = (byte)*param_2 >> 6;
      *(byte *)((long)param_1 + 0x32) = bVar8;
      bVar9 = *(byte *)((long)param_2 + 1) & 3;
      *(byte *)((long)param_1 + 0x33) = bVar9;
      bVar7 = (byte)(*param_2 >> 10) & 3;
      *(byte *)((long)param_1 + 0x34) = bVar7;
      *(byte *)(param_1 + 6) =
           (byte)(1 << bVar7) | (byte)(1 << bVar9) | (byte)(1 << bVar8) | (byte)(1 << bVar3);
    }
    else if (uVar6 == 0) {
      *(byte *)(param_1 + 6) = (byte)uVar5 >> 4;
    }
  }
  else if ((uVar5 & 3) == 1) {
    *(undefined1 *)(param_1 + 6) = 1;
  }
  if (param_2[1] != 0) {
    uVar5 = param_2[1] >> 6 & 0xff;
    if (uVar5 == 3) {
      bVar2 = bVar2 | 0x18;
    }
    else if (uVar5 == 2) {
      bVar2 = bVar2 | 0x10;
    }
    else {
      if (uVar5 != 1) goto LAB_1003a7d43;
      bVar2 = bVar2 | 8;
    }
    *(byte *)((long)param_1 + 0x35) = bVar2;
  }
LAB_1003a7d43:
  bVar2 = (byte)param_2[2];
  if (bVar2 == 0) {
    return;
  }
  bVar3 = *(byte *)(param_1 + 7);
  if (bVar3 < 0x19) {
    switch(bVar3) {
    case 1:
      goto switchD_1003a7d6b_caseD_1;
    case 2:
      uVar5 = param_2[3];
      *(uint *)((long)param_1 + 0x2c) = uVar5;
      break;
    case 3:
    case 8:
      *(uint *)((long)param_1 + 0x2c) = param_2[3];
      uVar5 = param_2[7];
      break;
    default:
      goto switchD_1003a7d6b_caseD_4;
    }
  }
  else {
    if (bVar3 == 0x19) {
switchD_1003a7d6b_caseD_1:
      if (bVar2 != 2) {
        if (bVar2 != 1) {
          return;
        }
        uVar5 = param_2[3];
        *(uint *)(param_1 + 5) = uVar5;
        *(uint *)((long)param_1 + 0x2c) = uVar5;
        return;
      }
      *(uint *)((long)param_1 + 0x2c) = param_2[7];
    }
switchD_1003a7d6b_caseD_4:
    uVar5 = param_2[3];
  }
  *(uint *)(param_1 + 5) = uVar5;
  return;
}

