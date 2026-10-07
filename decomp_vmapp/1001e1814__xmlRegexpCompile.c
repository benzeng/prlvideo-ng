
xmlRegexpPtr _xmlRegexpCompile(xmlChar *regexp)

{
  long lVar1;
  undefined8 uVar2;
  xmlRegexpPtr local_28;
  
  lVar1 = FUN_1001d88a1(regexp);
  if (lVar1 == 0) {
    local_28 = (xmlRegexpPtr)0x0;
  }
  else {
    *(undefined8 *)(lVar1 + 0x20) = 0;
    uVar2 = FUN_1001d8bb3(lVar1);
    *(undefined8 *)(lVar1 + 0x28) = uVar2;
    *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(lVar1 + 0x28);
    FUN_1001da3f9(lVar1,*(undefined8 *)(lVar1 + 0x18));
    FUN_1001e1526(lVar1,1);
    if (**(char **)(lVar1 + 8) != '\0') {
      *(undefined4 *)(lVar1 + 0x10) = 0x5aa;
      FUN_1001d7db5(lVar1,"xmlFAParseRegExp: extra characters");
    }
    *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(lVar1 + 0x28);
    **(undefined4 **)(lVar1 + 0x18) = 1;
    **(undefined4 **)(lVar1 + 0x20) = 2;
    FUN_1001db1b5(lVar1);
    if (*(int *)(lVar1 + 0x10) == 0) {
      local_28 = (xmlRegexpPtr)FUN_1001d7e96(lVar1);
      FUN_1001d8c99(lVar1);
    }
    else {
      FUN_1001d8c99(lVar1);
      local_28 = (xmlRegexpPtr)0x0;
    }
  }
  return local_28;
}

