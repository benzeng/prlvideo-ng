
gzFile FUN_1001787c6(xmlChar *param_1)

{
  int iVar1;
  gzFile local_28;
  xmlChar *local_18;
  
  iVar1 = _strcmp((char *)param_1,"-");
  if (iVar1 == 0) {
    iVar1 = _dup(0);
    local_28 = _gzdopen(iVar1,"rb");
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
      local_28 = (gzFile)0x0;
    }
    else {
      iVar1 = _xmlCheckFilename((char *)local_18);
      if (iVar1 == 0) {
        local_28 = (gzFile)0x0;
      }
      else {
        local_28 = _gzopen((char *)local_18,"rb");
      }
    }
  }
  return local_28;
}

