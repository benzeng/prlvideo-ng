
void _xmlXPathDebugDumpCompExpr(FILE *param_1,uint *param_2,int param_3)

{
  int iVar1;
  char local_78 [108];
  uint local_c;
  
  if ((param_1 != (FILE *)0x0) && (param_2 != (uint *)0x0)) {
    for (local_c = 0; ((int)local_c < param_3 && ((int)local_c < 0x19)); local_c = local_c + 1) {
      iVar1 = local_c * 2 + 1;
      local_78[iVar1] = ' ';
      local_78[(int)(local_c * 2)] = local_78[iVar1];
    }
    iVar1 = local_c * 2 + 1;
    local_78[iVar1] = '\0';
    local_78[(int)(local_c * 2)] = local_78[iVar1];
    _fprintf(param_1,local_78);
    if (param_2 == (uint *)0x0) {
      _fwrite("Compiled Expression is NULL\n",1,0x1c,param_1);
    }
    else {
      _fprintf(param_1,"Compiled Expression : %d elements\n",(ulong)*param_2);
      local_c = param_2[4];
      FUN_1008da033(param_1,param_2,*(long *)(param_2 + 2) + (long)(int)local_c * 0x38,param_3 + 1);
    }
  }
  return;
}

