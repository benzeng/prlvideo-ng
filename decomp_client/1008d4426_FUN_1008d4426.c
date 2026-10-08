
void FUN_1008d4426(undefined8 *param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_1008d41bf(param_1,param_2);
    if (*(int *)(param_1 + 0x12) == 0) {
      if (*(long *)(param_2 + 0x10) != 0) {
        _fwrite("name=",1,5,(FILE *)*param_1);
        FUN_1008d26ae(param_1,*(undefined8 *)(param_2 + 0x10));
        _fputc(10,(FILE *)*param_1);
      }
      if (*(long *)(param_2 + 0x68) != 0) {
        _fwrite("version=",1,8,(FILE *)*param_1);
        FUN_1008d26ae(param_1,*(undefined8 *)(param_2 + 0x68));
        _fputc(10,(FILE *)*param_1);
      }
      if (*(long *)(param_2 + 0x70) != 0) {
        _fwrite("encoding=",1,9,(FILE *)*param_1);
        FUN_1008d26ae(param_1,*(undefined8 *)(param_2 + 0x70));
        _fputc(10,(FILE *)*param_1);
      }
      if (*(long *)(param_2 + 0x88) != 0) {
        _fwrite("URL=",1,4,(FILE *)*param_1);
        FUN_1008d26ae(param_1,*(undefined8 *)(param_2 + 0x88));
        _fputc(10,(FILE *)*param_1);
      }
      if (*(int *)(param_2 + 0x4c) != 0) {
        _fwrite("standalone=true\n",1,0x10,(FILE *)*param_1);
      }
    }
    if (*(long *)(param_2 + 0x60) != 0) {
      FUN_1008d3503(param_1,*(undefined8 *)(param_2 + 0x60));
    }
  }
  return;
}

