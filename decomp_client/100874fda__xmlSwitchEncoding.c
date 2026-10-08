
/* WARNING: Enum "enum_2039": Some values do not have unique names */

undefined4 _xmlSwitchEncoding(long param_1,xmlCharEncoding param_2)

{
  xmlCharEncodingHandlerPtr pxVar1;
  xmlChar *pxVar2;
  undefined4 local_28;
  
  if (param_1 != 0) {
    switch(param_2) {
    case XML_CHAR_ENCODING_ERROR:
      *(undefined4 *)(param_1 + 0x198) = 1;
      return 0;
    case XML_CHAR_ENCODING_UTF8:
      *(undefined4 *)(param_1 + 0x198) = 1;
      if (((*(long *)(param_1 + 0x38) != 0) &&
          (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == -0x11)) &&
         ((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1) == -0x45 &&
          (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 2) == -0x41)))) {
        *(long *)(*(long *)(param_1 + 0x38) + 0x20) =
             *(long *)(*(long *)(param_1 + 0x38) + 0x20) + 3;
      }
      return 0;
    case XML_CHAR_ENCODING_UTF16LE:
    case XML_CHAR_ENCODING_UTF16BE:
      if ((((*(long *)(param_1 + 0x38) != 0) &&
           (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == -0x11)) &&
          (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1) == -0x45)) &&
         (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 2) == -0x41)) {
        *(long *)(*(long *)(param_1 + 0x38) + 0x20) =
             *(long *)(*(long *)(param_1 + 0x38) + 0x20) + 3;
      }
      break;
    case ~XML_CHAR_ENCODING_ERROR:
      ___xmlErrEncoding(param_1,0x1f,"encoding unknown\n",0,0);
    }
    pxVar1 = _xmlGetCharEncodingHandler(param_2);
    if (pxVar1 == (xmlCharEncodingHandlerPtr)0x0) {
      switch(param_2) {
      case XML_CHAR_ENCODING_ERROR:
        *(undefined4 *)(param_1 + 0x198) = 1;
        return 0;
      case XML_CHAR_ENCODING_UTF8:
      case XML_CHAR_ENCODING_ASCII:
        *(undefined4 *)(param_1 + 0x198) = 1;
        return 0;
      case XML_CHAR_ENCODING_UCS4LE:
        ___xmlErrEncoding(param_1,0x20,"encoding not supported %s\n","USC4 little endian",0);
        break;
      case XML_CHAR_ENCODING_UCS4BE:
        ___xmlErrEncoding(param_1,0x20,"encoding not supported %s\n","USC4 big endian",0);
        break;
      case XML_CHAR_ENCODING_EBCDIC:
        ___xmlErrEncoding(param_1,0x20,"encoding not supported %s\n","EBCDIC",0);
        break;
      case XML_CHAR_ENCODING_UCS4_2143:
        ___xmlErrEncoding(param_1,0x20,"encoding not supported %s\n","UCS4 2143",0);
        break;
      case XML_CHAR_ENCODING_UCS4_3412:
        ___xmlErrEncoding(param_1,0x20,"encoding not supported %s\n","UCS4 3412",0);
        break;
      case XML_CHAR_ENCODING_UCS2:
        ___xmlErrEncoding(param_1,0x20,"encoding not supported %s\n","UCS2",0);
        break;
      case XML_CHAR_ENCODING_8859_1:
      case XML_CHAR_ENCODING_8859_2:
      case XML_CHAR_ENCODING_8859_3:
      case XML_CHAR_ENCODING_8859_4:
      case XML_CHAR_ENCODING_8859_5:
      case XML_CHAR_ENCODING_8859_6:
      case XML_CHAR_ENCODING_8859_7:
      case XML_CHAR_ENCODING_8859_8:
      case XML_CHAR_ENCODING_8859_9:
        if (((*(int *)(param_1 + 0x40) == 1) && (*(long *)(param_1 + 0x28) == 0)) &&
           (*(long *)(*(long *)(param_1 + 0x38) + 0x50) != 0)) {
          pxVar2 = _xmlStrdup(*(xmlChar **)(*(long *)(param_1 + 0x38) + 0x50));
          *(xmlChar **)(param_1 + 0x28) = pxVar2;
        }
        *(xmlCharEncoding *)(param_1 + 0x198) = param_2;
        return 0;
      case XML_CHAR_ENCODING_2022_JP:
        ___xmlErrEncoding(param_1,0x20,"encoding not supported %s\n","ISO-2022-JP",0);
        break;
      case XML_CHAR_ENCODING_SHIFT_JIS:
        ___xmlErrEncoding(param_1,0x20,"encoding not supported %s\n","Shift_JIS",0);
        break;
      case XML_CHAR_ENCODING_EUC_JP:
        ___xmlErrEncoding(param_1,0x20,"encoding not supported %s\n","EUC-JP",0);
        break;
      case ~XML_CHAR_ENCODING_ERROR:
        ___xmlErrEncoding(param_1,0x1f,"encoding unknown\n",0,0);
      }
    }
    if (pxVar1 == (xmlCharEncodingHandlerPtr)0x0) {
      local_28 = 0xffffffff;
    }
    else {
      *(undefined4 *)(param_1 + 0x198) = 1;
      local_28 = _xmlSwitchToEncoding(param_1,pxVar1);
    }
    return local_28;
  }
  return 0xffffffff;
}

