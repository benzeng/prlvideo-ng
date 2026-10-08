
void FUN_1008d37d1(undefined8 *param_1,long param_2)

{
  FUN_1008d1d39(param_1);
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x12) == 0) {
      _fwrite("Attr is NULL",1,0xc,(FILE *)*param_1);
    }
  }
  else {
    if (*(int *)(param_1 + 0x12) == 0) {
      _fwrite("ATTRIBUTE ",1,10,(FILE *)*param_1);
      FUN_1008d26ae(param_1,*(undefined8 *)(param_2 + 0x10));
      _fputc(10,(FILE *)*param_1);
      if (*(long *)(param_2 + 0x18) != 0) {
        *(int *)(param_1 + 0xe) = *(int *)(param_1 + 0xe) + 1;
        FUN_1008d418b(param_1,*(undefined8 *)(param_2 + 0x18));
        *(int *)(param_1 + 0xe) = *(int *)(param_1 + 0xe) + -1;
      }
    }
    if (*(long *)(param_2 + 0x10) == 0) {
      FUN_1008d1dc3(param_1,0x1397,"Attribute has no name");
    }
    FUN_1008d21a2(param_1,param_2);
  }
  return;
}

