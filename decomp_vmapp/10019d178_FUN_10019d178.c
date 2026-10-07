
void FUN_10019d178(xmlOutputBufferPtr param_1,xmlDocPtr param_2,long param_3)

{
  int iVar1;
  byte *string;
  xmlChar *string_00;
  byte *local_10;
  
  if (param_3 != 0) {
    _xmlOutputBufferWriteString(param_1," ");
    if ((*(long *)(param_3 + 0x48) != 0) && (*(long *)(*(long *)(param_3 + 0x48) + 0x18) != 0)) {
      _xmlOutputBufferWriteString(param_1,*(char **)(*(long *)(param_3 + 0x48) + 0x18));
      _xmlOutputBufferWriteString(param_1,":");
    }
    _xmlOutputBufferWriteString(param_1,*(char **)(param_3 + 0x10));
    if ((*(long *)(param_3 + 0x18) != 0) &&
       (iVar1 = _htmlIsBooleanAttr(*(xmlChar **)(param_3 + 0x10)), iVar1 == 0)) {
      string = _xmlNodeListGetString(param_2,*(xmlNodePtr *)(param_3 + 0x18),0);
      if (string == (byte *)0x0) {
        _xmlOutputBufferWriteString(param_1,"=\"\"");
      }
      else {
        _xmlOutputBufferWriteString(param_1,"=");
        if ((((*(long *)(param_3 + 0x48) == 0) && (*(long *)(param_3 + 0x28) != 0)) &&
            (*(long *)(*(long *)(param_3 + 0x28) + 0x48) == 0)) &&
           (((iVar1 = _xmlStrcasecmp(*(xmlChar **)(param_3 + 0x10),(xmlChar *)"href"),
             local_10 = string, iVar1 == 0 ||
             (iVar1 = _xmlStrcasecmp(*(xmlChar **)(param_3 + 0x10),(xmlChar *)"action"), iVar1 == 0)
             ) || ((iVar1 = _xmlStrcasecmp(*(xmlChar **)(param_3 + 0x10),(xmlChar *)"src"),
                   iVar1 == 0 ||
                   ((iVar1 = _xmlStrcasecmp(*(xmlChar **)(param_3 + 0x10),(xmlChar *)"name"),
                    iVar1 == 0 &&
                    (iVar1 = _xmlStrcasecmp(*(xmlChar **)(*(long *)(param_3 + 0x28) + 0x10),
                                            (xmlChar *)"a"), iVar1 == 0)))))))) {
          for (; (*local_10 == 0x20 ||
                 (((8 < *local_10 && (*local_10 < 0xb)) || (*local_10 == 0xd))));
              local_10 = local_10 + 1) {
          }
          string_00 = (xmlChar *)_xmlURIEscapeStr(local_10,"@/:=?;#%&,+");
          if (string_00 == (xmlChar *)0x0) {
            _xmlBufferWriteQuotedString((xmlBufferPtr)param_1->buffer,string);
          }
          else {
            _xmlBufferWriteQuotedString((xmlBufferPtr)param_1->buffer,string_00);
            (*(code *)_xmlFree)(string_00);
          }
        }
        else {
          _xmlBufferWriteQuotedString((xmlBufferPtr)param_1->buffer,string);
        }
        (*(code *)_xmlFree)(string);
      }
    }
  }
  return;
}

