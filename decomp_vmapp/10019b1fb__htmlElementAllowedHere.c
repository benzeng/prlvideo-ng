
int _htmlElementAllowedHere(htmlElemDesc *param_1,xmlChar *param_2)

{
  int iVar1;
  char **local_10;
  
  if (((param_2 != (xmlChar *)0x0) && (param_1 != (htmlElemDesc *)0x0)) &&
     (param_1->subelts != (char **)0x0)) {
    for (local_10 = param_1->subelts; *local_10 != (char *)0x0; local_10 = local_10 + 1) {
      iVar1 = _xmlStrcmp((xmlChar *)*local_10,param_2);
      if (iVar1 == 0) {
        return 1;
      }
    }
  }
  return 0;
}

