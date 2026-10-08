
xmlChar * FUN_10094b043(byte *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  xmlChar *local_38;
  byte *local_20;
  byte *local_18;
  
  local_20 = param_1;
  if (param_1 == (byte *)0x0) {
    local_38 = (xmlChar *)0x0;
  }
  else {
    for (; (*local_20 != 0 &&
           ((*local_20 == 0x20 || (((8 < *local_20 && (*local_20 < 0xb)) || (*local_20 == 0xd))))));
        local_20 = local_20 + 1) {
    }
    for (local_18 = local_20; pbVar2 = local_18, *local_18 != 0; local_18 = local_18 + 1) {
    }
    do {
      pbVar1 = local_18;
      local_18 = pbVar1 + -1;
      if (local_18 <= local_20) break;
    } while (((*local_18 == 0x20) || ((8 < *local_18 && (*local_18 < 0xb)))) || (*local_18 == 0xd));
    if ((local_20 == param_1) && (pbVar2 == pbVar1)) {
      local_38 = (xmlChar *)0x0;
    }
    else {
      local_38 = _xmlStrndup(local_20,(int)pbVar1 - (int)local_20);
    }
  }
  return local_38;
}

