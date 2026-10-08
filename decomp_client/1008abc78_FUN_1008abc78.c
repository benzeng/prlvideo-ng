
FILE * FUN_1008abc78(xmlChar *param_1)

{
  int iVar1;
  FILE *local_28;
  xmlChar *local_18;
  
  if (param_1 == (xmlChar *)0x0) {
    local_28 = (FILE *)0x0;
  }
  else {
    iVar1 = _strcmp((char *)param_1,"-");
    if (iVar1 == 0) {
      local_28 = *(FILE **)PTR____stdinp_1021e1850;
    }
    else {
      iVar1 = _xmlStrncasecmp(param_1,(xmlChar *)"file://localhost/",0x11);
      if (iVar1 == 0) {
        local_18 = param_1 + 0x10;
      }
      else {
        iVar1 = _xmlStrncasecmp(param_1,(xmlChar *)"file:///",8);
        local_18 = param_1;
        if (iVar1 == 0) {
          local_18 = param_1 + 7;
        }
      }
      if (local_18 == (xmlChar *)0x0) {
        local_28 = (FILE *)0x0;
      }
      else {
        iVar1 = _xmlCheckFilename((char *)local_18);
        if (iVar1 == 0) {
          local_28 = (FILE *)0x0;
        }
        else {
          local_28 = _fopen((char *)local_18,"r");
          if (local_28 == (FILE *)0x0) {
            FUN_1008ab73e(0,local_18);
          }
        }
      }
    }
  }
  return local_28;
}

