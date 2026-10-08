
undefined4
_xmlReaderNewDoc(long param_1,xmlChar *param_2,undefined8 param_3,undefined8 param_4,
                undefined4 param_5)

{
  int iVar1;
  undefined4 local_40;
  
  if (param_2 == (xmlChar *)0x0) {
    local_40 = 0xffffffff;
  }
  else if (param_1 == 0) {
    local_40 = 0xffffffff;
  }
  else {
    iVar1 = _xmlStrlen(param_2);
    local_40 = _xmlReaderNewMemory(param_1,param_2,iVar1,param_3,param_4,param_5);
  }
  return local_40;
}

