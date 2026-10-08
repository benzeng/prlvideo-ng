
void FUN_10091fda7(FILE *param_1,long param_2)

{
  xmlChar *pxVar1;
  
  if (param_2 != 0) {
    pxVar1 = _xmlNodeGetContent(*(xmlNodePtr *)(param_2 + 8));
    if (pxVar1 == (xmlChar *)0x0) {
      _fwrite("  Annot: empty\n",1,0xf,param_1);
    }
    else {
      _fprintf(param_1,"  Annot: %s\n",pxVar1);
      (*(code *)_xmlFree)(pxVar1);
    }
  }
  return;
}

