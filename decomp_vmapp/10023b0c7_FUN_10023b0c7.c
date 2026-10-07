
xmlDocPtr FUN_10023b0c7(long param_1,xmlDocPtr param_2)

{
  xmlNodePtr pxVar1;
  xmlDocPtr local_30;
  
  pxVar1 = _xmlDocGetRootElement(param_2);
  if (pxVar1 == (xmlNodePtr)0x0) {
    FUN_10022d5a6(param_1,param_2,0x3fe,"xmlRelaxNGParse: %s is empty\n",
                  *(undefined8 *)(param_1 + 0x80),0);
    local_30 = (xmlDocPtr)0x0;
  }
  else {
    FUN_100239ebb(param_1,pxVar1);
    local_30 = param_2;
  }
  return local_30;
}

