
uint FUN_10032e340(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  if ((*(uint3 *)(param_1 + 0xb0) & 4) == 0) {
    if ((*(uint3 *)(param_1 + 0xb0) & 7) == 1) {
      param_2 = param_2 * *(int *)(param_1 + 0x1c) + param_3;
    }
    uVar3 = *(uint *)(*(long *)(param_1 + 0x28) + 4 + (ulong)param_2 * 0xc);
  }
  else {
    uVar1 = *(uint *)(param_1 + 8);
    bVar2 = (byte)param_3 & 0x1f;
    uVar4 = 1;
    if (*(uint *)(param_1 + 0xc) >> bVar2 != 0) {
      uVar4 = *(uint *)(param_1 + 0xc) >> bVar2;
    }
    if (*(uint *)(&DAT_100b398f4 + (ulong)uVar1 * 8) < 0x1000000) {
      uVar3 = 0;
      switch(uVar1) {
      case 0x53:
      case 0x54:
      case 0x55:
      case 0x56:
      case 0x5e:
      case 0x5f:
        return uVar4 * 2 + 3 & 0xfffffffc;
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5a:
      case 0x62:
      case 99:
        return uVar4 + 3 & 0xfffffffc;
      case 0x5b:
      case 0x5c:
      case 0x60:
      case 0x61:
        return uVar4 << 2;
      case 0x5d:
        return uVar4 << 3;
      case 0x65:
      case 0x66:
      case 0x6b:
      case 0x6c:
      case 0x87:
      case 0x8a:
        return uVar4 * 2 + 6 & 0xfffffff8;
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6a:
      case 0x6d:
      case 0x6e:
      case 0x88:
      case 0x89:
      case 0x8b:
        return uVar4 * 4 + 0xc & 0xfffffff0;
      }
    }
    else {
      uVar3 = (*(uint *)(&DAT_100b398f4 + (ulong)uVar1 * 8) >> 0x18) * uVar4;
      if (3 < uVar1 - 0x73) {
        return uVar3 + 3 & 0xfffffffc;
      }
    }
  }
  return uVar3;
}

