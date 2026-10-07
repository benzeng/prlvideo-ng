
int FUN_1002321f4(long param_1,int *param_2)

{
  int local_2c;
  int local_14;
  long local_10;
  
  local_14 = 0;
  if ((param_1 == 0) || (param_2 == (int *)0x0)) {
    local_2c = -1;
  }
  else if ((((*param_2 == 0x14) || (*param_2 == 4)) &&
           (local_14 = FUN_100231714(param_2),
           ((uint)(int)*(short *)((long)param_2 + 0x62) >> 6 & 1) != 0)) &&
          ((short)param_2[0x18] != -0x19)) {
    *(undefined8 *)(param_1 + 0xe8) = 0;
    local_2c = FUN_100231a22(param_1,param_2);
  }
  else {
    switch(*param_2) {
    case 0:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      local_14 = 0;
      break;
    case 1:
    case 2:
    case 9:
    case 0x13:
      local_14 = 0;
      break;
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x14:
      local_10 = *(long *)(param_2 + 0xc);
      while ((local_10 != 0 && (local_14 = FUN_1002321f4(param_1,local_10), local_14 == 0))) {
        local_10 = *(long *)(local_10 + 0x40);
      }
      break;
    case -1:
      local_14 = FUN_1002321f4(param_1,*(undefined8 *)(param_2 + 0xc));
    }
    local_2c = local_14;
  }
  return local_2c;
}

