
void _xmlDebugDumpEntities(FILE *output,xmlDocPtr doc)

{
  FILE *local_a8 [20];
  
  if (output != (FILE *)0x0) {
    FUN_1008d1ad4(local_a8);
    local_a8[0] = output;
    FUN_1008d48ff(local_a8,doc);
    FUN_1008d1b87(local_a8);
  }
  return;
}

