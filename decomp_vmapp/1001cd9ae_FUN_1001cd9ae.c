
int FUN_1001cd9ae(char *param_1,code *param_2,undefined8 param_3)

{
  int iVar1;
  int local_124;
  char local_108 [16];
  char local_f8 [16];
  char local_e8 [16];
  char local_d8 [10];
  undefined1 local_ce;
  char local_c8 [152];
  char *local_30;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  long local_18;
  int local_10;
  int local_c;
  
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_10 = 0;
  local_30 = param_1;
  iVar1 = _strncmp(param_1,"total",5);
  if (iVar1 == 0) {
    for (local_30 = local_30 + 5; *local_30 == ' '; local_30 = local_30 + 1) {
    }
    for (; ('/' < *local_30 && (*local_30 < ':')); local_30 = local_30 + 1) {
    }
    for (; ((*local_30 == ' ' || (*local_30 == '\n')) || (*local_30 == '\r'));
        local_30 = local_30 + 1) {
    }
    local_124 = (int)local_30 - (int)param_1;
  }
  else if (*param_1 == '+') {
    local_124 = 0;
  }
  else {
    for (; ((*local_30 == ' ' || (*local_30 == '\n')) || (*local_30 == '\r'));
        local_30 = local_30 + 1) {
    }
    if (*local_30 == '\0') {
      local_124 = 0;
    }
    else {
      local_c = 0;
      while (*local_30 != ' ') {
        if (local_c < 10) {
          local_d8[local_c] = *local_30;
          local_c = local_c + 1;
        }
        local_30 = local_30 + 1;
        if (*local_30 == '\0') {
          return 0;
        }
      }
      local_ce = 0;
      for (; *local_30 == ' '; local_30 = local_30 + 1) {
      }
      if (*local_30 == '\0') {
        local_124 = 0;
      }
      else {
        for (; ('/' < *local_30 && (*local_30 < ':')); local_30 = local_30 + 1) {
          local_10 = local_10 * 10 + (int)*local_30 + -0x30;
        }
        for (; *local_30 == ' '; local_30 = local_30 + 1) {
        }
        if (*local_30 == '\0') {
          return 0;
        }
        local_c = 0;
        while (*local_30 != ' ') {
          if (local_c < 10) {
            local_e8[local_c] = *local_30;
            local_c = local_c + 1;
          }
          local_30 = local_30 + 1;
          if (*local_30 == '\0') {
            return 0;
          }
        }
        local_e8[local_c] = '\0';
        for (; *local_30 == ' '; local_30 = local_30 + 1) {
        }
        if (*local_30 == '\0') {
          local_124 = 0;
        }
        else {
          local_c = 0;
          while (*local_30 != ' ') {
            if (local_c < 10) {
              local_f8[local_c] = *local_30;
              local_c = local_c + 1;
            }
            local_30 = local_30 + 1;
            if (*local_30 == '\0') {
              return 0;
            }
          }
          local_f8[local_c] = '\0';
          for (; *local_30 == ' '; local_30 = local_30 + 1) {
          }
          if (*local_30 == '\0') {
            local_124 = 0;
          }
          else {
            for (; ('/' < *local_30 && (*local_30 < ':')); local_30 = local_30 + 1) {
              local_18 = local_18 * 10 + (long)(*local_30 + -0x30);
            }
            for (; *local_30 == ' '; local_30 = local_30 + 1) {
            }
            if (*local_30 == '\0') {
              return 0;
            }
            local_c = 0;
            while (*local_30 != ' ') {
              if (local_c < 3) {
                local_108[local_c] = *local_30;
                local_c = local_c + 1;
              }
              local_30 = local_30 + 1;
              if (*local_30 == '\0') {
                return 0;
              }
            }
            local_108[local_c] = '\0';
            for (; *local_30 == ' '; local_30 = local_30 + 1) {
            }
            if (*local_30 == '\0') {
              local_124 = 0;
            }
            else {
              for (; ('/' < *local_30 && (*local_30 < ':')); local_30 = local_30 + 1) {
                local_1c = local_1c * 10 + (int)*local_30 + -0x30;
              }
              for (; *local_30 == ' '; local_30 = local_30 + 1) {
              }
              if (*local_30 == '\0') {
                return 0;
              }
              if ((local_30[1] == '\0') || (local_30[2] == '\0')) {
                local_124 = 0;
              }
              else {
                if ((local_30[1] == ':') || (local_30[2] == ':')) {
                  for (; ('/' < *local_30 && (*local_30 < ':')); local_30 = local_30 + 1) {
                    local_20 = local_20 * 10 + (int)*local_30 + -0x30;
                  }
                  if (*local_30 == ':') {
                    local_30 = local_30 + 1;
                  }
                  for (; ('/' < *local_30 && (*local_30 < ':')); local_30 = local_30 + 1) {
                    local_24 = local_24 * 10 + (int)*local_30 + -0x30;
                  }
                }
                else {
                  for (; ('/' < *local_30 && (*local_30 < ':')); local_30 = local_30 + 1) {
                    local_28 = local_28 * 10 + (int)*local_30 + -0x30;
                  }
                }
                for (; *local_30 == ' '; local_30 = local_30 + 1) {
                }
                if (*local_30 == '\0') {
                  return 0;
                }
                local_c = 0;
                do {
                  if ((*local_30 == '\n') || (*local_30 == '\r')) {
                    local_c8[local_c] = '\0';
                    if ((*local_30 != '\n') && (*local_30 != '\r')) {
                      return 0;
                    }
                    for (; (*local_30 == '\n' || (*local_30 == '\r')); local_30 = local_30 + 1) {
                    }
                    if (param_2 != (code *)0x0) {
                      (*param_2)(param_3,local_c8,local_d8,local_e8,local_f8,local_18,local_10,
                                 local_28,local_108,local_1c,local_20,local_24);
                    }
                    return (int)local_30 - (int)param_1;
                  }
                  if (local_c < 0x96) {
                    local_c8[local_c] = *local_30;
                    local_c = local_c + 1;
                  }
                  local_30 = local_30 + 1;
                } while (*local_30 != '\0');
                local_124 = 0;
              }
            }
          }
        }
      }
    }
  }
  return local_124;
}

