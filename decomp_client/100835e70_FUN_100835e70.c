
char * FUN_100835e70(char *param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)0x0;
  if ((param_2 != (char *)0x0) &&
     (iVar1 = _strcmp(param_2,"CVmConfigEditor"), pcVar2 = param_1, iVar1 != 0)) {
    iVar1 = _strcmp(param_2,"CWindowInterface");
    if (iVar1 != 0) {
      pcVar2 = (char *)QMainWindow::qt_metacast(param_1);
      return pcVar2;
    }
    pcVar2 = (char *)0x0;
    if (param_1 != (char *)0x0) {
      pcVar2 = param_1 + 0x30;
    }
  }
  return pcVar2;
}

