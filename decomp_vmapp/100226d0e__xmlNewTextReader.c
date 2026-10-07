
/* WARNING: Enum "enum_2029": Some values do not have unique names */

undefined4 * _xmlNewTextReader(xmlParserInputBufferPtr param_1,char *param_2)

{
  xmlGenericErrorFunc pxVar1;
  xmlGenericErrorFunc *ppxVar2;
  void **ppvVar3;
  xmlBufferPtr pxVar4;
  undefined8 uVar5;
  xmlParserCtxtPtr pxVar6;
  undefined4 *local_40;
  
  if (param_1 == (xmlParserInputBufferPtr)0x0) {
    local_40 = (undefined4 *)0x0;
  }
  else {
    local_40 = (undefined4 *)(*(code *)_xmlMalloc)(0x150);
    if (local_40 == (undefined4 *)0x0) {
      ppxVar2 = ___xmlGenericError();
      pxVar1 = *ppxVar2;
      ppvVar3 = ___xmlGenericErrorContext();
      (*pxVar1)(*ppvVar3,"xmlNewTextReader : malloc failed\n");
      local_40 = (undefined4 *)0x0;
    }
    else {
      _memset(local_40,0,0x150);
      *(undefined8 *)(local_40 + 2) = 0;
      *(undefined8 *)(local_40 + 0x2e) = 0;
      local_40[0x2d] = 0;
      local_40[0x2c] = 0;
      *(xmlParserInputBufferPtr *)(local_40 + 0xc) = param_1;
      pxVar4 = _xmlBufferCreateSize(100);
      *(xmlBufferPtr *)(local_40 + 0x26) = pxVar4;
      if (*(long *)(local_40 + 0x26) == 0) {
        (*(code *)_xmlFree)(local_40);
        ppxVar2 = ___xmlGenericError();
        pxVar1 = *ppxVar2;
        ppvVar3 = ___xmlGenericErrorContext();
        (*pxVar1)(*ppvVar3,"xmlNewTextReader : malloc failed\n");
        local_40 = (undefined4 *)0x0;
      }
      else {
        uVar5 = (*(code *)_xmlMalloc)(0x100);
        *(undefined8 *)(local_40 + 10) = uVar5;
        if (*(long *)(local_40 + 10) == 0) {
          _xmlBufferFree(*(xmlBufferPtr *)(local_40 + 0x26));
          (*(code *)_xmlFree)(local_40);
          ppxVar2 = ___xmlGenericError();
          pxVar1 = *ppxVar2;
          ppvVar3 = ___xmlGenericErrorContext();
          (*pxVar1)(*ppvVar3,"xmlNewTextReader : malloc failed\n");
          local_40 = (undefined4 *)0x0;
        }
        else {
          _xmlSAXVersion(*(xmlSAXHandler **)(local_40 + 10),2);
          *(undefined8 *)(local_40 + 0xe) = *(undefined8 *)(*(long *)(local_40 + 10) + 0x70);
          *(code **)(*(long *)(local_40 + 10) + 0x70) = FUN_100224618;
          *(undefined8 *)(local_40 + 0x10) = *(undefined8 *)(*(long *)(local_40 + 10) + 0x78);
          *(code **)(*(long *)(local_40 + 10) + 0x78) = FUN_1002246e7;
          if (*(int *)(*(long *)(local_40 + 10) + 0xd8) == -0x21124151) {
            *(undefined8 *)(local_40 + 0x12) = *(undefined8 *)(*(long *)(local_40 + 10) + 0xe8);
            *(code **)(*(long *)(local_40 + 10) + 0xe8) = FUN_100224736;
            *(undefined8 *)(local_40 + 0x14) = *(undefined8 *)(*(long *)(local_40 + 10) + 0xf0);
            *(code **)(*(long *)(local_40 + 10) + 0xf0) = FUN_10022484f;
          }
          else {
            *(undefined8 *)(local_40 + 0x12) = 0;
            *(undefined8 *)(local_40 + 0x14) = 0;
          }
          *(undefined8 *)(local_40 + 0x16) = *(undefined8 *)(*(long *)(local_40 + 10) + 0x88);
          *(code **)(*(long *)(local_40 + 10) + 0x88) = FUN_1002248ae;
          *(code **)(*(long *)(local_40 + 10) + 0x90) = FUN_1002248ae;
          *(undefined8 *)(local_40 + 0x18) = *(undefined8 *)(*(long *)(local_40 + 10) + 200);
          *(code **)(*(long *)(local_40 + 10) + 200) = FUN_100224903;
          *local_40 = 0;
          *(undefined8 *)(local_40 + 0x1c) = 0;
          *(undefined8 *)(local_40 + 0x1e) = 0;
          if (*(uint *)(*(long *)(*(long *)(local_40 + 0xc) + 0x20) + 8) < 4) {
            _xmlParserInputBufferRead(param_1,4);
          }
          if (*(uint *)(*(long *)(*(long *)(local_40 + 0xc) + 0x20) + 8) < 4) {
            pxVar6 = _xmlCreatePushParserCtxt
                               (*(xmlSAXHandlerPtr *)(local_40 + 10),(void *)0x0,(char *)0x0,0,
                                param_2);
            *(xmlParserCtxtPtr *)(local_40 + 8) = pxVar6;
            local_40[0x1a] = 0;
            local_40[0x1b] = 0;
          }
          else {
            pxVar6 = _xmlCreatePushParserCtxt
                               (*(xmlSAXHandlerPtr *)(local_40 + 10),(void *)0x0,
                                (char *)**(undefined8 **)(*(long *)(local_40 + 0xc) + 0x20),4,
                                param_2);
            *(xmlParserCtxtPtr *)(local_40 + 8) = pxVar6;
            local_40[0x1a] = 0;
            local_40[0x1b] = 4;
          }
          if (*(long *)(local_40 + 8) == 0) {
            ppxVar2 = ___xmlGenericError();
            pxVar1 = *ppxVar2;
            ppvVar3 = ___xmlGenericErrorContext();
            (*pxVar1)(*ppvVar3,"xmlNewTextReader : malloc failed\n");
            _xmlBufferFree(*(xmlBufferPtr *)(local_40 + 0x26));
            (*(code *)_xmlFree)(*(undefined8 *)(local_40 + 10));
            (*(code *)_xmlFree)(local_40);
            local_40 = (undefined4 *)0x0;
          }
          else {
            *(undefined4 *)(*(long *)(local_40 + 8) + 0x2b0) = 5;
            *(undefined4 **)(*(long *)(local_40 + 8) + 0x1a8) = local_40;
            *(undefined4 *)(*(long *)(local_40 + 8) + 0x1b4) = 1;
            *(undefined4 *)(*(long *)(local_40 + 8) + 0x238) = 1;
            local_40[5] = 2;
            *(undefined4 *)(*(long *)(local_40 + 8) + 0x1dc) = 1;
            *(undefined8 *)(local_40 + 0x28) = *(undefined8 *)(*(long *)(local_40 + 8) + 0x1c8);
            local_40[0x44] = 0;
            local_40[0x4c] = 0;
            *(undefined8 *)(local_40 + 0x4e) = 0;
          }
        }
      }
    }
  }
  return local_40;
}

