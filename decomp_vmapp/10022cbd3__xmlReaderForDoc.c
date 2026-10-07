
undefined8
_xmlReaderForDoc(xmlChar *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 local_40;
  
  if (param_1 == (xmlChar *)0x0) {
    local_40 = 0;
  }
  else {
    iVar1 = _xmlStrlen(param_1);
    local_40 = _xmlReaderForMemory(param_1,iVar1,param_2,param_3,param_4);
  }
  return local_40;
}

