
void _xmlDebugDumpAttr(FILE *output,xmlAttrPtr attr,int depth)

{
  FILE *local_a8 [14];
  int local_38;
  
  if (output != (FILE *)0x0) {
    FUN_10019e1ac(local_a8);
    local_a8[0] = output;
    local_38 = depth;
    FUN_10019fea9(local_a8,attr);
    FUN_10019e25f(local_a8);
  }
  return;
}

