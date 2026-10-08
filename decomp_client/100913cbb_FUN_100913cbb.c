
int FUN_100913cbb(long param_1)

{
  int local_24;
  int local_10;
  uint local_c;
  
  local_10 = 0;
  if ((**(char **)(param_1 + 8) == '&') && (*(char *)(*(long *)(param_1 + 8) + 1) == '#')) {
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
    local_c = (uint)**(byte **)(param_1 + 8);
    if (local_c == 0x78) {
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      local_c = (uint)**(byte **)(param_1 + 8);
      if ((((local_c < 0x30) || (0x39 < local_c)) && ((local_c < 0x61 || (0x66 < local_c)))) &&
         ((local_c < 0x41 || (0x46 < local_c)))) {
        *(undefined4 *)(param_1 + 0x10) = 0x5aa;
        FUN_10090b6dd(param_1,"Char ref: expecting [0-9A-F]");
        return -1;
      }
      while (((0x2f < local_c && (local_c < 0x3a)) || ((0x40 < local_c && (local_c < 0x47))))) {
        if ((local_c < 0x30) || (0x39 < local_c)) {
          if ((local_c < 0x61) || (0x66 < local_c)) {
            local_10 = local_10 * 0x10 + local_c + -0x37;
          }
          else {
            local_10 = local_10 * 0x10 + local_c + -0x57;
          }
        }
        else {
          local_10 = local_10 * 0x10 + local_c + -0x30;
        }
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
        local_c = (uint)**(byte **)(param_1 + 8);
      }
    }
    else {
      if ((local_c < 0x30) || (0x39 < local_c)) {
        *(undefined4 *)(param_1 + 0x10) = 0x5aa;
        FUN_10090b6dd(param_1,"Char ref: expecting [0-9]");
        return -1;
      }
      while ((0x2f < local_c && (local_c < 0x3a))) {
        local_10 = local_10 * 10 + local_c + -0x30;
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
        local_c = (uint)**(byte **)(param_1 + 8);
      }
    }
    if (local_c == 0x3b) {
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      local_24 = local_10;
    }
    else {
      *(undefined4 *)(param_1 + 0x10) = 0x5aa;
      FUN_10090b6dd(param_1,"Char ref: expecting \';\'");
      local_24 = -1;
    }
  }
  else {
    local_24 = -1;
  }
  return local_24;
}

