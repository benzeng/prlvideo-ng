
void FUN_10019eec7(undefined8 *param_1,long param_2)

{
  FUN_10019e411(param_1);
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x12) == 0) {
      _fwrite("DTD node is NULL\n",1,0x11,(FILE *)*param_1);
    }
  }
  else if (*(int *)(param_2 + 8) == 0xe) {
    if (*(int *)(param_1 + 0x12) == 0) {
      if (*(long *)(param_2 + 0x10) == 0) {
        _fwrite("DTD",1,3,(FILE *)*param_1);
      }
      else {
        _fprintf((FILE *)*param_1,"DTD(%s)",*(undefined8 *)(param_2 + 0x10));
      }
      if (*(long *)(param_2 + 0x68) != 0) {
        _fprintf((FILE *)*param_1,", PUBLIC %s",*(undefined8 *)(param_2 + 0x68));
      }
      if (*(long *)(param_2 + 0x70) != 0) {
        _fprintf((FILE *)*param_1,", SYSTEM %s",*(undefined8 *)(param_2 + 0x70));
      }
      _fputc(10,(FILE *)*param_1);
    }
    FUN_10019e87a(param_1,param_2);
  }
  else {
    FUN_10019e49b(param_1,0x139e,"Node is not a DTD");
  }
  return;
}

