
void _xmlDebugDumpEntities(FILE *output,xmlDocPtr doc)

{
  FILE *local_a8 [20];
  
  if (output != (FILE *)0x0) {
    FUN_10019e1ac(local_a8);
    local_a8[0] = output;
    FUN_1001a0fd7(local_a8,doc);
    FUN_10019e25f(local_a8);
  }
  return;
}

