
/* WARNING: Enum "enum_2039": Some values do not have unique names */

char * _xmlGetCharEncodingName(xmlCharEncoding enc)

{
  char *local_18;
  
  switch(enc) {
  case XML_CHAR_ENCODING_ERROR:
    local_18 = (char *)0x0;
    break;
  case XML_CHAR_ENCODING_UTF8:
    local_18 = "UTF-8";
    break;
  case XML_CHAR_ENCODING_UTF16LE:
    local_18 = "UTF-16";
    break;
  case XML_CHAR_ENCODING_UTF16BE:
    local_18 = "UTF-16";
    break;
  case XML_CHAR_ENCODING_UCS4LE:
    local_18 = "ISO-10646-UCS-4";
    break;
  case XML_CHAR_ENCODING_UCS4BE:
    local_18 = "ISO-10646-UCS-4";
    break;
  case XML_CHAR_ENCODING_EBCDIC:
    local_18 = "EBCDIC";
    break;
  case XML_CHAR_ENCODING_UCS4_2143:
    local_18 = "ISO-10646-UCS-4";
    break;
  case XML_CHAR_ENCODING_UCS4_3412:
    local_18 = "ISO-10646-UCS-4";
    break;
  case XML_CHAR_ENCODING_UCS2:
    local_18 = "ISO-10646-UCS-2";
    break;
  case XML_CHAR_ENCODING_8859_1:
    local_18 = "ISO-8859-1";
    break;
  case XML_CHAR_ENCODING_8859_2:
    local_18 = "ISO-8859-2";
    break;
  case XML_CHAR_ENCODING_8859_3:
    local_18 = "ISO-8859-3";
    break;
  case XML_CHAR_ENCODING_8859_4:
    local_18 = "ISO-8859-4";
    break;
  case XML_CHAR_ENCODING_8859_5:
    local_18 = "ISO-8859-5";
    break;
  case XML_CHAR_ENCODING_8859_6:
    local_18 = "ISO-8859-6";
    break;
  case XML_CHAR_ENCODING_8859_7:
    local_18 = "ISO-8859-7";
    break;
  case XML_CHAR_ENCODING_8859_8:
    local_18 = "ISO-8859-8";
    break;
  case XML_CHAR_ENCODING_8859_9:
    local_18 = "ISO-8859-9";
    break;
  case XML_CHAR_ENCODING_2022_JP:
    local_18 = "ISO-2022-JP";
    break;
  case XML_CHAR_ENCODING_SHIFT_JIS:
    local_18 = "Shift-JIS";
    break;
  case XML_CHAR_ENCODING_EUC_JP:
    local_18 = "EUC-JP";
    break;
  case XML_CHAR_ENCODING_ASCII:
    local_18 = (char *)0x0;
    break;
  case ~XML_CHAR_ENCODING_ERROR:
    local_18 = (char *)0x0;
    break;
  default:
    local_18 = (char *)0x0;
  }
  return local_18;
}

