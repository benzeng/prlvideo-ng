
undefined8
FUN_1002e0190(long param_1,char param_2,uint param_3,ulong param_4,ushort param_5,
             undefined1 *param_6,int *param_7)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = (uint)param_4;
  switch(param_3) {
  case 1:
    if (-1 < param_2) {
      return 0x20;
    }
    if (*(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 0x10) + 4) <= param_5) {
      return 0x20;
    }
    if (((uVar1 & 0xffff) == 0x311) && (param_5 == 0)) {
      *param_7 = 2;
      *param_6 = 0x11;
      param_6[1] = *(undefined1 *)(param_1 + 0x50);
    }
    else {
      if (((uVar1 & 0xffff) != 0x312) || (param_5 != 1)) goto switchD_1002e01b3_caseD_3;
      *param_7 = 2;
      *param_6 = 0x12;
      param_6[1] = *(undefined1 *)(param_1 + 0x51);
    }
    break;
  case 2:
    if (-1 < param_2) {
      return 0x20;
    }
    if ((uint)*(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 0x10) + 4) <= (uint)param_5) {
      return 0x20;
    }
    if (*param_7 != 1) {
      return 0x20;
    }
    if ((uVar1 & 0xffff) == 2) {
      *param_6 = *(undefined1 *)(param_1 + 0x54);
    }
    else if ((uVar1 & 0xffff) == 1) {
      *param_6 = *(undefined1 *)(param_1 + 0x53);
    }
    else {
      if ((param_4 & 0xffff) != 0) {
        return 0x20;
      }
      *param_6 = *(undefined1 *)(*(long *)(param_1 + 0x40) + (ulong)(uint)param_5 * 8);
    }
    break;
  default:
switchD_1002e01b3_caseD_3:
    uVar2 = FUN_1002df920(param_1,param_2,param_3 & 0xff,param_4 & 0xffff,param_5);
    return uVar2;
  case 9:
    if (param_2 < '\0') {
      return 0x20;
    }
    if (*(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 0x10) + 4) <= param_5) {
      return 0x20;
    }
    if (((uVar1 & 0xffff) == 0x311) && (param_5 == 0)) {
      *(undefined1 *)(param_1 + 0x50) = param_6[1];
    }
    else {
      if (((uVar1 & 0xffff) != 0x312) || (param_5 != 1)) goto switchD_1002e01b3_caseD_3;
      *(undefined1 *)(param_1 + 0x51) = param_6[1];
    }
    break;
  case 10:
    if (param_2 < '\0') {
      return 0x20;
    }
    if ((uint)*(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 0x10) + 4) <= (uint)param_5) {
      return 0x20;
    }
    if (*param_7 != 0) {
      return 0x20;
    }
    uVar3 = (undefined1)(param_4 >> 8);
    if ((uVar1 & 0xff) == 2) {
      *(undefined1 *)(param_1 + 0x54) = uVar3;
    }
    else if ((uVar1 & 0xff) == 1) {
      *(undefined1 *)(param_1 + 0x53) = uVar3;
    }
    else {
      if ((param_4 & 0xff) != 0) {
        return 0x20;
      }
      *(uint *)(*(long *)(param_1 + 0x40) + (ulong)(uint)param_5 * 8) = (uint)(param_4 >> 8) & 0xff;
    }
  }
  return 0;
}

