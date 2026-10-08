
xmlRelaxNGPtr _xmlRelaxNGParse(xmlRelaxNGParserCtxtPtr ctxt)

{
  xmlChar *pxVar1;
  xmlDocPtr doc;
  xmlNodePtr pxVar2;
  undefined4 *puVar3;
  xmlRelaxNGPtr local_38;
  xmlDocPtr local_20;
  
  _xmlRelaxNGInitTypes();
  if (ctxt == (xmlRelaxNGParserCtxtPtr)0x0) {
    local_38 = (xmlRelaxNGPtr)0x0;
  }
  else {
    if (*(long *)(ctxt + 0x80) == 0) {
      if (*(long *)(ctxt + 0xa0) == 0) {
        if (*(long *)(ctxt + 0x88) == 0) {
          FUN_100960ece(ctxt,0,0x3fe,"xmlRelaxNGParse: nothing to parse\n",0,0);
          return (xmlRelaxNGPtr)0x0;
        }
        local_20 = *(xmlDocPtr *)(ctxt + 0x88);
      }
      else {
        local_20 = _xmlReadMemory(*(char **)(ctxt + 0xa0),*(int *)(ctxt + 0xa8),(char *)0x0,
                                  (char *)0x0,0);
        if (local_20 == (xmlDocPtr)0x0) {
          FUN_100960ece(ctxt,0,0x429,"xmlRelaxNGParse: could not parse schemas\n",0,0);
          return (xmlRelaxNGPtr)0x0;
        }
        pxVar1 = _xmlStrdup((xmlChar *)"in_memory_buffer");
        local_20->URL = pxVar1;
        pxVar1 = _xmlStrdup((xmlChar *)"in_memory_buffer");
        *(xmlChar **)(ctxt + 0x80) = pxVar1;
      }
    }
    else {
      local_20 = _xmlReadFile(*(char **)(ctxt + 0x80),(char *)0x0,0);
      if (local_20 == (xmlDocPtr)0x0) {
        FUN_100960ece(ctxt,0,0x429,"xmlRelaxNGParse: could not load %s\n",
                      *(undefined8 *)(ctxt + 0x80),0);
        return (xmlRelaxNGPtr)0x0;
      }
    }
    *(xmlDocPtr *)(ctxt + 0x88) = local_20;
    doc = (xmlDocPtr)FUN_10096e9ef(ctxt,local_20);
    if (doc == (xmlDocPtr)0x0) {
      _xmlFreeDoc(*(xmlDocPtr *)(ctxt + 0x88));
      *(undefined8 *)(ctxt + 0x88) = 0;
      local_38 = (xmlRelaxNGPtr)0x0;
    }
    else {
      pxVar2 = _xmlDocGetRootElement(doc);
      if (pxVar2 == (xmlNodePtr)0x0) {
        FUN_100960ece(ctxt,doc,0x3fe,"xmlRelaxNGParse: %s is empty\n",*(undefined8 *)(ctxt + 0x80),0
                     );
        _xmlFreeDoc(doc);
        local_38 = (xmlRelaxNGPtr)0x0;
      }
      else {
        local_38 = (xmlRelaxNGPtr)FUN_10096cb33(ctxt,pxVar2);
        if (local_38 == (xmlRelaxNGPtr)0x0) {
          _xmlFreeDoc(doc);
          local_38 = (xmlRelaxNGPtr)0x0;
        }
        else {
          if (*(long *)(ctxt + 0x68) != 0) {
            _xmlHashScan(*(xmlHashTablePtr *)(ctxt + 0x68),FUN_1009679cf,ctxt);
          }
          if (*(int *)(ctxt + 0x44) < 1) {
            if ((*(long *)(local_38 + 8) != 0) && (*(long *)(*(long *)(local_38 + 8) + 0x18) != 0))
            {
              if ((**(int **)(*(long *)(local_38 + 8) + 0x18) != 0x14) &&
                 (puVar3 = (undefined4 *)FUN_10096154d(ctxt,0), puVar3 != (undefined4 *)0x0)) {
                *puVar3 = 0x14;
                *(undefined8 *)(puVar3 + 0xc) = *(undefined8 *)(*(long *)(local_38 + 8) + 0x18);
                *(undefined4 **)(*(long *)(local_38 + 8) + 0x18) = puVar3;
              }
              FUN_100965b1c(ctxt,*(undefined8 *)(*(long *)(local_38 + 8) + 0x18));
            }
            *(xmlDocPtr *)(local_38 + 0x10) = doc;
            *(undefined8 *)(ctxt + 0x88) = 0;
            *(undefined8 *)(local_38 + 0x30) = *(undefined8 *)(ctxt + 0x70);
            *(undefined8 *)(ctxt + 0x70) = 0;
            *(undefined8 *)(local_38 + 0x38) = *(undefined8 *)(ctxt + 0x78);
            *(undefined8 *)(ctxt + 0x78) = 0;
            *(undefined4 *)(local_38 + 0x40) = *(undefined4 *)(ctxt + 0x90);
            *(undefined8 *)(local_38 + 0x48) = *(undefined8 *)(ctxt + 0x98);
            *(undefined8 *)(ctxt + 0x98) = 0;
            if (*(int *)(ctxt + 0xe0) == 1) {
              *(undefined4 *)(local_38 + 0x18) = 1;
            }
          }
          else {
            _xmlRelaxNGFree(local_38);
            *(undefined8 *)(ctxt + 0x88) = 0;
            _xmlFreeDoc(doc);
            local_38 = (xmlRelaxNGPtr)0x0;
          }
        }
      }
    }
  }
  return local_38;
}

