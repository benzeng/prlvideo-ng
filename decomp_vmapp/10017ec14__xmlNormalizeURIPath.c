
undefined4 _xmlNormalizeURIPath(char *param_1)

{
  char *pcVar1;
  char cVar2;
  undefined4 local_34;
  char *local_28;
  char *local_20;
  char *local_18;
  char *local_10;
  
  local_28 = param_1;
  if (param_1 == (char *)0x0) {
    local_34 = 0xffffffff;
  }
  else {
    for (; *local_28 == '/'; local_28 = local_28 + 1) {
    }
    if (*local_28 == '\0') {
      local_34 = 0;
    }
    else {
      local_20 = local_28;
      while (*local_28 != '\0') {
        if ((*local_28 == '.') && (local_28[1] == '/')) {
          for (local_28 = local_28 + 2; *local_28 == '/'; local_28 = local_28 + 1) {
          }
        }
        else {
          if ((*local_28 == '.') && (local_28[1] == '\0')) break;
          for (; *local_28 != '/'; local_28 = local_28 + 1) {
            if (*local_28 == '\0') goto LAB_10017ed47;
            *local_20 = *local_28;
            local_20 = local_20 + 1;
          }
          for (; (*local_28 == '/' && (local_28[1] == '/')); local_28 = local_28 + 1) {
          }
          *local_20 = *local_28;
          local_28 = local_28 + 1;
          local_20 = local_20 + 1;
        }
      }
LAB_10017ed47:
      *local_20 = '\0';
      for (local_28 = param_1; *local_28 == '/'; local_28 = local_28 + 1) {
      }
      pcVar1 = local_28;
      if (*local_28 == '\0') {
        local_34 = 0;
      }
      else {
        while( true ) {
          do {
            local_28 = pcVar1;
            for (local_18 = local_28; (*local_18 != '/' && (*local_18 != '\0'));
                local_18 = local_18 + 1) {
            }
            if (*local_18 == '\0') goto LAB_10017ee3f;
            pcVar1 = local_18 + 1;
          } while ((((*local_28 == '.') && (local_28[1] == '.')) && (local_28 + 3 == pcVar1)) ||
                  (((*pcVar1 != '.' || (local_18[2] != '.')) ||
                   ((local_18[3] != '/' && (local_18[3] != '\0'))))));
          if (local_18[3] == '\0') break;
          local_10 = local_28;
          local_18 = local_18 + 4;
          do {
            *local_10 = *local_18;
            cVar2 = *local_10;
            local_18 = local_18 + 1;
            local_10 = local_10 + 1;
          } while (cVar2 != '\0');
          local_18 = local_28;
          do {
            if (local_18 <= param_1) break;
            local_18 = local_18 + -1;
          } while (*local_18 == '/');
          pcVar1 = local_28;
          if (local_18 != param_1) {
            for (local_28 = local_18;
                (pcVar1 = local_28, param_1 < local_28 && (local_28[-1] != '/'));
                local_28 = local_28 + -1) {
            }
          }
        }
        *local_28 = '\0';
LAB_10017ee3f:
        *local_20 = '\0';
        local_28 = param_1;
        if (*param_1 == '/') {
          for (; (((*local_28 == '/' && (local_28[1] == '.')) && (local_28[2] == '.')) &&
                 ((local_28[3] == '/' || (local_28[3] == '\0')))); local_28 = local_28 + 3) {
          }
          local_20 = param_1;
          if (local_28 != param_1) {
            for (; *local_28 != '\0'; local_28 = local_28 + 1) {
              *local_20 = *local_28;
              local_20 = local_20 + 1;
            }
            *local_20 = '\0';
          }
        }
        local_34 = 0;
      }
    }
  }
  return local_34;
}

