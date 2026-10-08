
undefined8 FUN_1008fc413(long param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  char local_1018 [4095];
  undefined1 local_19;
  char *local_18;
  int local_c;
  
  local_18 = local_1018;
  do {
    if (0xffe < (long)local_18 - (long)local_1018) {
      local_19 = 0;
      uVar2 = (*(code *)_xmlMemStrdup)(local_1018);
      return uVar2;
    }
    if (*(long *)(param_1 + 0x58) == *(long *)(param_1 + 0x50)) {
      local_c = FUN_1008fbedf(param_1);
      if (local_c == 0) {
        if (local_1018 == local_18) {
          return 0;
        }
        *local_18 = '\0';
        uVar2 = (*(code *)_xmlMemStrdup)(local_1018);
        return uVar2;
      }
      if (local_c == -1) {
        return 0;
      }
    }
    pcVar1 = *(char **)(param_1 + 0x58);
    *local_18 = *pcVar1;
    *(char **)(param_1 + 0x58) = pcVar1 + 1;
    if (*local_18 == '\n') {
      *local_18 = '\0';
      uVar2 = (*(code *)_xmlMemStrdup)(local_1018);
      return uVar2;
    }
    if (*local_18 != '\r') {
      local_18 = local_18 + 1;
    }
  } while( true );
}

