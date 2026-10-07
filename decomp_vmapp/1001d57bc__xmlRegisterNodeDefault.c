
xmlRegisterNodeFunc _xmlRegisterNodeDefault(xmlRegisterNodeFunc func)

{
  xmlRegisterNodeFunc pxVar1;
  
  pxVar1 = _xmlRegisterNodeDefaultValue;
  ___xmlRegisterCallbacks = 1;
  _xmlRegisterNodeDefaultValue = func;
  return pxVar1;
}

