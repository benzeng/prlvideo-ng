
void FUN_1008da033(FILE *param_1,long param_2,uint *param_3,int param_4)

{
  int iVar1;
  char local_c8 [112];
  int local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  long local_48;
  char *local_40;
  undefined8 local_38;
  long local_30;
  undefined8 local_28;
  uint local_1c;
  long local_18;
  undefined8 local_10;
  
  for (local_58 = 0; (local_58 < param_4 && (local_58 < 0x19)); local_58 = local_58 + 1) {
    iVar1 = local_58 * 2 + 1;
    local_c8[iVar1] = ' ';
    local_c8[local_58 * 2] = local_c8[iVar1];
  }
  iVar1 = local_58 * 2 + 1;
  local_c8[iVar1] = '\0';
  local_c8[local_58 * 2] = local_c8[iVar1];
  _fprintf(param_1,local_c8);
  if (param_3 == (uint *)0x0) {
    _fwrite("Step is NULL\n",1,0xd,param_1);
    return;
  }
  switch(*param_3) {
  case 0:
    _fwrite("END",1,3,param_1);
    break;
  case 1:
    _fwrite("AND",1,3,param_1);
    break;
  case 2:
    _fwrite("OR",1,2,param_1);
    break;
  case 3:
    if (param_3[3] == 0) {
      _fwrite("EQUAL !=",1,8,param_1);
    }
    else {
      _fwrite("EQUAL =",1,7,param_1);
    }
    break;
  case 4:
    if (param_3[3] == 0) {
      _fwrite("CMP >",1,5,param_1);
    }
    else {
      _fwrite("CMP <",1,5,param_1);
    }
    if (param_3[4] == 0) {
      _fputc(0x3d,param_1);
    }
    break;
  case 5:
    if (param_3[3] == 0) {
      _fwrite("PLUS -",1,6,param_1);
    }
    else if (param_3[3] == 1) {
      _fwrite("PLUS +",1,6,param_1);
    }
    else if (param_3[3] == 2) {
      _fwrite("PLUS unary -",1,0xc,param_1);
    }
    else if (param_3[3] == 3) {
      _fwrite("PLUS unary - -",1,0xe,param_1);
    }
    break;
  case 6:
    if (param_3[3] == 0) {
      _fwrite("MULT *",1,6,param_1);
    }
    else if (param_3[3] == 1) {
      _fwrite("MULT div",1,8,param_1);
    }
    else {
      _fwrite("MULT mod",1,8,param_1);
    }
    break;
  case 7:
    _fwrite("UNION",1,5,param_1);
    break;
  case 8:
    _fwrite("ROOT",1,4,param_1);
    break;
  case 9:
    _fwrite("NODE",1,4,param_1);
    break;
  case 10:
    _fwrite("RESET",1,5,param_1);
    break;
  case 0xb:
    local_54 = param_3[3];
    local_50 = param_3[4];
    local_4c = param_3[5];
    local_48 = *(long *)(param_3 + 6);
    local_40 = *(char **)(param_3 + 8);
    _fwrite("COLLECT ",1,8,param_1);
    switch(local_54) {
    case 1:
      _fwrite(" \'ancestors\' ",1,0xd,param_1);
      break;
    case 2:
      _fwrite(" \'ancestors-or-self\' ",1,0x15,param_1);
      break;
    case 3:
      _fwrite(" \'attributes\' ",1,0xe,param_1);
      break;
    case 4:
      _fwrite(" \'child\' ",1,9,param_1);
      break;
    case 5:
      _fwrite(" \'descendant\' ",1,0xe,param_1);
      break;
    case 6:
      _fwrite(" \'descendant-or-self\' ",1,0x16,param_1);
      break;
    case 7:
      _fwrite(" \'following\' ",1,0xd,param_1);
      break;
    case 8:
      _fwrite(" \'following-siblings\' ",1,0x16,param_1);
      break;
    case 9:
      _fwrite(" \'namespace\' ",1,0xd,param_1);
      break;
    case 10:
      _fwrite(" \'parent\' ",1,10,param_1);
      break;
    case 0xb:
      _fwrite(" \'preceding\' ",1,0xd,param_1);
      break;
    case 0xc:
      _fwrite(" \'preceding-sibling\' ",1,0x15,param_1);
      break;
    case 0xd:
      _fwrite(" \'self\' ",1,8,param_1);
    }
    switch(local_50) {
    case 0:
      _fwrite("\'none\' ",1,7,param_1);
      break;
    case 1:
      _fwrite("\'type\' ",1,7,param_1);
      break;
    case 2:
      _fwrite("\'PI\' ",1,5,param_1);
      break;
    case 3:
      _fwrite("\'all\' ",1,6,param_1);
      break;
    case 4:
      _fwrite("\'namespace\' ",1,0xc,param_1);
      break;
    case 5:
      _fwrite("\'name\' ",1,7,param_1);
    }
    if (local_4c == 3) {
      _fwrite("\'text\' ",1,7,param_1);
    }
    else if (local_4c < 4) {
      if (local_4c == 0) {
        _fwrite("\'node\' ",1,7,param_1);
      }
    }
    else if (local_4c == 7) {
      _fwrite("\'PI\' ",1,5,param_1);
    }
    else if (local_4c == 8) {
      _fwrite("\'comment\' ",1,10,param_1);
    }
    if (local_48 != 0) {
      _fprintf(param_1,"%s:",local_48);
    }
    if (local_40 != (char *)0x0) {
      _fputs(local_40,param_1);
    }
    break;
  case 0xc:
    local_38 = *(undefined8 *)(param_3 + 6);
    _fwrite("ELEM ",1,5,param_1);
    _xmlXPathDebugDumpObject(param_1,local_38,0);
    goto LAB_1008da1de;
  case 0xd:
    local_30 = *(long *)(param_3 + 8);
    local_28 = *(undefined8 *)(param_3 + 6);
    if (local_30 == 0) {
      _fprintf(param_1,"VARIABLE %s",local_28);
    }
    else {
      _fprintf(param_1,"VARIABLE %s:%s",local_30,local_28);
    }
    break;
  case 0xe:
    local_1c = param_3[3];
    local_18 = *(long *)(param_3 + 8);
    local_10 = *(undefined8 *)(param_3 + 6);
    if (local_18 == 0) {
      _fprintf(param_1,"FUNCTION %s(%d args)",local_10,(ulong)local_1c);
    }
    else {
      _fprintf(param_1,"FUNCTION %s:%s(%d args)",local_18,local_10,(ulong)local_1c);
    }
    break;
  case 0xf:
    _fwrite("ARG",1,3,param_1);
    break;
  case 0x10:
    _fwrite("PREDICATE",1,9,param_1);
    break;
  case 0x11:
    _fwrite("FILTER",1,6,param_1);
    break;
  case 0x12:
    _fwrite("SORT",1,4,param_1);
    break;
  case 0x13:
    _fwrite("RANGETO",1,7,param_1);
    break;
  default:
    _fprintf(param_1,"UNKNOWN %d\n",(ulong)*param_3);
    return;
  }
  _fputc(10,param_1);
LAB_1008da1de:
  if (-1 < (int)param_3[1]) {
    FUN_1008da033(param_1,param_2,*(long *)(param_2 + 8) + (long)(int)param_3[1] * 0x38,param_4 + 1)
    ;
  }
  if (-1 < (int)param_3[2]) {
    FUN_1008da033(param_1,param_2,*(long *)(param_2 + 8) + (long)(int)param_3[2] * 0x38,param_4 + 1)
    ;
  }
  return;
}

