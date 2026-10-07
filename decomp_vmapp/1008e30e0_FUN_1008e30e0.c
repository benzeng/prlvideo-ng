
char * FUN_1008e30e0(char *param_1,int param_2)

{
  char *pcVar1;
  
  pcVar1 = _strerror(param_2);
  if (pcVar1 != (char *)0x0) {
    _strlen(pcVar1);
  }
  QString::fromLocal8Bit_helper(param_1,(int)pcVar1);
  return param_1;
}

