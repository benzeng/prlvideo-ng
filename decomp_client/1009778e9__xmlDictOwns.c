
int _xmlDictOwns(xmlDictPtr dict,xmlChar *str)

{
  int local_2c;
  undefined8 *local_10;
  
  if ((dict == (xmlDictPtr)0x0) || (str == (xmlChar *)0x0)) {
    local_2c = -1;
  }
  else {
    for (local_10 = *(undefined8 **)(dict + 0x20); local_10 != (undefined8 *)0x0;
        local_10 = (undefined8 *)*local_10) {
      if ((local_10 + 4 <= str) && (str <= (xmlChar *)local_10[1])) {
        return 1;
      }
    }
    if (*(long *)(dict + 0x28) == 0) {
      local_2c = 0;
    }
    else {
      local_2c = _xmlDictOwns(*(xmlDictPtr *)(dict + 0x28),str);
    }
  }
  return local_2c;
}

