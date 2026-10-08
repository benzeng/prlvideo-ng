
/* WARNING: Enum "enum_2029": Some values do not have unique names */
/* WARNING: Enum "enum_2039": Some values do not have unique names */

int _xmlSchemaValidateStream
              (long param_1,xmlParserInputBufferPtr param_2,xmlCharEncoding param_3,
              _xmlSAXHandler *param_4,void *param_5)

{
  _xmlSAXHandler *p_Var1;
  xmlParserCtxtPtr ctxt;
  xmlParserInputPtr pxVar2;
  int local_64;
  long local_30;
  int local_c;
  
  local_30 = 0;
  if ((param_1 == 0) || (param_2 == (xmlParserInputBufferPtr)0x0)) {
    local_64 = -1;
  }
  else {
    ctxt = _xmlNewParserCtxt();
    if (ctxt == (xmlParserCtxtPtr)0x0) {
      local_64 = -1;
    }
    else {
      p_Var1 = ctxt->sax;
      ctxt->sax = param_4;
      ctxt->userData = param_5;
      ctxt->linenumbers = 1;
      pxVar2 = _xmlNewIOInputStream(ctxt,param_2,param_3);
      if (pxVar2 == (xmlParserInputPtr)0x0) {
        local_c = -1;
      }
      else {
        _inputPush(ctxt,pxVar2);
        *(xmlParserCtxtPtr *)(param_1 + 0x50) = ctxt;
        *(xmlParserInputBufferPtr *)(param_1 + 0x38) = param_2;
        local_30 = _xmlSchemaSAXPlug(param_1,ctxt,&ctxt->userData);
        if (local_30 == 0) {
          local_c = -1;
        }
        else {
          *(xmlParserInputBufferPtr *)(param_1 + 0x38) = param_2;
          *(xmlCharEncoding *)(param_1 + 0x40) = param_3;
          *(_xmlSAXHandler **)(param_1 + 0x48) = ctxt->sax;
          *(uint *)(param_1 + 0xf8) = *(uint *)(param_1 + 0xf8) | 1;
          local_c = FUN_1009465fe(param_1);
          if (((local_c == 0) && (*(int *)(*(long *)(param_1 + 0x50) + 0x18) == 0)) &&
             (local_c = *(int *)(*(long *)(param_1 + 0x50) + 0x88), local_c == 0)) {
            local_c = 1;
          }
        }
      }
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      if (local_30 != 0) {
        _xmlSchemaSAXUnplug(local_30);
      }
      if (ctxt != (xmlParserCtxtPtr)0x0) {
        ctxt->sax = p_Var1;
        _xmlFreeParserCtxt(ctxt);
      }
      local_64 = local_c;
    }
  }
  return local_64;
}

