
xmlDtdPtr _xmlParseDTD(xmlChar *ExternalID,xmlChar *SystemID)

{
  xmlDtdPtr pxVar1;
  
  pxVar1 = _xmlSAXParseDTD((xmlSAXHandlerPtr)0x0,ExternalID,SystemID);
  return pxVar1;
}

