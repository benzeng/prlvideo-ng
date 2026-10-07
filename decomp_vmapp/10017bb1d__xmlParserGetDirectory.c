
char * _xmlParserGetDirectory(char *filename)

{
  char cVar1;
  char *pcVar2;
  ulong uVar3;
  char *local_438;
  undefined8 local_430;
  char local_428 [1023];
  undefined1 local_29;
  char *local_20;
  char *local_18;
  char local_9;
  
  local_20 = (char *)0x0;
  local_9 = '/';
  local_430 = filename;
  if (DAT_1011b7724 == 0) {
    _xmlRegisterDefaultInputCallbacks();
  }
  if (local_430 == (char *)0x0) {
    local_438 = (char *)0x0;
  }
  else {
    _strncpy(local_428,local_430,0x3ff);
    local_29 = 0;
    uVar3 = 0xffffffffffffffff;
    pcVar2 = local_428;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    for (local_18 = local_428 + (~uVar3 - 1); (local_428 < local_18 && (*local_18 != local_9));
        local_18 = local_18 + -1) {
    }
    if (*local_18 == local_9) {
      if (local_428 == local_18) {
        local_428[1] = 0;
      }
      else {
        *local_18 = '\0';
      }
      local_20 = (char *)(*(code *)_xmlMemStrdup)(local_428);
    }
    else {
      pcVar2 = _getcwd(local_428,0x400);
      if (pcVar2 != (char *)0x0) {
        local_29 = 0;
        local_20 = (char *)(*(code *)_xmlMemStrdup)(local_428);
      }
    }
    local_438 = local_20;
  }
  return local_438;
}

