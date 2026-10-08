
double _xmlXPathCastStringToNumber(xmlChar *val)

{
  double dVar1;
  
  dVar1 = (double)_xmlXPathStringEvalNumber(val);
  return dVar1;
}

