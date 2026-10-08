
gzFile FUN_1008ac240(xmlChar *param_1,uint param_2)

{
  int iVar1;
  gzFile local_40;
  char local_28 [16];
  xmlChar *local_18;
  
  local_18 = (xmlChar *)0x0;
  _snprintf(local_28,0xf,"wb%d",(ulong)param_2);
  iVar1 = _strcmp((char *)param_1,"-");
  if (iVar1 == 0) {
    iVar1 = _dup(1);
    local_40 = _gzdopen(iVar1,local_28);
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
      local_40 = (gzFile)0x0;
    }
    else {
      local_40 = _gzopen((char *)local_18,local_28);
    }
  }
  return local_40;
}

