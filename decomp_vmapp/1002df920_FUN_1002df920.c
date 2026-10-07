
undefined8
FUN_1002df920(long param_1,char param_2,undefined4 param_3,uint param_4,ushort param_5,
             undefined1 *param_6,int *param_7)

{
  undefined8 uVar1;
  
  uVar1 = 0x20;
  switch(param_3) {
  case 1:
    if (-1 < param_2) {
      return 0x20;
    }
    if ((param_4 & 0xffff) != 0x100) {
      return 0x20;
    }
    if (*(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 0x10) + 4) <= param_5) {
      return 0x20;
    }
    break;
  case 2:
    if (-1 < param_2) {
      return 0x20;
    }
    if ((short)param_4 != 0) {
      return 0x20;
    }
    if (*(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 0x10) + 4) <= param_5) {
      return 0x20;
    }
    if (*param_7 != 1) {
      return 0x20;
    }
    *param_6 = *(undefined1 *)(*(long *)(param_1 + 0x40) + (ulong)param_5 * 8);
    break;
  case 3:
    if (-1 < param_2) {
      return 0x20;
    }
    if ((short)param_4 != 0) {
      return 0x20;
    }
    if (*(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 0x10) + 4) <= param_5) {
      return 0x20;
    }
    if (*param_7 != 1) {
      return 0x20;
    }
    *param_6 = *(undefined1 *)(*(long *)(param_1 + 0x40) + 4 + (ulong)param_5 * 8);
    break;
  default:
    goto switchD_1002df946_caseD_4;
  case 10:
    if (param_2 < '\0') {
      return 0x20;
    }
    if ((char)param_4 != '\0') {
      return 0x20;
    }
    if (*(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 0x10) + 4) <= param_5) {
      return 0x20;
    }
    if (*param_7 != 0) {
      return 0x20;
    }
    *(uint *)(*(long *)(param_1 + 0x40) + (ulong)param_5 * 8) = (param_4 & 0xffff) >> 8;
    break;
  case 0xb:
    if (param_2 < '\0') {
      return 0x20;
    }
    if (*(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 0x10) + 4) <= param_5) {
      return 0x20;
    }
    if (*param_7 != 0) {
      return 0x20;
    }
    *(uint *)(*(long *)(param_1 + 0x40) + 4 + (ulong)param_5 * 8) = param_4 & 1;
  }
  uVar1 = 0;
switchD_1002df946_caseD_4:
  return uVar1;
}

