
char * FUN_10047ba90(char *param_1,undefined8 param_2)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)FUN_10078d0a0(param_2);
  iVar1 = FUN_10078d0c0(param_2);
  if ((pcVar2 != (char *)0x0) && (iVar1 == -1)) {
    _strlen(pcVar2);
  }
  QString::fromUtf8_helper(param_1,(int)pcVar2);
  return param_1;
}

