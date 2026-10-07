
void _xmlRegisterCharEncodingHandler(xmlCharEncodingHandlerPtr handler)

{
  if (DAT_1011b76e0 == 0) {
    _xmlInitCharEncodingHandlers();
  }
  if (handler == (xmlCharEncodingHandlerPtr)0x0) {
    FUN_1001384a6(0x1771,"xmlRegisterCharEncodingHandler: NULL handler !\n",0);
  }
  else if (DAT_1011b76e8 < 0x32) {
    *(xmlCharEncodingHandlerPtr *)((long)DAT_1011b76e8 * 8 + DAT_1011b76e0) = handler;
    DAT_1011b76e8 = DAT_1011b76e8 + 1;
  }
  else {
    FUN_1001384a6(0x1772,"xmlRegisterCharEncodingHandler: Too many handler registered, see %s\n",
                  "MAX_ENCODING_HANDLERS");
  }
  return;
}

