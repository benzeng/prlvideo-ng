
undefined8 FUN_1008e5ee7(long *param_1,undefined8 *param_2)

{
  undefined8 local_10;
  
  *param_2 = 0;
  local_10 = _xmlXPathParseNCName(param_1);
  if (*(char *)*param_1 == ':') {
    *param_2 = local_10;
    if (*(char *)*param_1 != '\0') {
      *param_1 = *param_1 + 1;
    }
    local_10 = _xmlXPathParseNCName(param_1);
  }
  return local_10;
}

