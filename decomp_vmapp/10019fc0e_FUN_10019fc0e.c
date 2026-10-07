
void FUN_10019fc0e(undefined8 *param_1,long param_2)

{
  FUN_10019e411(param_1);
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x12) == 0) {
      _fwrite("Entity is NULL\n",1,0xf,(FILE *)*param_1);
    }
  }
  else if (*(int *)(param_1 + 0x12) == 0) {
    switch(*(undefined4 *)(param_2 + 0x5c)) {
    default:
      _fprintf((FILE *)*param_1,"ENTITY_%d ! ",(ulong)*(uint *)(param_2 + 0x5c));
      break;
    case 1:
      _fwrite("INTERNAL_GENERAL_ENTITY ",1,0x18,(FILE *)*param_1);
      break;
    case 2:
      _fwrite("EXTERNAL_GENERAL_PARSED_ENTITY ",1,0x1f,(FILE *)*param_1);
      break;
    case 3:
      _fwrite("EXTERNAL_GENERAL_UNPARSED_ENTITY ",1,0x21,(FILE *)*param_1);
      break;
    case 4:
      _fwrite("INTERNAL_PARAMETER_ENTITY ",1,0x1a,(FILE *)*param_1);
      break;
    case 5:
      _fwrite("EXTERNAL_PARAMETER_ENTITY ",1,0x1a,(FILE *)*param_1);
    }
    _fprintf((FILE *)*param_1,"%s\n",*(undefined8 *)(param_2 + 0x10));
    if (*(long *)(param_2 + 0x60) != 0) {
      FUN_10019e411(param_1);
      _fprintf((FILE *)*param_1,"ExternalID=%s\n",*(undefined8 *)(param_2 + 0x60));
    }
    if (*(long *)(param_2 + 0x68) != 0) {
      FUN_10019e411(param_1);
      _fprintf((FILE *)*param_1,"SystemID=%s\n",*(undefined8 *)(param_2 + 0x68));
    }
    if (*(long *)(param_2 + 0x78) != 0) {
      FUN_10019e411(param_1);
      _fprintf((FILE *)*param_1,"URI=%s\n",*(undefined8 *)(param_2 + 0x78));
    }
    if (*(long *)(param_2 + 0x50) != 0) {
      FUN_10019e411(param_1);
      _fwrite("content=",1,8,(FILE *)*param_1);
      FUN_10019ed86(param_1,*(undefined8 *)(param_2 + 0x50));
      _fputc(10,(FILE *)*param_1);
    }
  }
  return;
}

