
void _xmlXPathRegisterAllFunctions(undefined8 param_1)

{
  _xmlXPathRegisterFunc(param_1,"boolean",_xmlXPathBooleanFunction);
  _xmlXPathRegisterFunc(param_1,"ceiling",_xmlXPathCeilingFunction);
  _xmlXPathRegisterFunc(param_1,"count",_xmlXPathCountFunction);
  _xmlXPathRegisterFunc(param_1,"concat",_xmlXPathConcatFunction);
  _xmlXPathRegisterFunc(param_1,"contains",_xmlXPathContainsFunction);
  _xmlXPathRegisterFunc(param_1,"id",_xmlXPathIdFunction);
  _xmlXPathRegisterFunc(param_1,"false",_xmlXPathFalseFunction);
  _xmlXPathRegisterFunc(param_1,"floor",_xmlXPathFloorFunction);
  _xmlXPathRegisterFunc(param_1,"last",_xmlXPathLastFunction);
  _xmlXPathRegisterFunc(param_1,"lang",_xmlXPathLangFunction);
  _xmlXPathRegisterFunc(param_1,"local-name",_xmlXPathLocalNameFunction);
  _xmlXPathRegisterFunc(param_1,"not",_xmlXPathNotFunction);
  _xmlXPathRegisterFunc(param_1,"name",FUN_1001b0346);
  _xmlXPathRegisterFunc(param_1,"namespace-uri",_xmlXPathNamespaceURIFunction);
  _xmlXPathRegisterFunc(param_1,"normalize-space",_xmlXPathNormalizeFunction);
  _xmlXPathRegisterFunc(param_1,"number",_xmlXPathNumberFunction);
  _xmlXPathRegisterFunc(param_1,"position",_xmlXPathPositionFunction);
  _xmlXPathRegisterFunc(param_1,"round",_xmlXPathRoundFunction);
  _xmlXPathRegisterFunc(param_1,"string",_xmlXPathStringFunction);
  _xmlXPathRegisterFunc(param_1,"string-length",_xmlXPathStringLengthFunction);
  _xmlXPathRegisterFunc(param_1,"starts-with",_xmlXPathStartsWithFunction);
  _xmlXPathRegisterFunc(param_1,"substring",_xmlXPathSubstringFunction);
  _xmlXPathRegisterFunc(param_1,"substring-before",_xmlXPathSubstringBeforeFunction);
  _xmlXPathRegisterFunc(param_1,"substring-after",_xmlXPathSubstringAfterFunction);
  _xmlXPathRegisterFunc(param_1,"sum",_xmlXPathSumFunction);
  _xmlXPathRegisterFunc(param_1,"true",_xmlXPathTrueFunction);
  _xmlXPathRegisterFunc(param_1,"translate",_xmlXPathTranslateFunction);
  _xmlXPathRegisterFuncNS
            (param_1,"escape-uri","http://www.w3.org/2002/08/xquery-functions",FUN_1001be25a);
  return;
}

