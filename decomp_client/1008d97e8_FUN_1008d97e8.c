
void FUN_1008d97e8(FILE *param_1,int *param_2,int param_3)

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
  if (((param_2 == (int *)0x0) || (*param_2 == 0)) || (**(long **)(param_2 + 2) == 0)) {
    _fprintf(param_1,local_78);
    _fwrite("Value Tree is NULL !\n",1,0x15,param_1);
  }
  else {
    _fprintf(param_1,local_78);
    _fprintf(param_1,"%d",(ulong)(local_c + 1));
    FUN_1008d958e(param_1,*(undefined8 *)(**(long **)(param_2 + 2) + 0x18),param_3 + 1);
  }
  return;
}

