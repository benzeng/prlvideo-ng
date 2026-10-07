
undefined8 FUN_1008d9f80(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  char *pcVar2;
  
  uVar1 = FUN_1008d9ba0(param_2);
  if ((uVar1 & 0xfffffffe) == 4) {
    pcVar2 = (char *)FUN_1008d9bc0(param_2);
    _fputs(pcVar2,DAT_1011c2a50);
    _fflush(DAT_1011c2a50);
  }
  return 1;
}

