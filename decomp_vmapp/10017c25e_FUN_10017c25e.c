
undefined4 FUN_10017c25e(xmlChar *param_1)

{
  int iVar1;
  undefined4 local_a4;
  stat local_98;
  
  if (param_1 == (xmlChar *)0x0) {
    local_a4 = 0;
  }
  else {
    iVar1 = _xmlStrncasecmp(param_1,(xmlChar *)"file://localhost/",0x11);
    if (iVar1 == 0) {
      local_98.st_qspare[1] = (__int64_t)(param_1 + 0x10);
    }
    else {
      iVar1 = _xmlStrncasecmp(param_1,(xmlChar *)"file:///",8);
      local_98.st_qspare[1] = (__int64_t)param_1;
      if (iVar1 == 0) {
        local_98.st_qspare[1] = (__int64_t)(param_1 + 7);
      }
    }
    iVar1 = _stat((char *)local_98.st_qspare[1],&local_98);
    if (iVar1 == 0) {
      local_a4 = 1;
    }
    else {
      local_a4 = 0;
    }
  }
  return local_a4;
}

