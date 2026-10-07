
void FUN_10019ffef(undefined8 *param_1,long param_2)

{
  int iVar1;
  xmlEntityPtr pxVar2;
  
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x12) != 0) {
      return;
    }
    FUN_10019e411(param_1);
    _fwrite("node is NULL\n",1,0xd,(FILE *)*param_1);
    return;
  }
  param_1[0x10] = param_2;
  switch(*(undefined4 *)(param_2 + 8)) {
  default:
    if (*(int *)(param_1 + 0x12) == 0) {
      FUN_10019e411(param_1);
    }
    FUN_10019e54c(param_1,0x1393,"Unknown node type %d\n",*(undefined4 *)(param_2 + 8));
    return;
  case 1:
    if (*(int *)(param_1 + 0x12) == 0) {
      FUN_10019e411(param_1);
      _fwrite("ELEMENT ",1,8,(FILE *)*param_1);
      if ((*(long *)(param_2 + 0x48) != 0) && (*(long *)(*(long *)(param_2 + 0x48) + 0x18) != 0)) {
        FUN_10019ed86(param_1,*(undefined8 *)(*(long *)(param_2 + 0x48) + 0x18));
        _fputc(0x3a,(FILE *)*param_1);
      }
      FUN_10019ed86(param_1,*(undefined8 *)(param_2 + 0x10));
      _fputc(10,(FILE *)*param_1);
    }
    break;
  case 2:
    if (*(int *)(param_1 + 0x12) == 0) {
      FUN_10019e411(param_1);
    }
    _fwrite("Error, ATTRIBUTE found here\n",1,0x1c,(FILE *)*param_1);
    FUN_10019e87a(param_1,param_2);
    return;
  case 3:
    if (*(int *)(param_1 + 0x12) == 0) {
      FUN_10019e411(param_1);
      if (*(char **)(param_2 + 0x10) == "textnoenc") {
        _fwrite("TEXT no enc",1,0xb,(FILE *)*param_1);
      }
      else {
        _fwrite("TEXT",1,4,(FILE *)*param_1);
      }
      if ((*(uint *)((long)param_1 + 0x9c) & 1) == 0) {
        _fputc(10,(FILE *)*param_1);
      }
      else if (*(long *)(param_2 + 0x50) == param_2 + 0x58) {
        _fwrite(" compact\n",1,9,(FILE *)*param_1);
      }
      else {
        iVar1 = _xmlDictOwns((xmlDictPtr)param_1[0x11],*(xmlChar **)(param_2 + 0x50));
        if (iVar1 == 1) {
          _fwrite(" interned\n",1,10,(FILE *)*param_1);
        }
        else {
          _fputc(10,(FILE *)*param_1);
        }
      }
    }
    break;
  case 4:
    if (*(int *)(param_1 + 0x12) == 0) {
      FUN_10019e411(param_1);
      _fwrite("CDATA_SECTION\n",1,0xe,(FILE *)*param_1);
    }
    break;
  case 5:
    if (*(int *)(param_1 + 0x12) == 0) {
      FUN_10019e411(param_1);
      _fprintf((FILE *)*param_1,"ENTITY_REF(%s)\n",*(undefined8 *)(param_2 + 0x10));
    }
    break;
  case 6:
    if (*(int *)(param_1 + 0x12) == 0) {
      FUN_10019e411(param_1);
      _fwrite("ENTITY\n",1,7,(FILE *)*param_1);
    }
    break;
  case 7:
    if (*(int *)(param_1 + 0x12) == 0) {
      FUN_10019e411(param_1);
      _fprintf((FILE *)*param_1,"PI %s\n",*(undefined8 *)(param_2 + 0x10));
    }
    break;
  case 8:
    if (*(int *)(param_1 + 0x12) == 0) {
      FUN_10019e411(param_1);
      _fwrite("COMMENT\n",1,8,(FILE *)*param_1);
    }
    break;
  case 9:
  case 0xd:
    if (*(int *)(param_1 + 0x12) == 0) {
      FUN_10019e411(param_1);
    }
    _fwrite("Error, DOCUMENT found here\n",1,0x1b,(FILE *)*param_1);
    FUN_10019e87a(param_1,param_2);
    return;
  case 10:
    if (*(int *)(param_1 + 0x12) == 0) {
      FUN_10019e411(param_1);
      _fwrite("DOCUMENT_TYPE\n",1,0xe,(FILE *)*param_1);
    }
    break;
  case 0xb:
    if (*(int *)(param_1 + 0x12) == 0) {
      FUN_10019e411(param_1);
      _fwrite("DOCUMENT_FRAG\n",1,0xe,(FILE *)*param_1);
    }
    break;
  case 0xc:
    if (*(int *)(param_1 + 0x12) == 0) {
      FUN_10019e411(param_1);
      _fwrite("NOTATION\n",1,9,(FILE *)*param_1);
    }
    break;
  case 0xe:
    FUN_10019eec7(param_1,param_2);
    return;
  case 0xf:
    FUN_10019f4ad(param_1,param_2);
    return;
  case 0x10:
    FUN_10019f022(param_1,param_2);
    return;
  case 0x11:
    FUN_10019f76d(param_1,param_2);
    return;
  case 0x12:
    FUN_10019fa8a(param_1,param_2);
    return;
  case 0x13:
    if (*(int *)(param_1 + 0x12) != 0) {
      return;
    }
    FUN_10019e411(param_1);
    _fwrite("INCLUDE START\n",1,0xe,(FILE *)*param_1);
    return;
  case 0x14:
    if (*(int *)(param_1 + 0x12) != 0) {
      return;
    }
    FUN_10019e411(param_1);
    _fwrite("INCLUDE END\n",1,0xc,(FILE *)*param_1);
    return;
  }
  if (*(long *)(param_2 + 0x40) == 0) {
    if (*(int *)(param_1 + 0x12) == 0) {
      FUN_10019e411(param_1);
    }
    _fwrite("PBM: doc == NULL !!!\n",1,0x15,(FILE *)*param_1);
  }
  *(int *)(param_1 + 0xe) = *(int *)(param_1 + 0xe) + 1;
  if ((*(int *)(param_2 + 8) == 1) && (*(long *)(param_2 + 0x60) != 0)) {
    FUN_10019fbdb(param_1,*(undefined8 *)(param_2 + 0x60));
  }
  if ((*(int *)(param_2 + 8) == 1) && (*(long *)(param_2 + 0x58) != 0)) {
    FUN_10019ffbb(param_1,*(undefined8 *)(param_2 + 0x58));
  }
  if (*(int *)(param_2 + 8) == 5) {
    pxVar2 = _xmlGetDocEntity(*(xmlDocPtr *)(param_2 + 0x40),*(xmlChar **)(param_2 + 0x10));
    if (pxVar2 != (xmlEntityPtr)0x0) {
      FUN_10019fc0e(param_1,pxVar2);
    }
  }
  else if (((*(int *)(param_2 + 8) != 1) && (*(long *)(param_2 + 0x50) != 0)) &&
          (*(int *)(param_1 + 0x12) == 0)) {
    FUN_10019e411(param_1);
    _fwrite("content=",1,8,(FILE *)*param_1);
    FUN_10019ed86(param_1,*(undefined8 *)(param_2 + 0x50));
    _fputc(10,(FILE *)*param_1);
  }
  *(int *)(param_1 + 0xe) = *(int *)(param_1 + 0xe) + -1;
  FUN_10019e87a(param_1,param_2);
  return;
}

