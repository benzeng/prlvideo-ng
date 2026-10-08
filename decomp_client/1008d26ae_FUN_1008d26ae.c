
void FUN_1008d26ae(undefined8 *param_1,long param_2)

{
  int local_c;
  
  if (*(int *)(param_1 + 0x12) == 0) {
    if (param_2 == 0) {
      _fwrite("(NULL)",1,6,(FILE *)*param_1);
    }
    else {
      for (local_c = 0; local_c < 0x28; local_c = local_c + 1) {
        if (*(char *)(local_c + param_2) == '\0') {
          return;
        }
        if ((*(char *)(local_c + param_2) == ' ') ||
           (((8 < *(byte *)(local_c + param_2) && (*(byte *)(local_c + param_2) < 0xb)) ||
            (*(char *)(local_c + param_2) == '\r')))) {
          _fputc(0x20,(FILE *)*param_1);
        }
        else if (*(char *)(local_c + param_2) < '\0') {
          _fprintf((FILE *)*param_1,"#%X",(ulong)*(byte *)(local_c + param_2));
        }
        else {
          _fputc((uint)*(byte *)(local_c + param_2),(FILE *)*param_1);
        }
      }
      _fwrite("...",1,3,(FILE *)*param_1);
    }
  }
  return;
}

