
int _xmlExpCtxtNbNodes(xmlExpCtxtPtr ctxt)

{
  int local_14;
  
  if (ctxt == (xmlExpCtxtPtr)0x0) {
    local_14 = -1;
  }
  else {
    local_14 = *(int *)(ctxt + 0x18);
  }
  return local_14;
}

