
void _xmlSetDocCompressMode(xmlDocPtr doc,int mode)

{
  if (doc != (xmlDocPtr)0x0) {
    if (mode < 0) {
      doc->compression = 0;
    }
    else if (mode < 10) {
      doc->compression = mode;
    }
    else {
      doc->compression = 9;
    }
  }
  return;
}

