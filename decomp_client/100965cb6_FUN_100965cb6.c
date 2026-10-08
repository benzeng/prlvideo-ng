
int FUN_100965cb6(undefined4 *param_1)

{
  int local_1c;
  long local_18;
  long local_10;
  
  if (param_1 == (undefined4 *)0x0) {
    return -1;
  }
  if ((*(ushort *)((long)param_1 + 0x62) & 1) != 0) {
    return 1;
  }
  if (((uint)(int)*(short *)((long)param_1 + 0x62) >> 1 & 1) != 0) {
    return 0;
  }
  switch(*param_1) {
  case 0:
  case 3:
    local_1c = 1;
    break;
  case 1:
  case 2:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
    local_1c = 0;
    break;
  default:
    return -1;
  case 0x11:
    for (local_18 = *(long *)(param_1 + 0xc); local_18 != 0; local_18 = *(long *)(local_18 + 0x40))
    {
      local_1c = FUN_100965cb6(local_18);
      if (local_1c != 0) goto LAB_100965dab;
    }
    local_1c = 0;
    break;
  case 0x12:
  case 0x13:
  case 0x14:
    local_10 = *(long *)(param_1 + 0xc);
    while( true ) {
      if (local_10 == 0) {
        return 1;
      }
      local_1c = FUN_100965cb6(local_10);
      if (local_1c != 1) break;
      local_10 = *(long *)(local_10 + 0x40);
    }
    break;
  case 0xffffffff:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0x10:
    local_1c = FUN_100965cb6(*(undefined8 *)(param_1 + 0xc));
  }
LAB_100965dab:
  if (local_1c == 0) {
    *(ushort *)((long)param_1 + 0x62) = *(ushort *)((long)param_1 + 0x62) | 2;
  }
  if (local_1c == 1) {
    *(ushort *)((long)param_1 + 0x62) = *(ushort *)((long)param_1 + 0x62) | 1;
  }
  return local_1c;
}

