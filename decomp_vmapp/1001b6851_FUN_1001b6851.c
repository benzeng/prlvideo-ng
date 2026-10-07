
undefined1 FUN_1001b6851(xmlChar *param_1)

{
  int iVar1;
  undefined1 uVar2;
  
  uVar2 = 0;
  switch(*param_1) {
  case 'a':
    iVar1 = _xmlStrEqual(param_1,(xmlChar *)"ancestor");
    uVar2 = iVar1 != 0;
    iVar1 = _xmlStrEqual(param_1,(xmlChar *)"ancestor-or-self");
    if (iVar1 != 0) {
      uVar2 = 2;
    }
    iVar1 = _xmlStrEqual(param_1,(xmlChar *)"attribute");
    if (iVar1 != 0) {
      uVar2 = 3;
    }
    break;
  case 'c':
    iVar1 = _xmlStrEqual(param_1,(xmlChar *)"child");
    if (iVar1 != 0) {
      uVar2 = 4;
    }
    break;
  case 'd':
    iVar1 = _xmlStrEqual(param_1,(xmlChar *)"descendant");
    if (iVar1 != 0) {
      uVar2 = 5;
    }
    iVar1 = _xmlStrEqual(param_1,(xmlChar *)"descendant-or-self");
    if (iVar1 != 0) {
      uVar2 = 6;
    }
    break;
  case 'f':
    iVar1 = _xmlStrEqual(param_1,(xmlChar *)"following");
    if (iVar1 != 0) {
      uVar2 = 7;
    }
    iVar1 = _xmlStrEqual(param_1,(xmlChar *)"following-sibling");
    if (iVar1 != 0) {
      uVar2 = 8;
    }
    break;
  case 'n':
    iVar1 = _xmlStrEqual(param_1,(xmlChar *)"namespace");
    if (iVar1 != 0) {
      uVar2 = 9;
    }
    break;
  case 'p':
    iVar1 = _xmlStrEqual(param_1,(xmlChar *)"parent");
    if (iVar1 != 0) {
      uVar2 = 10;
    }
    iVar1 = _xmlStrEqual(param_1,(xmlChar *)"preceding");
    if (iVar1 != 0) {
      uVar2 = 0xb;
    }
    iVar1 = _xmlStrEqual(param_1,(xmlChar *)"preceding-sibling");
    if (iVar1 != 0) {
      uVar2 = 0xc;
    }
    break;
  case 's':
    iVar1 = _xmlStrEqual(param_1,(xmlChar *)"self");
    if (iVar1 != 0) {
      uVar2 = 0xd;
    }
  }
  return uVar2;
}

