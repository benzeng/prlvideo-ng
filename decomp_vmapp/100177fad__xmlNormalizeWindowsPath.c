
xmlChar * _xmlNormalizeWindowsPath(xmlChar *path)

{
  xmlChar *pxVar1;
  
  pxVar1 = (xmlChar *)_xmlCanonicPath(path);
  return pxVar1;
}

