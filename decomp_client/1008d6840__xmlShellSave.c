
int _xmlShellSave(xmlShellCtxtPtr ctxt,char *filename,xmlNodePtr node,xmlNodePtr node2)

{
  xmlElementType xVar1;
  xmlGenericErrorFunc pxVar2;
  int iVar3;
  xmlGenericErrorFunc *ppxVar4;
  void **ppvVar5;
  int local_40;
  char *local_28;
  
  if ((ctxt == (xmlShellCtxtPtr)0x0) || (ctxt->doc == (xmlDocPtr)0x0)) {
    local_40 = -1;
  }
  else {
    if ((filename == (char *)0x0) || (local_28 = filename, *filename == '\0')) {
      local_28 = ctxt->filename;
    }
    if (local_28 == (char *)0x0) {
      local_40 = -1;
    }
    else {
      xVar1 = ctxt->doc->type;
      if (xVar1 == XML_DOCUMENT_NODE) {
        iVar3 = _xmlSaveFile(local_28,ctxt->doc);
        if (iVar3 < 0) {
          ppxVar4 = ___xmlGenericError();
          pxVar2 = *ppxVar4;
          ppvVar5 = ___xmlGenericErrorContext();
          (*pxVar2)(*ppvVar5,"Failed to save to %s\n",local_28);
        }
      }
      else {
        if (xVar1 != XML_HTML_DOCUMENT_NODE) {
          ppxVar4 = ___xmlGenericError();
          pxVar2 = *ppxVar4;
          ppvVar5 = ___xmlGenericErrorContext();
          (*pxVar2)(*ppvVar5,"To save to subparts of a document use the \'write\' command\n");
          return -1;
        }
        iVar3 = _htmlSaveFile(local_28,ctxt->doc);
        if (iVar3 < 0) {
          ppxVar4 = ___xmlGenericError();
          pxVar2 = *ppxVar4;
          ppvVar5 = ___xmlGenericErrorContext();
          (*pxVar2)(*ppvVar5,"Failed to save to %s\n",local_28);
        }
      }
      local_40 = 0;
    }
  }
  return local_40;
}

