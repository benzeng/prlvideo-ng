
int _xmlRegExecErrInfo(xmlRegExecCtxtPtr exec,xmlChar **string,int *nbval,int *nbneg,
                      xmlChar **values,int *terminal)

{
  int local_3c;
  
  if (exec == (xmlRegExecCtxtPtr)0x0) {
    local_3c = -1;
  }
  else {
    if (string != (xmlChar **)0x0) {
      if (*(int *)exec == 0) {
        *string = (xmlChar *)0x0;
      }
      else {
        *string = *(xmlChar **)(exec + 0x80);
      }
    }
    local_3c = FUN_1009125e0(exec,1,nbval,nbneg,values,terminal);
  }
  return local_3c;
}

