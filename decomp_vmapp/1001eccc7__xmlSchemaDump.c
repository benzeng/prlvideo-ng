
void _xmlSchemaDump(FILE *param_1,long *param_2)

{
  if (param_1 != (FILE *)0x0) {
    if (param_2 == (long *)0x0) {
      _fwrite("Schemas: NULL\n",1,0xe,param_1);
    }
    else {
      _fwrite("Schemas: ",1,9,param_1);
      if (*param_2 == 0) {
        _fwrite("no name, ",1,9,param_1);
      }
      else {
        _fprintf(param_1,"%s, ",*param_2);
      }
      if (param_2[1] == 0) {
        _fwrite("no target namespace",1,0x13,param_1);
      }
      else {
        _fputs((char *)param_2[1],param_1);
      }
      _fputc(10,param_1);
      if (param_2[5] != 0) {
        FUN_1001ec47f(param_1,param_2[5]);
      }
      _xmlHashScan((xmlHashTablePtr)param_2[7],FUN_1001ec868,param_1);
      _xmlHashScanFull((xmlHashTablePtr)param_2[10],FUN_1001ec06c,param_1);
    }
  }
  return;
}

