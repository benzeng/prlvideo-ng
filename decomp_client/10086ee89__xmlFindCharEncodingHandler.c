
/* WARNING: Enum "enum_2039": Some values do not have unique names */

xmlCharEncodingHandlerPtr _xmlFindCharEncodingHandler(char *name)

{
  char cVar1;
  int iVar2;
  xmlCharEncodingHandlerPtr pxVar3;
  xmlCharEncodingHandlerPtr local_b8;
  char *local_b0;
  char local_a8 [112];
  char *local_38;
  char *local_30;
  xmlCharEncoding local_28;
  int local_24;
  char *local_20;
  
  if (DAT_102312460 == 0) {
    _xmlInitCharEncodingHandlers();
  }
  if (name == (char *)0x0) {
    local_b8 = DAT_102312470;
  }
  else if (*name == '\0') {
    local_b8 = DAT_102312470;
  }
  else {
    local_30 = name;
    local_38 = _xmlGetEncodingAlias(name);
    local_b0 = name;
    if (local_38 != (char *)0x0) {
      local_b0 = local_38;
    }
    for (local_24 = 0; iVar2 = local_24, local_24 < 99; local_24 = local_24 + 1) {
      cVar1 = FUN_10086daa9((int)local_b0[local_24]);
      local_a8[iVar2] = cVar1;
      if (local_a8[local_24] == '\0') break;
    }
    local_a8[local_24] = '\0';
    for (local_24 = 0; local_24 < DAT_102312468; local_24 = local_24 + 1) {
      iVar2 = _strcmp(local_a8,(char *)**(undefined8 **)((long)local_24 * 8 + DAT_102312460));
      if (iVar2 == 0) {
        return *(xmlCharEncodingHandlerPtr *)((long)local_24 * 8 + DAT_102312460);
      }
    }
    local_28 = _xmlParseCharEncoding(local_30);
    if (((local_28 != ~XML_CHAR_ENCODING_ERROR) &&
        (local_20 = _xmlGetCharEncodingName(local_28), local_20 != (char *)0x0)) &&
       (iVar2 = _strcmp(local_b0,local_20), iVar2 != 0)) {
      pxVar3 = _xmlFindCharEncodingHandler(local_20);
      return pxVar3;
    }
    local_b8 = (xmlCharEncodingHandlerPtr)0x0;
  }
  return local_b8;
}

