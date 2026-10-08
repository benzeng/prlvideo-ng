
void FUN_10096ef79(FILE *param_1,undefined4 *param_2)

{
  xmlGenericErrorFunc pxVar1;
  xmlGenericErrorFunc *ppxVar2;
  void **ppvVar3;
  
  if (param_2 != (undefined4 *)0x0) {
    switch(*param_2) {
    case 0:
      _fwrite("<empty/>\n",1,9,param_1);
      break;
    case 1:
      _fwrite("<notAllowed/>\n",1,0xe,param_1);
      break;
    case 2:
    case 6:
    case 0x14:
      ppxVar2 = ___xmlGenericError();
      pxVar1 = *ppxVar2;
      ppvVar3 = ___xmlGenericErrorContext();
      (*pxVar1)(*ppvVar3,"Unimplemented block at %s:%d\n","relaxng.c",0x1de1);
      break;
    case 3:
      _fwrite("<text/>\n",1,8,param_1);
      break;
    case 4:
      _fwrite("<element>\n",1,10,param_1);
      if (*(long *)(param_2 + 4) != 0) {
        _fwrite("<name",1,5,param_1);
        if (*(long *)(param_2 + 6) != 0) {
          _fprintf(param_1," ns=\"%s\"",*(undefined8 *)(param_2 + 6));
        }
        _fprintf(param_1,">%s</name>\n",*(undefined8 *)(param_2 + 4));
      }
      FUN_10096ef45(param_1,*(undefined8 *)(param_2 + 0x12));
      FUN_10096ef45(param_1,*(undefined8 *)(param_2 + 0xc));
      _fwrite("</element>\n",1,0xb,param_1);
      break;
    case 5:
    case 7:
      ppxVar2 = ___xmlGenericError();
      pxVar1 = *ppxVar2;
      ppvVar3 = ___xmlGenericErrorContext();
      (*pxVar1)(*ppvVar3,"Unimplemented block at %s:%d\n","relaxng.c",0x1ddd);
      break;
    case 8:
      _fwrite("<list>\n",1,7,param_1);
      FUN_10096ef45(param_1,*(undefined8 *)(param_2 + 0xc));
      _fwrite("</list>\n",1,8,param_1);
      break;
    case 9:
      _fwrite("<attribute>\n",1,0xc,param_1);
      FUN_10096ef45(param_1,*(undefined8 *)(param_2 + 0xc));
      _fwrite("</attribute>\n",1,0xd,param_1);
      break;
    case 10:
      _fwrite("<define",1,7,param_1);
      if (*(long *)(param_2 + 4) != 0) {
        _fprintf(param_1," name=\"%s\"",*(undefined8 *)(param_2 + 4));
      }
      _fwrite(">\n",1,2,param_1);
      FUN_10096ef45(param_1,*(undefined8 *)(param_2 + 0xc));
      _fwrite("</define>\n",1,10,param_1);
      break;
    case 0xb:
      _fwrite("<ref",1,4,param_1);
      if (*(long *)(param_2 + 4) != 0) {
        _fprintf(param_1," name=\"%s\"",*(undefined8 *)(param_2 + 4));
      }
      _fwrite(">\n",1,2,param_1);
      FUN_10096ef45(param_1,*(undefined8 *)(param_2 + 0xc));
      _fwrite("</ref>\n",1,7,param_1);
      break;
    case 0xc:
      _fwrite("<externalRef>",1,0xd,param_1);
      FUN_10096ef45(param_1,*(undefined8 *)(param_2 + 0xc));
      _fwrite("</externalRef>\n",1,0xf,param_1);
      break;
    case 0xd:
      _fwrite("<parentRef",1,10,param_1);
      if (*(long *)(param_2 + 4) != 0) {
        _fprintf(param_1," name=\"%s\"",*(undefined8 *)(param_2 + 4));
      }
      _fwrite(">\n",1,2,param_1);
      FUN_10096ef45(param_1,*(undefined8 *)(param_2 + 0xc));
      _fwrite("</parentRef>\n",1,0xd,param_1);
      break;
    case 0xe:
      _fwrite("<optional>\n",1,0xb,param_1);
      FUN_10096ef45(param_1,*(undefined8 *)(param_2 + 0xc));
      _fwrite("</optional>\n",1,0xc,param_1);
      break;
    case 0xf:
      _fwrite("<zeroOrMore>\n",1,0xd,param_1);
      FUN_10096ef45(param_1,*(undefined8 *)(param_2 + 0xc));
      _fwrite("</zeroOrMore>\n",1,0xe,param_1);
      break;
    case 0x10:
      _fwrite("<oneOrMore>\n",1,0xc,param_1);
      FUN_10096ef45(param_1,*(undefined8 *)(param_2 + 0xc));
      _fwrite("</oneOrMore>\n",1,0xd,param_1);
      break;
    case 0x11:
      _fwrite("<choice>\n",1,9,param_1);
      FUN_10096ef45(param_1,*(undefined8 *)(param_2 + 0xc));
      _fwrite("</choice>\n",1,10,param_1);
      break;
    case 0x12:
      _fwrite("<group>\n",1,8,param_1);
      FUN_10096ef45(param_1,*(undefined8 *)(param_2 + 0xc));
      _fwrite("</group>\n",1,9,param_1);
      break;
    case 0x13:
      _fwrite("<interleave>\n",1,0xd,param_1);
      FUN_10096ef45(param_1,*(undefined8 *)(param_2 + 0xc));
      _fwrite("</interleave>\n",1,0xe,param_1);
      break;
    case 0xffffffff:
      FUN_10096ef45(param_1,*(undefined8 *)(param_2 + 0xc));
    }
  }
  return;
}

