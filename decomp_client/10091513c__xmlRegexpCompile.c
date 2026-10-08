
xmlRegexpPtr _xmlRegexpCompile(xmlChar *regexp)

{
  long lVar1;
  undefined8 uVar2;
  xmlRegexpPtr local_28;
  
  lVar1 = FUN_10090c1c9(regexp);
  if (lVar1 == 0) {
    local_28 = (xmlRegexpPtr)0x0;
  }
  else {
    *(undefined8 *)(lVar1 + 0x20) = 0;
    uVar2 = FUN_10090c4db(lVar1);
    *(undefined8 *)(lVar1 + 0x28) = uVar2;
    *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(lVar1 + 0x28);
    FUN_10090dd21(lVar1,*(undefined8 *)(lVar1 + 0x18));
    FUN_100914e4e(lVar1,1);
    if (**(char **)(lVar1 + 8) != '\0') {
      *(undefined4 *)(lVar1 + 0x10) = 0x5aa;
      FUN_10090b6dd(lVar1,"xmlFAParseRegExp: extra characters");
    }
    *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(lVar1 + 0x28);
    **(undefined4 **)(lVar1 + 0x18) = 1;
    **(undefined4 **)(lVar1 + 0x20) = 2;
    FUN_10090eadd(lVar1);
    if (*(int *)(lVar1 + 0x10) == 0) {
      local_28 = (xmlRegexpPtr)FUN_10090b7be(lVar1);
      FUN_10090c5c1(lVar1);
    }
    else {
      FUN_10090c5c1(lVar1);
      local_28 = (xmlRegexpPtr)0x0;
    }
  }
  return local_28;
}

