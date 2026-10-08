
int FUN_10096503c(int *param_1)

{
  int local_34;
  int local_24;
  long local_20;
  long local_18;
  long local_10;
  
  local_24 = -1;
  if (param_1 == (int *)0x0) {
    local_34 = -1;
  }
  else if ((*param_1 == 4) || (((uint)(int)*(short *)((long)param_1 + 0x62) >> 6 & 1) == 0)) {
    if ((*param_1 == 4) || (((uint)(int)*(short *)((long)param_1 + 0x62) >> 7 & 1) == 0)) {
      switch(*param_1) {
      case 0:
      case 3:
        local_24 = 1;
        break;
      case 1:
      case 2:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 0x13:
        local_24 = 0;
        break;
      case 4:
        if (((((uint)(int)*(short *)((long)param_1 + 0x62) >> 7 ^ 1) & 1) != 0) &&
           ((((uint)(int)*(short *)((long)param_1 + 0x62) >> 6 ^ 1) & 1) != 0)) {
          local_20 = *(long *)(param_1 + 0xc);
          while ((local_20 != 0 && (local_24 = FUN_10096503c(local_20), local_24 == 1))) {
            local_20 = *(long *)(local_20 + 0x40);
          }
          if (local_24 == 0) {
            *(ushort *)((long)param_1 + 0x62) = *(ushort *)((long)param_1 + 0x62) & 0xffbf;
            *(ushort *)((long)param_1 + 0x62) = *(ushort *)((long)param_1 + 0x62) | 0x80;
          }
          if ((local_24 == 1) &&
             (*(ushort *)((long)param_1 + 0x62) = *(ushort *)((long)param_1 + 0x62) & 0x80,
             *(short *)((long)param_1 + 0x62) == 0)) {
            *(ushort *)((long)param_1 + 0x62) = *(ushort *)((long)param_1 + 0x62) | 0x40;
          }
        }
        if ((*(long *)(param_1 + 0x14) == 0) && (*(long *)(param_1 + 4) != 0)) {
          local_24 = 1;
        }
        else {
          local_24 = 0;
        }
        return local_24;
      case 10:
      case 0xe:
      case 0xf:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x14:
        local_10 = *(long *)(param_1 + 0xc);
        while ((local_10 != 0 && (local_24 = FUN_10096503c(local_10), local_24 == 1))) {
          local_10 = *(long *)(local_10 + 0x40);
        }
        break;
      case 0xb:
      case 0xc:
      case 0xd:
        if ((short)param_1[0x18] == -0x14) {
          return 1;
        }
        *(undefined2 *)(param_1 + 0x18) = 0xffec;
        local_18 = *(long *)(param_1 + 0xc);
        while ((local_18 != 0 && (local_24 = FUN_10096503c(local_18), local_24 == 1))) {
          local_18 = *(long *)(local_18 + 0x40);
        }
        break;
      case -1:
        local_24 = FUN_10096503c(*(undefined8 *)(param_1 + 0xc));
      }
      if (local_24 == 0) {
        *(ushort *)((long)param_1 + 0x62) = *(ushort *)((long)param_1 + 0x62) | 0x80;
      }
      if (local_24 == 1) {
        *(ushort *)((long)param_1 + 0x62) = *(ushort *)((long)param_1 + 0x62) | 0x40;
      }
      local_34 = local_24;
    }
    else {
      local_34 = 0;
    }
  }
  else {
    local_34 = 1;
  }
  return local_34;
}

