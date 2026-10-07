
xmlDeregisterNodeFunc _xmlDeregisterNodeDefault(xmlDeregisterNodeFunc func)

{
  xmlDeregisterNodeFunc pxVar1;
  
  pxVar1 = _xmlDeregisterNodeDefaultValue;
  ___xmlRegisterCallbacks = 1;
  _xmlDeregisterNodeDefaultValue = func;
  return pxVar1;
}

