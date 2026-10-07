
FILE * FUN_1001784b8(xmlChar *param_1)

{
  int iVar1;
  FILE *local_28;
  xmlChar *local_18;
  
  iVar1 = _strcmp((char *)param_1,"-");
  if (iVar1 == 0) {
    local_28 = *(FILE **)PTR____stdoutp_100ba2338;
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
      local_28 = _fopen((char *)local_18,"wb");
      if (local_28 == (FILE *)0x0) {
        FUN_100177e16(0,local_18);
      }
    }
  }
  return local_28;
}

