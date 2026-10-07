
void _xmlDebugDumpDocumentHead(FILE *output,xmlDocPtr doc)

{
  FILE *local_b0;
  FILE *local_a8 [19];
  uint local_c;
  
  local_b0 = output;
  if (output == (FILE *)0x0) {
    local_b0 = *(FILE **)PTR____stdoutp_100ba2338;
  }
  FUN_10019e1ac(local_a8);
  local_c = local_c | 1;
  local_a8[0] = local_b0;
  FUN_1001a0afe(local_a8,doc);
  FUN_10019e25f(local_a8);
  return;
}

