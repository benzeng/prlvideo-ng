
void FUN_10019f022(undefined8 *param_1,long param_2)

{
  uint uVar1;
  int local_14;
  long *local_10;
  
  FUN_10019e411(param_1);
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x12) == 0) {
      _fwrite("Attribute declaration is NULL\n",1,0x1e,(FILE *)*param_1);
    }
  }
  else if (*(int *)(param_2 + 8) == 0x10) {
    if (*(long *)(param_2 + 0x10) == 0) {
      FUN_10019e49b(param_1,0x1397,"Node attribute declaration has no name");
    }
    else if (*(int *)(param_1 + 0x12) == 0) {
      _fprintf((FILE *)*param_1,"ATTRDECL(%s)",*(undefined8 *)(param_2 + 0x10));
    }
    if (*(long *)(param_2 + 0x70) == 0) {
      FUN_10019e49b(param_1,0x1398,"Node attribute declaration has no element name");
    }
    else if (*(int *)(param_1 + 0x12) == 0) {
      _fprintf((FILE *)*param_1," for %s",*(undefined8 *)(param_2 + 0x70));
    }
    if (*(int *)(param_1 + 0x12) == 0) {
      switch(*(undefined4 *)(param_2 + 0x50)) {
      case 1:
        _fwrite(" CDATA",1,6,(FILE *)*param_1);
        break;
      case 2:
        _fwrite(" ID",1,3,(FILE *)*param_1);
        break;
      case 3:
        _fwrite(" IDREF",1,6,(FILE *)*param_1);
        break;
      case 4:
        _fwrite(" IDREFS",1,7,(FILE *)*param_1);
        break;
      case 5:
        _fwrite(" ENTITY",1,7,(FILE *)*param_1);
        break;
      case 6:
        _fwrite(" ENTITIES",1,9,(FILE *)*param_1);
        break;
      case 7:
        _fwrite(" NMTOKEN",1,8,(FILE *)*param_1);
        break;
      case 8:
        _fwrite(" NMTOKENS",1,9,(FILE *)*param_1);
        break;
      case 9:
        _fwrite(" ENUMERATION",1,0xc,(FILE *)*param_1);
        break;
      case 10:
        _fwrite(" NOTATION ",1,10,(FILE *)*param_1);
      }
      if (*(long *)(param_2 + 0x60) != 0) {
        local_10 = *(long **)(param_2 + 0x60);
        for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
          if (local_14 == 0) {
            _fprintf((FILE *)*param_1," (%s",local_10[1]);
          }
          else {
            _fprintf((FILE *)*param_1,"|%s",local_10[1]);
          }
          local_10 = (long *)*local_10;
          if (local_10 == (long *)0x0) break;
        }
        if (local_10 == (long *)0x0) {
          _fputc(0x29,(FILE *)*param_1);
        }
        else {
          _fwrite("...)",1,4,(FILE *)*param_1);
        }
      }
      uVar1 = *(uint *)(param_2 + 0x54);
      if (uVar1 == 2) {
        _fwrite(" REQUIRED",1,9,(FILE *)*param_1);
      }
      else if (2 < uVar1) {
        if (uVar1 == 3) {
          _fwrite(" IMPLIED",1,8,(FILE *)*param_1);
        }
        else if (uVar1 == 4) {
          _fwrite(" FIXED",1,6,(FILE *)*param_1);
        }
      }
      if (*(long *)(param_2 + 0x58) != 0) {
        _fputc(0x22,(FILE *)*param_1);
        FUN_10019ed86(param_1,*(undefined8 *)(param_2 + 0x58));
        _fputc(0x22,(FILE *)*param_1);
      }
      _fputc(10,(FILE *)*param_1);
    }
    FUN_10019e87a(param_1,param_2);
  }
  else {
    FUN_10019e49b(param_1,0x13a0,"Node is not an attribute declaration");
  }
  return;
}

