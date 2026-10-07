
/* WARNING: Enum "enum_2029": Some values do not have unique names */
/* WARNING: Enum "enum_2039": Some values do not have unique names */

undefined4
FUN_10022c1df(undefined4 *param_1,xmlParserInputBufferPtr param_2,xmlChar *param_3,char *param_4,
             uint param_5)

{
  xmlGenericErrorFunc pxVar1;
  xmlBufferPtr pxVar2;
  xmlGenericErrorFunc *ppxVar3;
  void **ppvVar4;
  undefined8 uVar5;
  xmlParserCtxtPtr pxVar6;
  xmlParserInputBufferPtr in;
  long *plVar7;
  long lVar8;
  xmlDictPtr pxVar9;
  xmlChar *pxVar10;
  xmlCharEncodingHandlerPtr pxVar11;
  undefined4 local_60;
  uint local_5c;
  
  if (param_1 == (undefined4 *)0x0) {
    local_60 = 0xffffffff;
  }
  else {
    local_5c = param_5 | 0x10000;
    *(undefined8 *)(param_1 + 2) = 0;
    param_1[0x2c] = 0;
    param_1[0x51] = local_5c;
    param_1[4] = 0;
    if (((param_2 != (xmlParserInputBufferPtr)0x0) && (*(long *)(param_1 + 0xc) != 0)) &&
       ((param_1[5] & 1) != 0)) {
      _xmlFreeParserInputBuffer(*(xmlParserInputBufferPtr *)(param_1 + 0xc));
      *(undefined8 *)(param_1 + 0xc) = 0;
      param_1[5] = param_1[5] + -1;
    }
    if (param_2 != (xmlParserInputBufferPtr)0x0) {
      *(xmlParserInputBufferPtr *)(param_1 + 0xc) = param_2;
      param_1[5] = param_1[5] | 1;
    }
    if (*(long *)(param_1 + 0x26) == 0) {
      pxVar2 = _xmlBufferCreateSize(100);
      *(xmlBufferPtr *)(param_1 + 0x26) = pxVar2;
    }
    if (*(long *)(param_1 + 0x26) == 0) {
      ppxVar3 = ___xmlGenericError();
      pxVar1 = *ppxVar3;
      ppvVar4 = ___xmlGenericErrorContext();
      (*pxVar1)(*ppvVar4,"xmlTextReaderSetup : malloc failed\n");
      local_60 = 0xffffffff;
    }
    else {
      if (*(long *)(param_1 + 10) == 0) {
        uVar5 = (*(code *)_xmlMalloc)(0x100);
        *(undefined8 *)(param_1 + 10) = uVar5;
      }
      if (*(long *)(param_1 + 10) == 0) {
        ppxVar3 = ___xmlGenericError();
        pxVar1 = *ppxVar3;
        ppvVar4 = ___xmlGenericErrorContext();
        (*pxVar1)(*ppvVar4,"xmlTextReaderSetup : malloc failed\n");
        local_60 = 0xffffffff;
      }
      else {
        _xmlSAXVersion(*(xmlSAXHandler **)(param_1 + 10),2);
        *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(*(long *)(param_1 + 10) + 0x70);
        *(code **)(*(long *)(param_1 + 10) + 0x70) = FUN_100224618;
        *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(*(long *)(param_1 + 10) + 0x78);
        *(code **)(*(long *)(param_1 + 10) + 0x78) = FUN_1002246e7;
        if (*(int *)(*(long *)(param_1 + 10) + 0xd8) == -0x21124151) {
          *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(*(long *)(param_1 + 10) + 0xe8);
          *(code **)(*(long *)(param_1 + 10) + 0xe8) = FUN_100224736;
          *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(*(long *)(param_1 + 10) + 0xf0);
          *(code **)(*(long *)(param_1 + 10) + 0xf0) = FUN_10022484f;
        }
        else {
          *(undefined8 *)(param_1 + 0x12) = 0;
          *(undefined8 *)(param_1 + 0x14) = 0;
        }
        *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(*(long *)(param_1 + 10) + 0x88);
        *(code **)(*(long *)(param_1 + 10) + 0x88) = FUN_1002248ae;
        *(code **)(*(long *)(param_1 + 10) + 0x90) = FUN_1002248ae;
        *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(*(long *)(param_1 + 10) + 200);
        *(code **)(*(long *)(param_1 + 10) + 200) = FUN_100224903;
        *param_1 = 0;
        *(undefined8 *)(param_1 + 0x1c) = 0;
        *(undefined8 *)(param_1 + 0x1e) = 0;
        if (param_2 != (xmlParserInputBufferPtr)0x0) {
          if (*(uint *)(*(long *)(*(long *)(param_1 + 0xc) + 0x20) + 8) < 4) {
            _xmlParserInputBufferRead(param_2,4);
          }
          if (*(long *)(param_1 + 8) == 0) {
            if (*(uint *)(*(long *)(*(long *)(param_1 + 0xc) + 0x20) + 8) < 4) {
              pxVar6 = _xmlCreatePushParserCtxt
                                 (*(xmlSAXHandlerPtr *)(param_1 + 10),(void *)0x0,(char *)0x0,0,
                                  (char *)param_3);
              *(xmlParserCtxtPtr *)(param_1 + 8) = pxVar6;
              param_1[0x1a] = 0;
              param_1[0x1b] = 0;
            }
            else {
              pxVar6 = _xmlCreatePushParserCtxt
                                 (*(xmlSAXHandlerPtr *)(param_1 + 10),(void *)0x0,
                                  (char *)**(undefined8 **)(*(long *)(param_1 + 0xc) + 0x20),4,
                                  (char *)param_3);
              *(xmlParserCtxtPtr *)(param_1 + 8) = pxVar6;
              param_1[0x1a] = 0;
              param_1[0x1b] = 4;
            }
          }
          else {
            _xmlCtxtReset(*(xmlParserCtxtPtr *)(param_1 + 8));
            in = _xmlAllocParserInputBuffer(XML_CHAR_ENCODING_ERROR);
            if (in == (xmlParserInputBufferPtr)0x0) {
              return 0xffffffff;
            }
            plVar7 = (long *)_xmlNewInputStream(*(undefined8 *)(param_1 + 8));
            if (plVar7 == (long *)0x0) {
              _xmlFreeParserInputBuffer(in);
              return 0xffffffff;
            }
            if (param_3 == (xmlChar *)0x0) {
              plVar7[1] = 0;
            }
            else {
              lVar8 = _xmlCanonicPath(param_3);
              plVar7[1] = lVar8;
            }
            *plVar7 = (long)in;
            plVar7[3] = **(long **)(*plVar7 + 0x20);
            plVar7[4] = **(long **)(*plVar7 + 0x20);
            plVar7[5] = **(long **)(*plVar7 + 0x20) +
                        (ulong)*(uint *)(*(long *)(*plVar7 + 0x20) + 8);
            _inputPush(*(undefined8 *)(param_1 + 8),plVar7);
            param_1[0x1b] = 0;
          }
          if (*(long *)(param_1 + 8) == 0) {
            ppxVar3 = ___xmlGenericError();
            pxVar1 = *ppxVar3;
            ppvVar4 = ___xmlGenericErrorContext();
            (*pxVar1)(*ppvVar4,"xmlTextReaderSetup : malloc failed\n");
            return 0xffffffff;
          }
        }
        if (*(long *)(param_1 + 0x28) == 0) {
          if (*(long *)(*(long *)(param_1 + 8) + 0x1c8) == 0) {
            lVar8 = *(long *)(param_1 + 8);
            pxVar9 = _xmlDictCreate();
            *(xmlDictPtr *)(lVar8 + 0x1c8) = pxVar9;
          }
          *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(*(long *)(param_1 + 8) + 0x1c8);
        }
        else if (*(long *)(*(long *)(param_1 + 8) + 0x1c8) == 0) {
          *(undefined8 *)(*(long *)(param_1 + 8) + 0x1c8) = *(undefined8 *)(param_1 + 0x28);
        }
        else if (*(long *)(param_1 + 0x28) != *(long *)(*(long *)(param_1 + 8) + 0x1c8)) {
          _xmlDictFree(*(xmlDictPtr *)(param_1 + 0x28));
          *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(*(long *)(param_1 + 8) + 0x1c8);
        }
        *(undefined4 **)(*(long *)(param_1 + 8) + 0x1a8) = param_1;
        *(undefined4 *)(*(long *)(param_1 + 8) + 0x1b4) = 1;
        *(undefined4 *)(*(long *)(param_1 + 8) + 0x238) = 1;
        *(undefined4 *)(*(long *)(param_1 + 8) + 0x1dc) = 1;
        *(undefined4 *)(*(long *)(param_1 + 8) + 0x2b0) = 5;
        if (*(long *)(param_1 + 0x48) != 0) {
          _xmlXIncludeFreeContext(*(undefined8 *)(param_1 + 0x48));
          *(undefined8 *)(param_1 + 0x48) = 0;
        }
        if ((param_5 & 0x400) == 0) {
          param_1[0x44] = 0;
        }
        else {
          param_1[0x44] = 1;
          pxVar10 = _xmlDictLookup(*(xmlDictPtr *)(param_1 + 0x28),(xmlChar *)"include",-1);
          *(xmlChar **)(param_1 + 0x46) = pxVar10;
          local_5c = local_5c - 0x400;
        }
        param_1[0x4a] = 0;
        if (*(long *)(param_1 + 0x4e) == 0) {
          param_1[0x4b] = 0;
          param_1[0x4c] = 0;
        }
        while (0 < (int)param_1[0x4b]) {
          param_1[0x4b] = param_1[0x4b] + -1;
          if (*(long *)(*(long *)(param_1 + 0x4e) + (long)(int)param_1[0x4b] * 8) != 0) {
            _xmlFreePattern(*(undefined8 *)
                             (*(long *)(param_1 + 0x4e) + (long)(int)param_1[0x4b] * 8));
            *(undefined8 *)(*(long *)(param_1 + 0x4e) + (long)(int)param_1[0x4b] * 8) = 0;
          }
        }
        if ((local_5c >> 4 & 1) != 0) {
          param_1[4] = 1;
        }
        _xmlCtxtUseOptions(*(xmlParserCtxtPtr *)(param_1 + 8),local_5c);
        if ((param_4 != (char *)0x0) &&
           (pxVar11 = _xmlFindCharEncodingHandler(param_4),
           pxVar11 != (xmlCharEncodingHandlerPtr)0x0)) {
          _xmlSwitchToEncoding(*(undefined8 *)(param_1 + 8),pxVar11);
        }
        if (((param_3 != (xmlChar *)0x0) && (*(long *)(*(long *)(param_1 + 8) + 0x38) != 0)) &&
           (*(long *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 8) == 0)) {
          lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x38);
          pxVar10 = _xmlStrdup(param_3);
          *(xmlChar **)(lVar8 + 8) = pxVar10;
        }
        *(undefined8 *)(param_1 + 2) = 0;
        local_60 = 0;
      }
    }
  }
  return local_60;
}

