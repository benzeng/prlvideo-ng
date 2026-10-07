
/* WARNING: Enum "enum_2039": Some values do not have unique names */

xmlCharEncoding _xmlDetectCharEncoding(uchar *in,int len)

{
  if (in == (uchar *)0x0) {
    return XML_CHAR_ENCODING_ERROR;
  }
  if (3 < len) {
    if ((((*in == '\0') && (in[1] == '\0')) && (in[2] == '\0')) && (in[3] == '<')) {
      return XML_CHAR_ENCODING_UCS4BE;
    }
    if (((*in == '<') && (in[1] == '\0')) && ((in[2] == '\0' && (in[3] == '\0')))) {
      return XML_CHAR_ENCODING_UCS4LE;
    }
    if (((*in == '\0') && (in[1] == '\0')) && ((in[2] == '<' && (in[3] == '\0')))) {
      return XML_CHAR_ENCODING_UCS4_2143;
    }
    if ((((*in == '\0') && (in[1] == '<')) && (in[2] == '\0')) && (in[3] == '\0')) {
      return XML_CHAR_ENCODING_UCS4_3412;
    }
    if (((*in == 'L') && (in[1] == 'o')) && ((in[2] == 0xa7 && (in[3] == 0x94)))) {
      return XML_CHAR_ENCODING_EBCDIC;
    }
    if (((*in == '<') && (in[1] == '?')) && ((in[2] == 'x' && (in[3] == 'm')))) {
      return XML_CHAR_ENCODING_UTF8;
    }
    if ((((*in == '<') && (in[1] == '\0')) && (in[2] == '?')) && (in[3] == '\0')) {
      return XML_CHAR_ENCODING_UTF16LE;
    }
    if (((*in == '\0') && (in[1] == '<')) && ((in[2] == '\0' && (in[3] == '?')))) {
      return XML_CHAR_ENCODING_UTF16BE;
    }
  }
  if (((2 < len) && (*in == 0xef)) && ((in[1] == 0xbb && (in[2] == 0xbf)))) {
    return XML_CHAR_ENCODING_UTF8;
  }
  if (1 < len) {
    if ((*in == 0xfe) && (in[1] == 0xff)) {
      return XML_CHAR_ENCODING_UTF16BE;
    }
    if ((*in == 0xff) && (in[1] == 0xfe)) {
      return XML_CHAR_ENCODING_UTF16LE;
    }
  }
  return XML_CHAR_ENCODING_ERROR;
}

