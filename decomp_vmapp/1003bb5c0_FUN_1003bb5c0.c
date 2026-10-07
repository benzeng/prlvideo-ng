
undefined8 FUN_1003bb5c0(long param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  byte *pbVar3;
  undefined8 uVar4;
  byte *pbVar5;
  uint uVar6;
  char *pcVar7;
  undefined8 uVar8;
  
  if (*(uint *)(param_2 + 0x48) != 0) {
    pbVar5 = (byte *)(*(long *)(param_2 + 0x40) + 0x39);
    uVar6 = 0;
    do {
      if (((*pbVar5 & 1) != 0) || ((pbVar5[-4] & 1) == 0)) {
        lVar2 = *(long *)(*(long *)(pbVar5 + -0x31) + 0x80);
        pbVar3 = (byte *)(lVar2 + 0x48);
        if (lVar2 == 0) {
          pbVar3 = (byte *)(*(long *)(pbVar5 + -0x31) + 0x7c);
        }
        if (7 < *pbVar3 - 1) {
          return 1;
        }
        if ((0x8bU >> (*pbVar3 - 1 & 0x1f) & 1) == 0) {
          return 1;
        }
      }
      uVar6 = uVar6 + 1;
      pbVar5 = pbVar5 + 0x40;
    } while (uVar6 < *(uint *)(param_2 + 0x48));
  }
  uVar1 = *(ushort *)(param_2 + 0x4c);
  uVar4 = 0;
  uVar8 = 0;
  switch(uVar1) {
  case 0:
  case 0xe:
  case 0x1e:
  case 0x38:
    FUN_1003c05a0();
    uVar4 = uVar8;
    break;
  case 1:
    FUN_1003bd320();
    uVar4 = uVar8;
    break;
  case 2:
  case 7:
  case 0x16:
  case 0x30:
    if (uVar1 < 0x16) {
      if (uVar1 == 2) {
        uVar4 = *(undefined8 *)(param_1 + 8);
        pcVar7 = "break;\n";
      }
      else {
        if (uVar1 != 7) {
          return 0;
        }
        uVar4 = *(undefined8 *)(param_1 + 8);
        pcVar7 = "continue;\n";
      }
    }
    else if (uVar1 == 0x16) {
      uVar4 = *(undefined8 *)(param_1 + 8);
      pcVar7 = "}\n";
    }
    else {
      if (uVar1 != 0x30) {
        return 0;
      }
      uVar4 = *(undefined8 *)(param_1 + 8);
      pcVar7 = "while (true) {\n";
    }
    FUN_10038e8e0(uVar4,pcVar7);
    uVar4 = 0;
    break;
  case 3:
  case 8:
  case 0xd:
    FUN_1003c0440();
    uVar4 = uVar8;
    break;
  case 4:
  case 5:
  case 0x2c:
  case 0x3e:
  case 0x3f:
    FUN_1003bbba0();
    uVar4 = uVar8;
    break;
  case 6:
  case 10:
  case 0x17:
  case 0x4c:
    FUN_1003c1ac0();
    uVar4 = uVar8;
    break;
  case 9:
  case 0x13:
  case 0x14:
  case 0x75:
  case 0x76:
  case 0x77:
    FUN_1003bf370();
    uVar4 = uVar8;
    break;
  case 0xb:
  case 0xc:
    FUN_1003c1c00();
    uVar4 = uVar8;
    break;
  case 0xf:
  case 0x10:
  case 0x11:
    FUN_1003c0110();
    uVar4 = uVar8;
    break;
  case 0x12:
  case 0x15:
  case 0x1f:
    FUN_1003be550();
    uVar4 = uVar8;
    break;
  case 0x18:
  case 0x1d:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x27:
  case 0x31:
  case 0x39:
  case 0x4f:
  case 0x50:
    FUN_1003be670();
    uVar4 = uVar8;
    break;
  case 0x19:
  case 0x1a:
  case 0x2f:
  case 0x44:
  case 0x4b:
    FUN_1003c07a0();
    uVar4 = uVar8;
    break;
  case 0x1b:
  case 0x1c:
  case 0x2b:
  case 0x36:
  case 0x56:
    FUN_1003bfeb0();
    uVar4 = uVar8;
    break;
  case 0x23:
  case 0x32:
  case 0x52:
    FUN_1003be9e0();
    uVar4 = uVar8;
    break;
  case 0x24:
  case 0x25:
  case 0x33:
  case 0x34:
  case 0x53:
  case 0x54:
    FUN_1003bec00();
    uVar4 = uVar8;
    break;
  case 0x26:
  case 0x51:
    uVar4 = FUN_1003bc680();
    return uVar4;
  case 0x28:
    FUN_1003bbdb0();
    uVar4 = uVar8;
    break;
  case 0x29:
  case 0x2a:
  case 0x55:
  case 0x57:
    FUN_1003bc140();
    uVar4 = uVar8;
    break;
  case 0x2d:
  case 0x2e:
    FUN_1003c1150();
    uVar4 = uVar8;
    break;
  default:
    uVar4 = 3;
    break;
  case 0x37:
    FUN_1003bda00();
    uVar4 = uVar8;
    break;
  case 0x3a:
    break;
  case 0x3b:
    FUN_1003bbf00();
    uVar4 = uVar8;
    break;
  case 0x3c:
    FUN_1003bcdf0();
    uVar4 = uVar8;
    break;
  case 0x3d:
    FUN_1003c0eb0();
    uVar4 = uVar8;
    break;
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
    FUN_1003c1d80();
    uVar4 = uVar8;
    break;
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x6d:
    FUN_1003c0950();
    uVar4 = uVar8;
    break;
  case 0x4d:
    FUN_1003bee10();
    uVar4 = uVar8;
    break;
  case 0x4e:
    FUN_1003bf450();
    uVar4 = uVar8;
    break;
  case 0x6c:
    FUN_1003c2060();
    uVar4 = uVar8;
    break;
  case 0x6e:
    FUN_1003c22c0();
    uVar4 = uVar8;
    break;
  case 0x6f:
    FUN_1003c2540();
    uVar4 = uVar8;
    break;
  case 0x86:
    FUN_1003c2790();
    uVar4 = uVar8;
    break;
  case 0x8a:
  case 0x8b:
    FUN_1003c28f0();
    uVar4 = uVar8;
    break;
  case 0xdb:
    FUN_1003c1500();
    uVar4 = uVar8;
    break;
  case 0xdc:
    FUN_1003c1860();
    uVar4 = uVar8;
    break;
  case 0xdd:
    FUN_1003bc3a0();
    uVar4 = uVar8;
    break;
  case 0xde:
    FUN_1003bc4f0();
    break;
  case 0xdf:
  case 0xe0:
    FUN_1003c1f00();
  }
  return uVar4;
}

