
/* WARNING: Enum "enum_2039": Some values do not have unique names */

xmlCharEncodingHandlerPtr _xmlGetCharEncodingHandler(xmlCharEncoding enc)

{
  xmlCharEncodingHandlerPtr pxVar1;
  xmlCharEncodingHandlerPtr local_28;
  
  if (DAT_102312460 == 0) {
    _xmlInitCharEncodingHandlers();
  }
  switch(enc) {
  case XML_CHAR_ENCODING_ERROR:
    return (xmlCharEncodingHandlerPtr)0x0;
  case XML_CHAR_ENCODING_UTF8:
    return (xmlCharEncodingHandlerPtr)0x0;
  case XML_CHAR_ENCODING_UTF16LE:
    return DAT_102312440;
  case XML_CHAR_ENCODING_UTF16BE:
    return DAT_102312448;
  case XML_CHAR_ENCODING_UCS4LE:
    pxVar1 = _xmlFindCharEncodingHandler("ISO-10646-UCS-4");
    if (pxVar1 != (xmlCharEncodingHandlerPtr)0x0) {
      return pxVar1;
    }
    pxVar1 = _xmlFindCharEncodingHandler("UCS-4");
    if (pxVar1 != (xmlCharEncodingHandlerPtr)0x0) {
      return pxVar1;
    }
    pxVar1 = _xmlFindCharEncodingHandler("UCS4");
    goto joined_r0x00010086eb74;
  case XML_CHAR_ENCODING_UCS4BE:
    pxVar1 = _xmlFindCharEncodingHandler("ISO-10646-UCS-4");
    if (pxVar1 != (xmlCharEncodingHandlerPtr)0x0) {
      return pxVar1;
    }
    pxVar1 = _xmlFindCharEncodingHandler("UCS-4");
    if (pxVar1 != (xmlCharEncodingHandlerPtr)0x0) {
      return pxVar1;
    }
    pxVar1 = _xmlFindCharEncodingHandler("UCS4");
joined_r0x00010086eb74:
    if (pxVar1 != (xmlCharEncodingHandlerPtr)0x0) {
      return pxVar1;
    }
    goto switchD_10086ea26_caseD_7;
  case XML_CHAR_ENCODING_EBCDIC:
    pxVar1 = _xmlFindCharEncodingHandler("EBCDIC");
    if (pxVar1 != (xmlCharEncodingHandlerPtr)0x0) {
      return pxVar1;
    }
    local_28 = _xmlFindCharEncodingHandler("ebcdic");
    break;
  default:
    goto switchD_10086ea26_caseD_7;
  case XML_CHAR_ENCODING_UCS2:
    pxVar1 = _xmlFindCharEncodingHandler("ISO-10646-UCS-2");
    if (pxVar1 != (xmlCharEncodingHandlerPtr)0x0) {
      return pxVar1;
    }
    pxVar1 = _xmlFindCharEncodingHandler("UCS-2");
    if (pxVar1 != (xmlCharEncodingHandlerPtr)0x0) {
      return pxVar1;
    }
    local_28 = _xmlFindCharEncodingHandler("UCS2");
    break;
  case XML_CHAR_ENCODING_8859_1:
    local_28 = _xmlFindCharEncodingHandler("ISO-8859-1");
    break;
  case XML_CHAR_ENCODING_8859_2:
    local_28 = _xmlFindCharEncodingHandler("ISO-8859-2");
    break;
  case XML_CHAR_ENCODING_8859_3:
    local_28 = _xmlFindCharEncodingHandler("ISO-8859-3");
    break;
  case XML_CHAR_ENCODING_8859_4:
    local_28 = _xmlFindCharEncodingHandler("ISO-8859-4");
    break;
  case XML_CHAR_ENCODING_8859_5:
    local_28 = _xmlFindCharEncodingHandler("ISO-8859-5");
    break;
  case XML_CHAR_ENCODING_8859_6:
    local_28 = _xmlFindCharEncodingHandler("ISO-8859-6");
    break;
  case XML_CHAR_ENCODING_8859_7:
    local_28 = _xmlFindCharEncodingHandler("ISO-8859-7");
    break;
  case XML_CHAR_ENCODING_8859_8:
    local_28 = _xmlFindCharEncodingHandler("ISO-8859-8");
    break;
  case XML_CHAR_ENCODING_8859_9:
    local_28 = _xmlFindCharEncodingHandler("ISO-8859-9");
    break;
  case XML_CHAR_ENCODING_2022_JP:
    local_28 = _xmlFindCharEncodingHandler("ISO-2022-JP");
    break;
  case XML_CHAR_ENCODING_SHIFT_JIS:
    pxVar1 = _xmlFindCharEncodingHandler("SHIFT-JIS");
    if (pxVar1 != (xmlCharEncodingHandlerPtr)0x0) {
      return pxVar1;
    }
    pxVar1 = _xmlFindCharEncodingHandler("SHIFT_JIS");
    if (pxVar1 != (xmlCharEncodingHandlerPtr)0x0) {
      return pxVar1;
    }
    local_28 = _xmlFindCharEncodingHandler("Shift_JIS");
    break;
  case XML_CHAR_ENCODING_EUC_JP:
    local_28 = _xmlFindCharEncodingHandler("EUC-JP");
    break;
  case ~XML_CHAR_ENCODING_ERROR:
    return (xmlCharEncodingHandlerPtr)0x0;
  }
  if (local_28 == (xmlCharEncodingHandlerPtr)0x0) {
switchD_10086ea26_caseD_7:
    local_28 = (xmlCharEncodingHandlerPtr)0x0;
  }
  return local_28;
}

