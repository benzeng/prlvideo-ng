
void _xmlRegisterCharEncodingHandler(xmlCharEncodingHandlerPtr handler)

{
  if (DAT_102312460 == 0) {
    _xmlInitCharEncodingHandlers();
  }
  if (handler == (xmlCharEncodingHandlerPtr)0x0) {
    FUN_10086bdce(0x1771,"xmlRegisterCharEncodingHandler: NULL handler !\n",0);
  }
  else if (DAT_102312468 < 0x32) {
    *(xmlCharEncodingHandlerPtr *)((long)DAT_102312468 * 8 + DAT_102312460) = handler;
    DAT_102312468 = DAT_102312468 + 1;
  }
  else {
    FUN_10086bdce(0x1772,"xmlRegisterCharEncodingHandler: Too many handler registered, see %s\n",
                  "MAX_ENCODING_HANDLERS");
  }
  return;
}

