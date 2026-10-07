
void _xmlRegexpPrint(FILE *output,xmlRegexpPtr regexp)

{
  uint local_c;
  
  if (output != (FILE *)0x0) {
    _fwrite(" regexp: ",1,9,output);
    if (regexp == (xmlRegexpPtr)0x0) {
      _fwrite("NULL\n",1,5,output);
    }
    else {
      _fprintf(output,"\'%s\' ",*(undefined8 *)regexp);
      _fputc(10,output);
      _fprintf(output,"%d atoms:\n",(ulong)*(uint *)(regexp + 0x18));
      for (local_c = 0; (int)local_c < *(int *)(regexp + 0x18); local_c = local_c + 1) {
        _fprintf(output," %02d ",(ulong)local_c);
        FUN_1001d96f8(output,*(undefined8 *)(*(long *)(regexp + 0x20) + (long)(int)local_c * 8));
      }
      _fprintf(output,"%d states:",(ulong)*(uint *)(regexp + 8));
      _fputc(10,output);
      for (local_c = 0; (int)local_c < *(int *)(regexp + 8); local_c = local_c + 1) {
        FUN_1001d9a35(output,*(undefined8 *)(*(long *)(regexp + 0x10) + (long)(int)local_c * 8));
      }
      _fprintf(output,"%d counters:\n",(ulong)*(uint *)(regexp + 0x28));
      for (local_c = 0; (int)local_c < *(int *)(regexp + 0x28); local_c = local_c + 1) {
        _fprintf(output," %d: min %d max %d\n",(ulong)local_c,
                 (ulong)*(uint *)(*(long *)(regexp + 0x30) + (long)(int)local_c * 8),
                 (ulong)*(uint *)(*(long *)(regexp + 0x30) + (long)(int)local_c * 8 + 4));
      }
    }
  }
  return;
}

