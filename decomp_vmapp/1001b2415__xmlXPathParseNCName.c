
xmlChar * _xmlXPathParseNCName(long *param_1)

{
  xmlChar *pxVar1;
  int len;
  xmlChar *local_38;
  byte *local_20;
  
  if ((param_1 == (long *)0x0) || (*param_1 == 0)) {
    local_38 = (xmlChar *)0x0;
  }
  else {
    local_20 = (byte *)*param_1;
    if ((((0x60 < *local_20) && (*local_20 < 0x7b)) || ((0x40 < *local_20 && (*local_20 < 0x5b))))
       || (*local_20 == 0x5f)) {
LAB_1001b249e:
      do {
        local_20 = local_20 + 1;
        if (0x60 < *local_20) {
          if (*local_20 < 0x7b) goto LAB_1001b249e;
        }
      } while (((0x40 < *local_20) && (*local_20 < 0x5b)) ||
              (((0x2f < *local_20 && (*local_20 < 0x3a)) ||
               (((*local_20 == 0x5f || (*local_20 == 0x2e)) || (*local_20 == 0x2d))))));
      if (((((*local_20 == 0x20) || (*local_20 == 0x3e)) || (*local_20 == 0x2f)) ||
          ((*local_20 == 0x5b || (*local_20 == 0x5d)))) ||
         ((*local_20 == 0x3a || ((*local_20 == 0x40 || (*local_20 == 0x2a)))))) {
        len = (int)local_20 - (int)*param_1;
        if (len == 0) {
          return (xmlChar *)0x0;
        }
        pxVar1 = _xmlStrndup((xmlChar *)*param_1,len);
        *param_1 = (long)local_20;
        return pxVar1;
      }
    }
    local_38 = (xmlChar *)FUN_1001b27a9(param_1,0);
  }
  return local_38;
}

