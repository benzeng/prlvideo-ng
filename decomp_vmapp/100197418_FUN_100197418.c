
/* WARNING: Enum "enum_2029": Some values do not have unique names */

void FUN_100197418(htmlParserCtxtPtr param_1)

{
  charactersSAXFunc pcVar1;
  int len;
  xmlChar *local_50;
  byte local_48 [16];
  htmlEntityDesc *local_38;
  uint local_30;
  int local_2c;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  
  if (*param_1->input->cur == '&') {
    if (param_1->input->cur[1] == '#') {
      local_28 = 0;
      local_30 = _htmlParseCharRef(param_1);
      if (local_30 != 0) {
        if (local_30 < 0x80) {
          local_48[local_28] = (byte)local_30;
          local_28 = local_28 + 1;
          local_2c = -6;
        }
        else if (local_30 < 0x800) {
          local_48[local_28] = (byte)(local_30 >> 6) & 0x1f | 0xc0;
          local_28 = local_28 + 1;
          local_2c = 0;
        }
        else if (local_30 < 0x10000) {
          local_48[local_28] = (byte)(local_30 >> 0xc) & 0xf | 0xe0;
          local_28 = local_28 + 1;
          local_2c = 6;
        }
        else {
          local_48[local_28] = (byte)(local_30 >> 0x12) & 7 | 0xf0;
          local_28 = local_28 + 1;
          local_2c = 0xc;
        }
        for (; -1 < local_2c; local_2c = local_2c + -6) {
          local_48[local_28] = (byte)(local_30 >> ((byte)local_2c & 0x1f)) & 0x3f | 0x80;
          local_28 = local_28 + 1;
        }
        local_48[local_28] = 0;
        FUN_100191999(param_1);
        if ((param_1->sax != (_xmlSAXHandler *)0x0) &&
           (param_1->sax->characters != (charactersSAXFunc)0x0)) {
          (*param_1->sax->characters)(param_1->userData,local_48,local_28);
        }
      }
    }
    else {
      local_38 = _htmlParseEntityRef(param_1,&local_50);
      if (local_50 == (xmlChar *)0x0) {
        FUN_100191999(param_1);
        if ((param_1->sax != (_xmlSAXHandler *)0x0) &&
           (param_1->sax->characters != (charactersSAXFunc)0x0)) {
          (*param_1->sax->characters)(param_1->userData,(xmlChar *)"&",1);
        }
      }
      else if ((local_38 == (htmlEntityDesc *)0x0) || (local_38->value == 0)) {
        FUN_100191999(param_1);
        if ((param_1->sax != (_xmlSAXHandler *)0x0) &&
           (param_1->sax->characters != (charactersSAXFunc)0x0)) {
          (*param_1->sax->characters)(param_1->userData,(xmlChar *)"&",1);
          pcVar1 = param_1->sax->characters;
          len = _xmlStrlen(local_50);
          (*pcVar1)(param_1->userData,local_50,len);
        }
      }
      else {
        local_24 = local_38->value;
        if (local_24 < 0x80) {
          local_48[0] = (byte)local_24;
          local_1c = 1;
          local_20 = -6;
        }
        else if (local_24 < 0x800) {
          local_48[0] = (byte)(local_24 >> 6) & 0x1f | 0xc0;
          local_1c = 1;
          local_20 = 0;
        }
        else if (local_24 < 0x10000) {
          local_48[0] = (byte)(local_24 >> 0xc) & 0xf | 0xe0;
          local_1c = 1;
          local_20 = 6;
        }
        else {
          local_48[0] = (byte)(local_24 >> 0x12) & 7 | 0xf0;
          local_1c = 1;
          local_20 = 0xc;
        }
        for (; -1 < local_20; local_20 = local_20 + -6) {
          local_48[local_1c] = (byte)(local_24 >> ((byte)local_20 & 0x1f)) & 0x3f | 0x80;
          local_1c = local_1c + 1;
        }
        local_48[local_1c] = 0;
        FUN_100191999(param_1);
        if ((param_1->sax != (_xmlSAXHandler *)0x0) &&
           (param_1->sax->characters != (charactersSAXFunc)0x0)) {
          (*param_1->sax->characters)(param_1->userData,local_48,local_1c);
        }
      }
    }
  }
  return;
}

