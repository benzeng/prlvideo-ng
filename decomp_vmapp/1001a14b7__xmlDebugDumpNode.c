
void _xmlDebugDumpNode(FILE *output,xmlNodePtr node,int depth)

{
  FILE *local_b0;
  FILE *local_a8 [14];
  int local_38;
  
  local_b0 = output;
  if (output == (FILE *)0x0) {
    local_b0 = *(FILE **)PTR____stdoutp_100ba2338;
  }
  FUN_10019e1ac(local_a8);
  local_a8[0] = local_b0;
  local_38 = depth;
  FUN_1001a07ab(local_a8,node);
  FUN_10019e25f(local_a8);
  return;
}

