
int _xmlRelaxNGValidateDoc(xmlRelaxNGValidCtxtPtr ctxt,xmlDocPtr doc)

{
  int local_2c;
  
  if ((ctxt == (xmlRelaxNGValidCtxtPtr)0x0) || (doc == (xmlDocPtr)0x0)) {
    local_2c = -1;
  }
  else {
    *(xmlDocPtr *)(ctxt + 0x30) = doc;
    local_2c = FUN_100241eab(ctxt,doc);
    if (local_2c == -1) {
      local_2c = 1;
    }
  }
  return local_2c;
}

