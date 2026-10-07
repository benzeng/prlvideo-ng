
undefined4 FUN_1001ac7cb(int *param_1,xmlChar *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  xmlChar *str2;
  int local_24;
  
  if ((((param_2 != (xmlChar *)0x0) && (param_1 != (int *)0x0)) &&
      ((*param_1 == 1 || (*param_1 == 9)))) &&
     ((piVar1 = *(int **)(param_1 + 2), piVar1 != (int *)0x0 && (0 < *piVar1)))) {
    iVar2 = FUN_1001ac068(param_2);
    for (local_24 = 0; local_24 < *piVar1; local_24 = local_24 + 1) {
      iVar3 = FUN_1001abce7(*(undefined8 *)(*(long *)(piVar1 + 2) + (long)local_24 * 8));
      if (iVar3 == iVar2) {
        str2 = _xmlNodeGetContent(*(xmlNodePtr *)(*(long *)(piVar1 + 2) + (long)local_24 * 8));
        if ((str2 == (xmlChar *)0x0) || (iVar3 = _xmlStrEqual(param_2,str2), iVar3 == 0)) {
          if ((str2 == (xmlChar *)0x0) && (iVar3 = _xmlStrEqual(param_2,(xmlChar *)""), iVar3 != 0))
          {
            if (param_3 == 0) {
              return 1;
            }
          }
          else {
            if (param_3 != 0) {
              if (str2 != (xmlChar *)0x0) {
                (*(code *)_xmlFree)(str2);
              }
              return 1;
            }
            if (str2 != (xmlChar *)0x0) {
              (*(code *)_xmlFree)(str2);
            }
          }
        }
        else {
          (*(code *)_xmlFree)(str2);
          if (param_3 == 0) {
            return 1;
          }
        }
      }
      else if (param_3 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

