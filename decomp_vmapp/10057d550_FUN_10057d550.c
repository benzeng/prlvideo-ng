
bool FUN_10057d550(long param_1)

{
  long *plVar1;
  int iVar2;
  int local_10 [2];
  
  local_10[0] = 1;
  plVar1 = *(long **)(*(long *)(param_1 + 8) + 0x10);
  iVar2 = (**(code **)(*plVar1 + 0x188))(plVar1,local_10);
  return local_10[0] == 0 || iVar2 < 0;
}

