
char * _xmlMemoryStrdup(char *str)

{
  char *pcVar1;
  
  pcVar1 = _xmlMemStrdupLoc(str,"none",0);
  return pcVar1;
}

