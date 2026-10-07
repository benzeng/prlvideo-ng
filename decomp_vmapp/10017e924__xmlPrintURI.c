
void _xmlPrintURI(FILE *param_1,undefined8 param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)_xmlSaveUri(param_2);
  if (pcVar1 != (char *)0x0) {
    _fputs(pcVar1,param_1);
    (*(code *)_xmlFree)(pcVar1);
  }
  return;
}

