
/* WARNING: Enum "enum_2039": Some values do not have unique names */

xmlParserInputBufferPtr ___xmlParserInputBufferCreateFilename(char *URI,xmlCharEncoding enc)

{
  int iVar1;
  int iVar2;
  xmlParserInputBufferPtr local_50;
  char local_38 [16];
  xmlParserInputBufferPtr local_28;
  int local_1c;
  undefined8 *local_18;
  char *local_10;
  
  local_1c = 0;
  local_18 = (undefined8 *)0x0;
  if (DAT_1023124a4 == 0) {
    _xmlRegisterDefaultInputCallbacks();
  }
  iVar2 = DAT_1023124a0;
  if (URI == (char *)0x0) {
    local_50 = (xmlParserInputBufferPtr)0x0;
  }
  else {
    while (local_18 == (undefined8 *)0x0) {
      do {
        local_1c = iVar2 + -1;
        if (local_1c < 0) goto LAB_1008ad9b1;
        iVar2 = local_1c;
      } while ((*(long *)(&DAT_1023124c0 + (long)local_1c * 0x20) == 0) ||
              (iVar1 = (**(code **)(&DAT_1023124c0 + (long)local_1c * 0x20))(URI), iVar2 = local_1c,
              iVar1 == 0));
      local_18 = (undefined8 *)(**(code **)(&DAT_1023124c8 + (long)local_1c * 0x20))(URI);
      iVar2 = local_1c;
    }
LAB_1008ad9b1:
    if (local_18 == (undefined8 *)0x0) {
      local_50 = (xmlParserInputBufferPtr)0x0;
    }
    else {
      local_28 = _xmlAllocParserInputBuffer(enc);
      if (local_28 == (xmlParserInputBufferPtr)0x0) {
        (**(code **)(&DAT_1023124d8 + (long)local_1c * 0x20))(local_18);
      }
      else {
        local_28->context = local_18;
        local_28->readcallback = *(xmlInputReadCallback *)(&DAT_1023124d0 + (long)local_1c * 0x20);
        local_28->closecallback = *(xmlInputCloseCallback *)(&DAT_1023124d8 + (long)local_1c * 0x20)
        ;
        if (((*(code **)(&DAT_1023124c8 + (long)local_1c * 0x20) == FUN_1008ac1df) &&
            (iVar2 = _strcmp(URI,"-"), iVar2 != 0)) && (4 < *(uint *)(local_18 + 1))) {
          local_10 = (char *)*local_18;
          iVar2 = _gzread(local_18,local_38,4);
          if (iVar2 == 4) {
            iVar2 = _strncmp(local_38,local_10,4);
            if (iVar2 == 0) {
              local_28->compressed = 0;
            }
            else {
              local_28->compressed = 1;
            }
            _gzrewind(local_18);
          }
        }
      }
      local_50 = local_28;
    }
  }
  return local_50;
}

