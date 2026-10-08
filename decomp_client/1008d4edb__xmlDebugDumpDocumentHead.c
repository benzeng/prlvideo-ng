
void _xmlDebugDumpDocumentHead(FILE *output,xmlDocPtr doc)

{
  FILE *local_b0;
  FILE *local_a8 [19];
  uint local_c;
  
  local_b0 = output;
  if (output == (FILE *)0x0) {
    local_b0 = *(FILE **)PTR____stdoutp_1021e1858;
  }
  FUN_1008d1ad4(local_a8);
  local_c = local_c | 1;
  local_a8[0] = local_b0;
  FUN_1008d4426(local_a8,doc);
  FUN_1008d1b87(local_a8);
  return;
}

