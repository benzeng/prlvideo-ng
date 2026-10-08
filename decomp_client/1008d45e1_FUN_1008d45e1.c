
void FUN_1008d45e1(undefined8 *param_1,long param_2)

{
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x12) == 0) {
      _fwrite("DOCUMENT == NULL !\n",1,0x13,(FILE *)*param_1);
    }
  }
  else {
    FUN_1008d4426(param_1,param_2);
    if (((*(int *)(param_2 + 8) == 9) || (*(int *)(param_2 + 8) == 0xd)) &&
       (*(long *)(param_2 + 0x18) != 0)) {
      *(int *)(param_1 + 0xe) = *(int *)(param_1 + 0xe) + 1;
      FUN_1008d418b(param_1,*(undefined8 *)(param_2 + 0x18));
      *(int *)(param_1 + 0xe) = *(int *)(param_1 + 0xe) + -1;
    }
  }
  return;
}

