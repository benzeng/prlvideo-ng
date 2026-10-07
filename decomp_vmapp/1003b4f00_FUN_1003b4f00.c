
byte FUN_1003b4f00(undefined8 param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  byte bVar3;
  
  uVar1 = *(ushort *)(param_2 + 0x4c);
  bVar3 = 1;
  if (uVar1 < 0x36) {
    if (uVar1 != 1) {
      return 1;
    }
    lVar2 = *(long *)(param_2 + 0x40);
    if ((*(byte *)(lVar2 + 0x39) & 1) != 0) {
      return 0;
    }
    if ((byte)(*(char *)(lVar2 + 0x38) - 1U) < 2) {
      return 1;
    }
    if ((*(byte *)(lVar2 + 0x30) & *(byte *)(lVar2 + 0x30) - 1) == 0) {
      return 1;
    }
    bVar3 = *(byte *)(lVar2 + 0x35);
    goto LAB_1003b5091;
  }
  if (uVar1 < 0x57) {
    switch(uVar1) {
    case 0x36:
    case 0x3b:
      lVar2 = *(long *)(param_2 + 0x40);
      if ((*(byte *)(lVar2 + 0x39) & 1) == 0) {
        if ((byte)(*(char *)(lVar2 + 0x38) - 1U) < 2) {
          return 1;
        }
        if ((*(byte *)(lVar2 + 0x30) & *(byte *)(lVar2 + 0x30) - 1) == 0) {
          return 1;
        }
        if ((*(byte *)(lVar2 + 0x35) & 0x10) != 0) {
          return 1;
        }
      }
      if ((*(byte *)(lVar2 + 0x79) & 1) != 0) {
        return 0;
      }
      if ((byte)(*(char *)(lVar2 + 0x78) - 1U) < 2) {
        return 1;
      }
      if ((*(byte *)(lVar2 + 0x70) & *(byte *)(lVar2 + 0x70) - 1) == 0) {
        return 1;
      }
      bVar3 = *(byte *)(lVar2 + 0x75);
      break;
    case 0x37:
      lVar2 = *(long *)(param_2 + 0x40);
      if ((*(byte *)(lVar2 + 0x39) & 1) == 0) {
        if ((byte)(*(char *)(lVar2 + 0x38) - 1U) < 2) {
          return 1;
        }
        if ((*(byte *)(lVar2 + 0x30) & *(byte *)(lVar2 + 0x30) - 1) == 0) {
          return 1;
        }
        if ((*(byte *)(lVar2 + 0x35) & 0x10) != 0) {
          return 1;
        }
      }
      if ((*(byte *)(lVar2 + 0xb9) & 1) == 0) {
        if ((byte)(*(char *)(lVar2 + 0xb8) - 1U) < 2) {
          return 1;
        }
        if ((*(byte *)(lVar2 + 0xb0) & *(byte *)(lVar2 + 0xb0) - 1) == 0) {
          return 1;
        }
        if ((*(byte *)(lVar2 + 0xb5) & 0x10) != 0) {
          return 1;
        }
      }
      if ((*(byte *)(lVar2 + 0xf9) & 1) != 0) {
        return 0;
      }
      if ((byte)(*(char *)(lVar2 + 0xf8) - 1U) < 2) {
        return 1;
      }
      if ((*(byte *)(lVar2 + 0xf0) & *(byte *)(lVar2 + 0xf0) - 1) == 0) {
        return 1;
      }
      bVar3 = *(byte *)(lVar2 + 0xf5);
      break;
    default:
      goto switchD_1003b4f74_caseD_38;
    case 0x3c:
      goto switchD_1003b4f74_caseD_3c;
    }
  }
  else {
    if (uVar1 != 0x57) {
      return 1;
    }
switchD_1003b4f74_caseD_3c:
    lVar2 = *(long *)(param_2 + 0x40);
    if ((*(byte *)(lVar2 + 0x39) & 1) == 0) {
      if ((byte)(*(char *)(lVar2 + 0x38) - 1U) < 2) {
        return 1;
      }
      if ((*(byte *)(lVar2 + 0x30) & *(byte *)(lVar2 + 0x30) - 1) == 0) {
        return 1;
      }
      if ((*(byte *)(lVar2 + 0x35) & 0x10) != 0) {
        return 1;
      }
    }
    if ((*(byte *)(lVar2 + 0x79) & 1) == 0) {
      if ((byte)(*(char *)(lVar2 + 0x78) - 1U) < 2) {
        return 1;
      }
      if ((*(byte *)(lVar2 + 0x70) & *(byte *)(lVar2 + 0x70) - 1) == 0) {
        return 1;
      }
      if ((*(byte *)(lVar2 + 0x75) & 0x10) != 0) {
        return 1;
      }
    }
    if ((*(byte *)(lVar2 + 0xb9) & 1) != 0) {
      return 0;
    }
    if ((byte)(*(char *)(lVar2 + 0xb8) - 1U) < 2) {
      return 1;
    }
    if ((*(byte *)(lVar2 + 0xb0) & *(byte *)(lVar2 + 0xb0) - 1) == 0) {
      return 1;
    }
    bVar3 = *(byte *)(lVar2 + 0xb5);
  }
LAB_1003b5091:
  bVar3 = (bVar3 & 0x10) >> 4;
switchD_1003b4f74_caseD_38:
  return bVar3;
}

