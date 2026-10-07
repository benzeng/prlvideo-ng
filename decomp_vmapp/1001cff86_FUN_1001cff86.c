
xmlChar * FUN_1001cff86(xmlChar *param_1)

{
  int iVar1;
  xmlChar *pxVar2;
  xmlChar *local_7f0;
  xmlChar local_7e8 [2012];
  uint local_c;
  
  local_c = 0;
  iVar1 = _xmlStrncmp(param_1,(xmlChar *)"urn:publicid:",0xd);
  if (iVar1 != 0) {
    return (xmlChar *)0x0;
  }
  local_7f0 = param_1 + 0xd;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              if ((*local_7f0 == '\0') || (0x7cc < local_c)) {
                local_7e8[local_c] = '\0';
                pxVar2 = _xmlStrdup(local_7e8);
                return pxVar2;
              }
              if (*local_7f0 != '+') break;
              local_7e8[local_c] = ' ';
              local_c = local_c + 1;
              local_7f0 = local_7f0 + 1;
            }
            if (*local_7f0 != ':') break;
            local_7e8[local_c] = '/';
            local_7e8[local_c + 1] = '/';
            local_c = local_c + 2;
            local_7f0 = local_7f0 + 1;
          }
          if (*local_7f0 != ';') break;
          local_7e8[local_c] = ':';
          local_7e8[local_c + 1] = ':';
          local_c = local_c + 2;
          local_7f0 = local_7f0 + 1;
        }
        if (*local_7f0 == '%') break;
        local_7e8[local_c] = *local_7f0;
        local_c = local_c + 1;
        local_7f0 = local_7f0 + 1;
      }
      if ((local_7f0[1] != '2') || (local_7f0[2] != 'B')) break;
      local_7e8[local_c] = '+';
LAB_1001d00e6:
      local_c = local_c + 1;
      local_7f0 = local_7f0 + 3;
    }
    if ((local_7f0[1] == '3') && (local_7f0[2] == 'A')) {
      local_7e8[local_c] = ':';
      goto LAB_1001d00e6;
    }
    if ((local_7f0[1] == '2') && (local_7f0[2] == 'F')) {
      local_7e8[local_c] = '/';
      goto LAB_1001d00e6;
    }
    if ((local_7f0[1] == '3') && (local_7f0[2] == 'B')) {
      local_7e8[local_c] = ';';
      goto LAB_1001d00e6;
    }
    if ((local_7f0[1] == '2') && (local_7f0[2] == '7')) {
      local_7e8[local_c] = '\'';
      goto LAB_1001d00e6;
    }
    if ((local_7f0[1] == '3') && (local_7f0[2] == 'F')) {
      local_7e8[local_c] = '?';
      goto LAB_1001d00e6;
    }
    if ((local_7f0[1] == '2') && (local_7f0[2] == '3')) {
      local_7e8[local_c] = '#';
      goto LAB_1001d00e6;
    }
    if ((local_7f0[1] == '2') && (local_7f0[2] == '5')) {
      local_7e8[local_c] = '%';
      goto LAB_1001d00e6;
    }
    local_7e8[local_c] = *local_7f0;
    local_c = local_c + 1;
    local_7f0 = local_7f0 + 1;
  } while( true );
}

