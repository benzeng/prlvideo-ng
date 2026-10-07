
undefined8
_xmlStringDecodeEntities
          (long param_1,xmlChar *param_2,undefined4 param_3,undefined1 param_4,undefined1 param_5,
          undefined1 param_6)

{
  int iVar1;
  undefined8 local_50;
  
  if ((param_1 == 0) || (param_2 == (xmlChar *)0x0)) {
    local_50 = 0;
  }
  else {
    iVar1 = _xmlStrlen(param_2);
    local_50 = _xmlStringLenDecodeEntities(param_1,param_2,iVar1,param_3,param_4,param_5,param_6);
  }
  return local_50;
}

