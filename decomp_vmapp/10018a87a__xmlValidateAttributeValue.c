
int _xmlValidateAttributeValue(xmlAttributeType type,xmlChar *value)

{
  int local_1c;
  
  switch(type) {
  default:
    local_1c = 1;
    break;
  case XML_ATTRIBUTE_ID:
  case XML_ATTRIBUTE_IDREF:
  case XML_ATTRIBUTE_ENTITY:
  case XML_ATTRIBUTE_NOTATION:
    local_1c = _xmlValidateNameValue(value);
    break;
  case XML_ATTRIBUTE_IDREFS:
  case XML_ATTRIBUTE_ENTITIES:
    local_1c = _xmlValidateNamesValue(value);
    break;
  case XML_ATTRIBUTE_NMTOKEN:
    local_1c = _xmlValidateNmtokenValue(value);
    break;
  case XML_ATTRIBUTE_NMTOKENS:
  case XML_ATTRIBUTE_ENUMERATION:
    local_1c = _xmlValidateNmtokensValue(value);
  }
  return local_1c;
}

