
void _xmlRelaxNGDump(FILE *output,xmlRelaxNGPtr schema)

{
  if (output != (FILE *)0x0) {
    if (schema == (xmlRelaxNGPtr)0x0) {
      _fwrite("RelaxNG empty or failed to compile\n",1,0x23,output);
    }
    else {
      _fwrite("RelaxNG: ",1,9,output);
      if (*(long *)(schema + 0x10) == 0) {
        _fwrite("no document\n",1,0xc,output);
      }
      else if (*(long *)(*(long *)(schema + 0x10) + 0x88) == 0) {
        _fputc(10,output);
      }
      else {
        _fprintf(output,"%s\n",*(undefined8 *)(*(long *)(schema + 0x10) + 0x88));
      }
      if (*(long *)(schema + 8) == 0) {
        _fwrite("RelaxNG has no top grammar\n",1,0x1b,output);
      }
      else {
        FUN_10023bcd7(output,*(undefined8 *)(schema + 8),1);
      }
    }
  }
  return;
}

