
undefined8 FUN_100cb67c0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  char *pcVar2;
  
  uVar1 = FUN_100cb63e0(param_2);
  if ((uVar1 & 0xfffffffe) == 4) {
    pcVar2 = (char *)FUN_100cb6400(param_2);
    _fputs(pcVar2,DAT_102318490);
    _fflush(DAT_102318490);
  }
  return 1;
}

