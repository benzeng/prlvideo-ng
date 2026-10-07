
int _xmlHasFeature(xmlFeature feature)

{
  int local_10;
  
  switch(feature) {
  default:
    local_10 = 0;
    break;
  case XML_WITH_THREAD:
    local_10 = 1;
    break;
  case XML_WITH_TREE:
    local_10 = 1;
    break;
  case XML_WITH_OUTPUT:
    local_10 = 1;
    break;
  case XML_WITH_PUSH:
    local_10 = 1;
    break;
  case XML_WITH_READER:
    local_10 = 1;
    break;
  case XML_WITH_PATTERN:
    local_10 = 1;
    break;
  case XML_WITH_WRITER:
    local_10 = 1;
    break;
  case XML_WITH_SAX1:
    local_10 = 1;
    break;
  case XML_WITH_FTP:
    local_10 = 1;
    break;
  case XML_WITH_HTTP:
    local_10 = 1;
    break;
  case XML_WITH_VALID:
    local_10 = 1;
    break;
  case XML_WITH_HTML:
    local_10 = 1;
    break;
  case XML_WITH_LEGACY:
    local_10 = 1;
    break;
  case XML_WITH_C14N:
    local_10 = 1;
    break;
  case XML_WITH_CATALOG:
    local_10 = 1;
    break;
  case XML_WITH_XPATH:
    local_10 = 1;
    break;
  case XML_WITH_XPTR:
    local_10 = 1;
    break;
  case XML_WITH_XINCLUDE:
    local_10 = 1;
    break;
  case XML_WITH_ICONV:
    local_10 = 0;
    break;
  case XML_WITH_ISO8859X:
    local_10 = 1;
    break;
  case XML_WITH_UNICODE:
    local_10 = 1;
    break;
  case XML_WITH_REGEXP:
    local_10 = 1;
    break;
  case XML_WITH_AUTOMATA:
    local_10 = 1;
    break;
  case XML_WITH_EXPR:
    local_10 = 1;
    break;
  case XML_WITH_SCHEMAS:
    local_10 = 1;
    break;
  case XML_WITH_SCHEMATRON:
    local_10 = 1;
    break;
  case XML_WITH_MODULES:
    local_10 = 1;
    break;
  case XML_WITH_DEBUG:
    local_10 = 1;
    break;
  case XML_WITH_DEBUG_MEM:
    local_10 = 0;
    break;
  case XML_WITH_DEBUG_RUN:
    local_10 = 0;
  }
  return local_10;
}

