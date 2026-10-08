
htmlDocPtr _htmlNewDoc(xmlChar *URI,xmlChar *ExternalID)

{
  htmlDocPtr local_20;
  
  if ((URI == (xmlChar *)0x0) && (ExternalID == (xmlChar *)0x0)) {
    local_20 = _htmlNewDocNoDtD((xmlChar *)"http://www.w3.org/TR/REC-html40/loose.dtd",
                                (xmlChar *)"-//W3C//DTD HTML 4.0 Transitional//EN");
  }
  else {
    local_20 = _htmlNewDocNoDtD(URI,ExternalID);
  }
  return local_20;
}

