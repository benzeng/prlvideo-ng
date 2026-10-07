
undefined4 FUN_100207d23(long param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  int *piVar6;
  xmlChar *str2;
  xmlChar *str1;
  long lVar7;
  long local_58;
  long local_50;
  
  local_58 = param_2;
  local_50 = param_1;
  do {
    if (local_50 == 0) {
      return 0;
    }
    uVar1 = _xmlSchemaGetValType(local_50);
    uVar3 = _xmlSchemaGetBuiltInType(uVar1);
    uVar1 = _xmlSchemaGetValType(local_58);
    uVar4 = _xmlSchemaGetBuiltInType(uVar1);
    piVar5 = (int *)FUN_1001fed4c(uVar3);
    piVar6 = (int *)FUN_1001fed4c(uVar4);
    if (piVar5 != piVar6) {
      return 0;
    }
    if ((piVar5[0x28] == 1) || ((*piVar5 == 1 && (piVar5[0x28] == 0x2e)))) {
      str2 = (xmlChar *)_xmlSchemaValueGetAsString(local_58);
      str1 = (xmlChar *)_xmlSchemaValueGetAsString(local_50);
      iVar2 = _xmlStrEqual(str1,str2);
      if (iVar2 == 0) {
        return 0;
      }
    }
    else {
      iVar2 = _xmlSchemaCompareValuesWhtsp(local_50,1,local_58,1);
      if (iVar2 == -2) {
        return 0xffffffff;
      }
      if (iVar2 != 0) {
        return 0;
      }
    }
    local_50 = _xmlSchemaValueGetNext(local_50);
    if (local_50 == 0) {
      lVar7 = _xmlSchemaValueGetNext(local_58);
      if (lVar7 != 0) {
        return 0;
      }
      return 1;
    }
    local_58 = _xmlSchemaValueGetNext(local_58);
  } while (local_58 != 0);
  return 0;
}

