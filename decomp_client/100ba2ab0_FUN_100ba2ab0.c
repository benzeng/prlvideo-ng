
char * FUN_100ba2ab0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  for (; (cVar1 = *param_1, cVar1 == '\t' ||
         ((pcVar2 = (char *)0x0, cVar1 != '\0' && (pcVar2 = param_1, cVar1 == ' '))));
      param_1 = param_1 + 1) {
  }
  return pcVar2;
}

