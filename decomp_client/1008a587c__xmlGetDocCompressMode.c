
int _xmlGetDocCompressMode(xmlDocPtr doc)

{
  int local_14;
  
  if (doc == (xmlDocPtr)0x0) {
    local_14 = -1;
  }
  else {
    local_14 = doc->compression;
  }
  return local_14;
}

