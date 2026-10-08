
int _xmlIsXHTML(xmlChar *systemID,xmlChar *publicID)

{
  int iVar1;
  
  if ((systemID == (xmlChar *)0x0) && (publicID == (xmlChar *)0x0)) {
    return -1;
  }
  if (publicID != (xmlChar *)0x0) {
    iVar1 = _xmlStrEqual(publicID,(xmlChar *)"-//W3C//DTD XHTML 1.0 Strict//EN");
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = _xmlStrEqual(publicID,(xmlChar *)"-//W3C//DTD XHTML 1.0 Frameset//EN");
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = _xmlStrEqual(publicID,(xmlChar *)"-//W3C//DTD XHTML 1.0 Transitional//EN");
    if (iVar1 != 0) {
      return 1;
    }
  }
  if (systemID != (xmlChar *)0x0) {
    iVar1 = _xmlStrEqual(systemID,(xmlChar *)"http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd");
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = _xmlStrEqual(systemID,(xmlChar *)"http://www.w3.org/TR/xhtml1/DTD/xhtml1-frameset.dtd");
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = _xmlStrEqual(systemID,(xmlChar *)
                                  "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd");
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

