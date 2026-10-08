
undefined1 FUN_1009ce9d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  char *pcVar1;
  size_t sVar2;
  char *pcVar3;
  undefined1 uVar4;
  char *pcVar5;
  
  pcVar1 = DAT_102313778;
  if (param_4 == '\0') {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
    if (DAT_1023137c0 != (char *)0x0) {
      _snprintf(DAT_102313778,(ulong)DAT_102313770 << 0xb,"%s/%s.dmp",param_1,param_2);
      pcVar5 = DAT_1023137c0;
      sVar2 = _strlen(DAT_1023137c0);
      pcVar3 = _strnstr(pcVar5,"%Y-%m-%d-%H%M%S",sVar2);
      if (pcVar3 != (char *)0x0) {
        _time(DAT_1023137a8);
        _localtime_r(DAT_1023137a8,DAT_1023137a0);
        pcVar3 = DAT_102313798;
        sVar2 = _strftime(DAT_102313798,(ulong)DAT_102313790 << 0xb,pcVar5,DAT_1023137a0);
        if (sVar2 != 0) {
          pcVar5 = pcVar3;
        }
      }
      pcVar3 = DAT_102313788;
      _snprintf(DAT_102313788,(ulong)DAT_102313780 << 0xb,"%s/%s",param_1,pcVar5);
      _rename(pcVar1,pcVar3);
    }
  }
  return uVar4;
}

