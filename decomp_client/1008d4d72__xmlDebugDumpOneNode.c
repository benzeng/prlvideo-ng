
void _xmlDebugDumpOneNode(FILE *output,xmlNodePtr node,int depth)

{
  FILE *local_a8 [14];
  int local_38;
  
  if (output != (FILE *)0x0) {
    FUN_1008d1ad4(local_a8);
    local_a8[0] = output;
    local_38 = depth;
    FUN_1008d3917(local_a8,node);
    FUN_1008d1b87(local_a8);
  }
  return;
}

