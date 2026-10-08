
undefined4 FUN_1008b3b5a(long *param_1,undefined8 *param_2)

{
  xmlChar *pxVar1;
  undefined4 local_2c;
  char *local_10;
  
  if (param_2 == (undefined8 *)0x0) {
    local_2c = 0xffffffff;
  }
  else {
    local_10 = (char *)*param_2;
    if (((*local_10 < 'a') || ('z' < *local_10)) && ((*local_10 < 'A' || ('Z' < *local_10)))) {
      local_2c = 2;
    }
    else {
LAB_1008b3bd0:
      do {
        local_10 = local_10 + 1;
        if ('`' < *local_10) {
          if (*local_10 < '{') goto LAB_1008b3bd0;
        }
      } while ((('@' < *local_10) && (*local_10 < '[')) ||
              ((('/' < *local_10 && (*local_10 < ':')) ||
               (((*local_10 == '+' || (*local_10 == '-')) || (*local_10 == '.'))))));
      if (param_1 != (long *)0x0) {
        if (*param_1 != 0) {
          (*(code *)_xmlFree)(*param_1);
        }
        pxVar1 = _xmlStrndup((xmlChar *)*param_2,(int)local_10 - (int)*param_2);
        *param_1 = (long)pxVar1;
      }
      *param_2 = local_10;
      local_2c = 0;
    }
  }
  return local_2c;
}

