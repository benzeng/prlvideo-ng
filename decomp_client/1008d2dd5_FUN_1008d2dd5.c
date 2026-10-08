
void FUN_1008d2dd5(undefined8 *param_1,long param_2)

{
  char local_1398 [5000];
  undefined1 local_10;
  
  FUN_1008d1d39(param_1);
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x12) == 0) {
      _fwrite("Element declaration is NULL\n",1,0x1c,(FILE *)*param_1);
    }
  }
  else if (*(int *)(param_2 + 8) == 0xf) {
    if (*(long *)(param_2 + 0x10) == 0) {
      FUN_1008d1dc3(param_1,0x1397,"Element declaration has no name");
    }
    else if (*(int *)(param_1 + 0x12) == 0) {
      _fwrite("ELEMDECL(",1,9,(FILE *)*param_1);
      FUN_1008d26ae(param_1,*(undefined8 *)(param_2 + 0x10));
      _fputc(0x29,(FILE *)*param_1);
    }
    if (*(int *)(param_1 + 0x12) == 0) {
      switch(*(undefined4 *)(param_2 + 0x48)) {
      case 0:
        _fwrite(", UNDEFINED",1,0xb,(FILE *)*param_1);
        break;
      case 1:
        _fwrite(", EMPTY",1,7,(FILE *)*param_1);
        break;
      case 2:
        _fwrite(", ANY",1,5,(FILE *)*param_1);
        break;
      case 3:
        _fwrite(", MIXED ",1,8,(FILE *)*param_1);
        break;
      case 4:
        _fwrite(", MIXED ",1,8,(FILE *)*param_1);
      }
      if ((*(int *)(param_2 + 8) != 1) && (*(long *)(param_2 + 0x50) != 0)) {
        local_1398[0] = '\0';
        _xmlSnprintfElementContent(local_1398,5000,*(xmlElementContentPtr *)(param_2 + 0x50),1);
        local_10 = 0;
        _fputs(local_1398,(FILE *)*param_1);
      }
      _fputc(10,(FILE *)*param_1);
    }
    FUN_1008d21a2(param_1,param_2);
  }
  else {
    FUN_1008d1dc3(param_1,0x13a1,"Node is not an element declaration");
  }
  return;
}

