
void _xmlRelaxNGDumpTree(FILE *output,xmlRelaxNGPtr schema)

{
  if (output != (FILE *)0x0) {
    if (schema == (xmlRelaxNGPtr)0x0) {
      _fwrite("RelaxNG empty or failed to compile\n",1,0x23,output);
    }
    else if (*(long *)(schema + 0x10) == 0) {
      _fwrite("no document\n",1,0xc,output);
    }
    else {
      _xmlDocDump(output,*(xmlDocPtr *)(schema + 0x10));
    }
  }
  return;
}

