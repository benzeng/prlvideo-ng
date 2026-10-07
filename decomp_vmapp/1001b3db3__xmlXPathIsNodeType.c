
undefined4 _xmlXPathIsNodeType(xmlChar *param_1)

{
  int iVar1;
  undefined4 local_14;
  
  if (param_1 == (xmlChar *)0x0) {
    local_14 = 0;
  }
  else {
    iVar1 = _xmlStrEqual(param_1,(xmlChar *)"node");
    if (iVar1 == 0) {
      iVar1 = _xmlStrEqual(param_1,(xmlChar *)"text");
      if (iVar1 == 0) {
        iVar1 = _xmlStrEqual(param_1,(xmlChar *)"comment");
        if (iVar1 == 0) {
          iVar1 = _xmlStrEqual(param_1,(xmlChar *)"processing-instruction");
          if (iVar1 == 0) {
            local_14 = 0;
          }
          else {
            local_14 = 1;
          }
        }
        else {
          local_14 = 1;
        }
      }
      else {
        local_14 = 1;
      }
    }
    else {
      local_14 = 1;
    }
  }
  return local_14;
}

