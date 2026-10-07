
int _xmlShellValidate(xmlShellCtxtPtr ctxt,char *dtd,xmlNodePtr node,xmlNodePtr node2)

{
  int local_ac;
  xmlValidCtxt local_88;
  int local_14;
  xmlDtdPtr local_10;
  
  local_14 = -1;
  if ((ctxt == (xmlShellCtxtPtr)0x0) || (ctxt->doc == (xmlDocPtr)0x0)) {
    local_ac = -1;
  }
  else {
    local_88.userData = *(void **)PTR____stderrp_100ba2328;
    local_88.error = (xmlValidityErrorFunc)PTR__fprintf_100ba2370;
    local_88.warning = (xmlValidityWarningFunc)PTR__fprintf_100ba2370;
    if ((dtd == (char *)0x0) || (*dtd == '\0')) {
      local_14 = _xmlValidateDocument(&local_88,ctxt->doc);
    }
    else {
      local_10 = _xmlParseDTD((xmlChar *)0x0,(xmlChar *)dtd);
      if (local_10 != (xmlDtdPtr)0x0) {
        local_14 = _xmlValidateDtd(&local_88,ctxt->doc,local_10);
        _xmlFreeDtd(local_10);
      }
    }
    local_ac = local_14;
  }
  return local_ac;
}

