
int _xmlShellWrite(xmlShellCtxtPtr ctxt,char *filename,xmlNodePtr node,xmlNodePtr node2)

{
  xmlGenericErrorFunc pxVar1;
  int iVar2;
  FILE *f;
  xmlGenericErrorFunc *ppxVar3;
  void **ppvVar4;
  int local_50;
  
  if (node == (xmlNodePtr)0x0) {
    local_50 = -1;
  }
  else if ((filename == (char *)0x0) || (*filename == '\0')) {
    local_50 = -1;
  }
  else {
    if (node->type == XML_DOCUMENT_NODE) {
      iVar2 = _xmlSaveFile(filename,ctxt->doc);
      if (iVar2 < -1) {
        ppxVar3 = ___xmlGenericError();
        pxVar1 = *ppxVar3;
        ppvVar4 = ___xmlGenericErrorContext();
        (*pxVar1)(*ppvVar4,"Failed to write to %s\n",filename);
        return -1;
      }
    }
    else if (node->type == XML_HTML_DOCUMENT_NODE) {
      iVar2 = _htmlSaveFile(filename,ctxt->doc);
      if (iVar2 < 0) {
        ppxVar3 = ___xmlGenericError();
        pxVar1 = *ppxVar3;
        ppvVar4 = ___xmlGenericErrorContext();
        (*pxVar1)(*ppvVar4,"Failed to write to %s\n",filename);
        return -1;
      }
    }
    else {
      f = _fopen(filename,"w");
      if (f == (FILE *)0x0) {
        ppxVar3 = ___xmlGenericError();
        pxVar1 = *ppxVar3;
        ppvVar4 = ___xmlGenericErrorContext();
        (*pxVar1)(*ppvVar4,"Failed to write to %s\n",filename);
        return -1;
      }
      _xmlElemDump(f,ctxt->doc,node);
      _fclose(f);
    }
    local_50 = 0;
  }
  return local_50;
}

