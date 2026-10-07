
void FUN_1001a0d68(long param_1,undefined8 *param_2)

{
  if (param_1 == 0) {
    if (*(int *)(param_2 + 0x12) == 0) {
      _fwrite("Entity is NULL",1,0xe,(FILE *)*param_2);
    }
  }
  else if (*(int *)(param_2 + 0x12) == 0) {
    _fprintf((FILE *)*param_2,"%s : ",*(undefined8 *)(param_1 + 0x10));
    switch(*(undefined4 *)(param_1 + 0x5c)) {
    default:
      FUN_10019e54c(param_2,0x1394,"Unknown entity type %d\n",*(undefined4 *)(param_1 + 0x5c));
      break;
    case 1:
      _fwrite("INTERNAL GENERAL, ",1,0x12,(FILE *)*param_2);
      break;
    case 2:
      _fwrite("EXTERNAL PARSED, ",1,0x11,(FILE *)*param_2);
      break;
    case 3:
      _fwrite("EXTERNAL UNPARSED, ",1,0x13,(FILE *)*param_2);
      break;
    case 4:
      _fwrite("INTERNAL PARAMETER, ",1,0x14,(FILE *)*param_2);
      break;
    case 5:
      _fwrite("EXTERNAL PARAMETER, ",1,0x14,(FILE *)*param_2);
    }
    if (*(long *)(param_1 + 0x60) != 0) {
      _fprintf((FILE *)*param_2,"ID \"%s\"",*(undefined8 *)(param_1 + 0x60));
    }
    if (*(long *)(param_1 + 0x68) != 0) {
      _fprintf((FILE *)*param_2,"SYSTEM \"%s\"",*(undefined8 *)(param_1 + 0x68));
    }
    if (*(long *)(param_1 + 0x48) != 0) {
      _fprintf((FILE *)*param_2,"\n orig \"%s\"",*(undefined8 *)(param_1 + 0x48));
    }
    if ((*(int *)(param_1 + 8) != 1) && (*(long *)(param_1 + 0x50) != 0)) {
      _fprintf((FILE *)*param_2,"\n content \"%s\"",*(undefined8 *)(param_1 + 0x50));
    }
    _fputc(10,(FILE *)*param_2);
  }
  return;
}

