
/* WARNING: Enum "enum_2039": Some values do not have unique names */

undefined4 FUN_1008fa059(long param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 local_7c;
  int local_54;
  xmlParserInputBufferPtr local_50;
  xmlNodePtr local_48;
  long local_40;
  xmlChar *local_38;
  int local_2c;
  xmlChar *local_28;
  xmlCharEncoding local_20;
  uint local_1c;
  xmlChar *local_18;
  int local_c;
  
  local_28 = (xmlChar *)0x0;
  local_20 = XML_CHAR_ENCODING_ERROR;
  local_40 = _xmlParseURI(param_2);
  if (local_40 == 0) {
    FUN_1008f6fe0(param_1,*(undefined8 *)
                           (*(long *)(*(long *)(param_1 + 0x18) + (long)param_3 * 8) + 0x18),0x645,
                  "invalid value URI %s\n",param_2);
    local_7c = 0xffffffff;
  }
  else if (*(long *)(local_40 + 0x40) == 0) {
    local_38 = (xmlChar *)_xmlSaveUri(local_40);
    _xmlFreeURI(local_40);
    if (local_38 == (xmlChar *)0x0) {
      FUN_1008f6fe0(param_1,*(undefined8 *)
                             (*(long *)(*(long *)(param_1 + 0x18) + (long)param_3 * 8) + 0x18),0x645
                    ,"invalid value URI %s\n",param_2);
      local_7c = 0xffffffff;
    }
    else if (*local_38 == '\0') {
      FUN_1008f6fe0(param_1,*(undefined8 *)
                             (*(long *)(*(long *)(param_1 + 0x18) + (long)param_3 * 8) + 0x18),0x647
                    ,"text serialization of document not available\n",0);
      (*(code *)_xmlFree)(local_38);
      local_7c = 0xffffffff;
    }
    else {
      for (local_2c = 0; local_2c < *(int *)(param_1 + 0x20); local_2c = local_2c + 1) {
        iVar2 = _xmlStrEqual(local_38,*(xmlChar **)(*(long *)(param_1 + 0x30) + (long)local_2c * 8))
        ;
        if (iVar2 != 0) {
          local_48 = _xmlCopyNode(*(xmlNodePtr *)(*(long *)(param_1 + 0x28) + (long)local_2c * 8),1)
          ;
          goto LAB_1008fa51d;
        }
      }
      if ((*(long *)(*(long *)(param_1 + 0x18) + (long)param_3 * 8) != 0) &&
         (*(long *)(*(long *)(*(long *)(param_1 + 0x18) + (long)param_3 * 8) + 0x18) != 0)) {
        local_28 = _xmlGetProp(*(xmlNodePtr *)
                                (*(long *)(*(long *)(param_1 + 0x18) + (long)param_3 * 8) + 0x18),
                               (xmlChar *)"encoding");
      }
      if (local_28 != (xmlChar *)0x0) {
        local_20 = _xmlParseCharEncoding((char *)local_28);
        if (local_20 == ~XML_CHAR_ENCODING_ERROR) {
          FUN_1008f6fe0(param_1,*(undefined8 *)
                                 (*(long *)(*(long *)(param_1 + 0x18) + (long)param_3 * 8) + 0x18),
                        0x64a,"encoding %s not supported\n",local_28);
          (*(code *)_xmlFree)(local_28);
          (*(code *)_xmlFree)(local_38);
          return 0xffffffff;
        }
        (*(code *)_xmlFree)(local_28);
      }
      local_50 = _xmlParserInputBufferCreateFilename((char *)local_38,local_20);
      if (local_50 == (xmlParserInputBufferPtr)0x0) {
        (*(code *)_xmlFree)(local_38);
        local_7c = 0xffffffff;
      }
      else {
        local_48 = _xmlNewText((xmlChar *)0x0);
        while (iVar2 = _xmlParserInputBufferRead(local_50,0x80), 0 < iVar2) {
          local_18 = _xmlBufferContent((xmlBufferPtr)local_50->buffer);
          local_1c = _xmlBufferLength((xmlBufferPtr)local_50->buffer);
          for (local_2c = 0; local_2c < (int)local_1c; local_2c = local_2c + local_54) {
            local_c = _xmlStringCurrentChar(0,local_18 + local_2c,&local_54);
            if (local_c < 0x100) {
              if ((((local_c < 9) || (10 < local_c)) && (local_c != 0xd)) && (local_c < 0x20)) {
                bVar1 = true;
              }
              else {
                bVar1 = false;
              }
            }
            else if ((((local_c < 0x100) || (0xd7ff < local_c)) &&
                     ((local_c < 0xe000 || (0xfffd < local_c)))) &&
                    ((local_c < 0x10000 || (0x10ffff < local_c)))) {
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
            if (bVar1) {
              FUN_1008f6fe0(param_1,*(undefined8 *)
                                     (*(long *)(*(long *)(param_1 + 0x18) + (long)param_3 * 8) +
                                     0x18),0x648,"%s contains invalid char\n",local_38);
            }
            else {
              _xmlNodeAddContentLen(local_48,local_18 + local_2c,local_54);
            }
          }
          _xmlBufferShrink((xmlBufferPtr)local_50->buffer,local_1c);
        }
        _xmlFreeParserInputBuffer(local_50);
        FUN_1008f8186(param_1,local_48,local_38);
LAB_1008fa51d:
        *(xmlNodePtr *)(*(long *)(*(long *)(param_1 + 0x18) + (long)param_3 * 8) + 0x20) = local_48;
        (*(code *)_xmlFree)(local_38);
        local_7c = 0;
      }
    }
  }
  else {
    FUN_1008f6fe0(param_1,*(undefined8 *)
                           (*(long *)(*(long *)(param_1 + 0x18) + (long)param_3 * 8) + 0x18),0x646,
                  "fragment identifier forbidden for text: %s\n",*(undefined8 *)(local_40 + 0x40));
    _xmlFreeURI(local_40);
    local_7c = 0xffffffff;
  }
  return local_7c;
}

