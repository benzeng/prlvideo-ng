
char * FUN_10041fe90(char *param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)0x0;
  if ((param_2 != (char *)0x0) &&
     (iVar1 = _strcmp(param_2,"CGdbServer"), pcVar2 = param_1, iVar1 != 0)) {
    pcVar2 = (char *)QTcpServer::qt_metacast(param_1);
    return pcVar2;
  }
  return pcVar2;
}

