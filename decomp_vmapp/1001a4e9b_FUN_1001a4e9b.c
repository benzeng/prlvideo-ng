
void FUN_1001a4e9b(long param_1,long param_2)

{
  xmlChar *pxVar1;
  xmlChar local_d8 [208];
  
  if (param_1 == 0) {
    if (param_2 == 0) {
      ___xmlRaiseError(0,0,0,0,0,0xc,2,3,0,0,0,0,0,0,0,"Memory allocation failed\n");
    }
    else {
      ___xmlRaiseError(0,0,0,0,0,0xc,2,3,0,0,param_2,0,0,0,0,"Memory allocation failed : %s\n",
                       param_2);
    }
  }
  else {
    if (param_2 == 0) {
      pxVar1 = _xmlStrdup((xmlChar *)"Memory allocation failed\n");
      *(xmlChar **)(param_1 + 0xf0) = pxVar1;
    }
    else {
      _xmlStrPrintf(local_d8,200,(xmlChar *)"Memory allocation failed : %s\n",param_2);
      pxVar1 = _xmlStrdup(local_d8);
      *(xmlChar **)(param_1 + 0xf0) = pxVar1;
    }
    *(undefined4 *)(param_1 + 0xe8) = 0xc;
    *(undefined4 *)(param_1 + 0xec) = 2;
    if (*(long *)(param_1 + 0xe0) != 0) {
      (**(code **)(param_1 + 0xe0))(*(undefined8 *)(param_1 + 0xd8),param_1 + 0xe8);
    }
  }
  return;
}

