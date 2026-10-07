
xmlChar * _xmlSchemaCollapseString(byte *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  xmlChar *local_48;
  byte *local_30;
  byte *local_28;
  byte *local_18;
  int local_c;
  
  local_c = 0;
  local_30 = param_1;
  if (param_1 == (byte *)0x0) {
    local_48 = (xmlChar *)0x0;
  }
  else {
    for (; (*local_30 != 0 &&
           ((*local_30 == 0x20 || (((8 < *local_30 && (*local_30 < 0xb)) || (*local_30 == 0xd))))));
        local_30 = local_30 + 1) {
    }
    for (local_28 = local_30; pbVar2 = local_28, iVar3 = (int)local_30, *local_28 != 0;
        local_28 = local_28 + 1) {
      if ((*local_28 == 0x20) &&
         (((local_28[1] == 0x20 || ((8 < local_28[1] && (local_28[1] < 0xb)))) ||
          (local_28[1] == 0xd)))) {
        local_c = (int)local_28 - iVar3;
        break;
      }
      if (((*local_28 == 10) || (*local_28 == 9)) || (*local_28 == 0xd)) {
        local_c = (int)local_28 - iVar3;
        break;
      }
    }
    if (local_c == 0) {
      do {
        pbVar1 = local_28;
        local_28 = pbVar1 + -1;
        if (local_28 <= local_30) break;
      } while (((*local_28 == 0x20) || ((8 < *local_28 && (*local_28 < 0xb)))) || (*local_28 == 0xd)
              );
      if ((local_30 == param_1) && (pbVar2 == pbVar1)) {
        local_48 = (xmlChar *)0x0;
      }
      else {
        local_48 = _xmlStrndup(local_30,(int)pbVar1 - iVar3);
      }
    }
    else {
      local_48 = _xmlStrdup(local_30);
      if (local_48 == (xmlChar *)0x0) {
        local_48 = (xmlChar *)0x0;
      }
      else {
        local_28 = local_48 + local_c;
        local_18 = local_28;
        while (*local_28 != 0) {
          if ((*local_28 == 0x20) || (((8 < *local_28 && (*local_28 < 0xb)) || (*local_28 == 0xd))))
          {
            do {
              do {
                local_28 = local_28 + 1;
              } while (*local_28 == 0x20);
            } while (((8 < *local_28) && (*local_28 < 0xb)) || (*local_28 == 0xd));
            if (*local_28 != 0) {
              *local_18 = 0x20;
              local_18 = local_18 + 1;
            }
          }
          else {
            *local_18 = *local_28;
            local_28 = local_28 + 1;
            local_18 = local_18 + 1;
          }
        }
        *local_18 = 0;
      }
    }
  }
  return local_48;
}

