
void _xmlResetError(xmlErrorPtr err)

{
  if ((err != (xmlErrorPtr)0x0) && (err->code != 0)) {
    if (err->message != (char *)0x0) {
      (*(code *)_xmlFree)(err->message);
    }
    if (err->file != (char *)0x0) {
      (*(code *)_xmlFree)(err->file);
    }
    if (err->str1 != (char *)0x0) {
      (*(code *)_xmlFree)(err->str1);
    }
    if (err->str2 != (char *)0x0) {
      (*(code *)_xmlFree)(err->str2);
    }
    if (err->str3 != (char *)0x0) {
      (*(code *)_xmlFree)(err->str3);
    }
    _memset(err,0,0x58);
    err->code = 0;
  }
  return;
}

