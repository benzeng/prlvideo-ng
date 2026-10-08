
void FUN_1008785ae(long *param_1)

{
  xmlChar *pxVar1;
  
  if (param_1 != (long *)0x0) {
    if (((*param_1 != 0) && (*(int *)(*param_1 + 0xd8) == -0x21124151)) &&
       ((*(long *)(*param_1 + 0xe8) != 0 || (*(long *)(*param_1 + 0xf0) != 0)))) {
      *(undefined4 *)(param_1 + 0x3f) = 1;
    }
    pxVar1 = _xmlDictLookup((xmlDictPtr)param_1[0x39],(xmlChar *)"xml",3);
    param_1[0x3c] = (long)pxVar1;
    pxVar1 = _xmlDictLookup((xmlDictPtr)param_1[0x39],(xmlChar *)"xmlns",5);
    param_1[0x3d] = (long)pxVar1;
    pxVar1 = _xmlDictLookup((xmlDictPtr)param_1[0x39],
                            (xmlChar *)"http://www.w3.org/XML/1998/namespace",0x24);
    param_1[0x3e] = (long)pxVar1;
    if (((param_1[0x3c] == 0) || (param_1[0x3d] == 0)) || (param_1[0x3e] == 0)) {
      _xmlErrMemory(param_1,0);
    }
  }
  return;
}

