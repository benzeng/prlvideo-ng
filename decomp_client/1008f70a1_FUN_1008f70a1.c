
xmlChar * FUN_1008f70a1(long param_1,xmlNodePtr param_2,xmlChar *param_3)

{
  xmlChar *local_38;
  
  local_38 = _xmlGetNsProp(param_2,(xmlChar *)"http://www.w3.org/2003/XInclude",param_3);
  if ((local_38 == (xmlChar *)0x0) &&
     ((*(int *)(param_1 + 0x54) == 0 ||
      (local_38 = _xmlGetNsProp(param_2,(xmlChar *)"http://www.w3.org/2001/XInclude",param_3),
      local_38 == (xmlChar *)0x0)))) {
    local_38 = _xmlGetProp(param_2,param_3);
  }
  return local_38;
}

