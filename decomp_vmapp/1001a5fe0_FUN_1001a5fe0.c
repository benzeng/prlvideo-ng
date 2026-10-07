
void FUN_1001a5fe0(FILE *param_1,int *param_2,int param_3)

{
  int iVar1;
  char local_78 [108];
  int local_c;
  
  for (local_c = 0; (local_c < param_3 && (local_c < 0x19)); local_c = local_c + 1) {
    iVar1 = local_c * 2 + 1;
    local_78[iVar1] = ' ';
    local_78[local_c * 2] = local_78[iVar1];
  }
  iVar1 = local_c * 2 + 1;
  local_78[iVar1] = '\0';
  local_78[local_c * 2] = local_78[iVar1];
  if (param_2 == (int *)0x0) {
    _fprintf(param_1,local_78);
    _fwrite("LocationSet is NULL !\n",1,0x16,param_1);
  }
  else {
    for (local_c = 0; local_c < *param_2; local_c = local_c + 1) {
      _fprintf(param_1,local_78);
      _fprintf(param_1,"%d : ",(ulong)(local_c + 1));
      _xmlXPathDebugDumpObject
                (param_1,*(undefined8 *)(*(long *)(param_2 + 2) + (long)local_c * 8),param_3 + 1);
    }
  }
  return;
}

