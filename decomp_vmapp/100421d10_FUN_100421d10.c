
undefined1 FUN_100421d10(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  char *pcVar1;
  size_t sVar2;
  char *pcVar3;
  undefined1 uVar4;
  char *pcVar5;
  
  pcVar1 = DAT_1011bbdf0;
  if (param_4 == '\0') {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
    if (DAT_1011bbe38 != (char *)0x0) {
      _snprintf(DAT_1011bbdf0,(ulong)DAT_1011bbde8 << 0xb,"%s/%s.dmp",param_1,param_2);
      pcVar5 = DAT_1011bbe38;
      sVar2 = _strlen(DAT_1011bbe38);
      pcVar3 = _strnstr(pcVar5,"%Y-%m-%d-%H%M%S",sVar2);
      if (pcVar3 != (char *)0x0) {
        _time(DAT_1011bbe20);
        _localtime_r(DAT_1011bbe20,DAT_1011bbe18);
        pcVar3 = DAT_1011bbe10;
        sVar2 = _strftime(DAT_1011bbe10,(ulong)DAT_1011bbe08 << 0xb,pcVar5,DAT_1011bbe18);
        if (sVar2 != 0) {
          pcVar5 = pcVar3;
        }
      }
      pcVar3 = DAT_1011bbe00;
      _snprintf(DAT_1011bbe00,(ulong)DAT_1011bbdf8 << 0xb,"%s/%s",param_1,pcVar5);
      _rename(pcVar1,pcVar3);
    }
  }
  return uVar4;
}

