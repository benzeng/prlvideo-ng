
void FUN_10019fa8a(undefined8 *param_1,long param_2)

{
  FUN_10019e411(param_1);
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x12) == 0) {
      _fwrite("namespace node is NULL\n",1,0x17,(FILE *)*param_1);
    }
  }
  else if (*(int *)(param_2 + 8) == 0x12) {
    if (*(long *)(param_2 + 0x10) == 0) {
      if (*(long *)(param_2 + 0x18) == 0) {
        FUN_10019e49b(param_1,0x13a4,"Incomplete default namespace href=NULL\n");
      }
      else {
        FUN_10019e607(param_1,0x13a4,"Incomplete namespace %s href=NULL\n",
                      *(undefined8 *)(param_2 + 0x18));
      }
    }
    else if (*(int *)(param_1 + 0x12) == 0) {
      if (*(long *)(param_2 + 0x18) == 0) {
        _fwrite("default namespace href=",1,0x17,(FILE *)*param_1);
      }
      else {
        _fprintf((FILE *)*param_1,"namespace %s href=",*(undefined8 *)(param_2 + 0x18));
      }
      FUN_10019ed86(param_1,*(undefined8 *)(param_2 + 0x10));
      _fputc(10,(FILE *)*param_1);
    }
  }
  else {
    FUN_10019e49b(param_1,0x13a3,"Node is not a namespace declaration");
  }
  return;
}

