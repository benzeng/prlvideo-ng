
void _xmlDebugDumpNodeList(FILE *output,xmlNodePtr node,int depth)

{
  FILE *local_b0;
  FILE *local_a8 [14];
  int local_38;
  
  local_b0 = output;
  if (output == (FILE *)0x0) {
    local_b0 = *(FILE **)PTR____stdoutp_1021e1858;
  }
  FUN_1008d1ad4(local_a8);
  local_a8[0] = local_b0;
  local_38 = depth;
  FUN_1008d418b(local_a8,node);
  FUN_1008d1b87(local_a8);
  return;
}

