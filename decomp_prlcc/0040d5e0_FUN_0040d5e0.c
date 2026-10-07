
void FUN_0040d5e0(int param_1,long param_2)

{
  undefined8 *puVar1;
  _List_node_base *p_Var2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  
  if (1 < param_1) {
    iVar4 = 1;
    do {
      iVar4 = iVar4 + 1;
      p_Var2 = operator_new(0x18);
      puVar1 = (undefined8 *)(param_2 + 8);
      param_2 = param_2 + 8;
      *(undefined8 *)(p_Var2 + 0x10) = *puVar1;
      std::_List_node_base::hook(p_Var2);
    } while (iVar4 != param_1);
  }
  uVar3 = 0;
  do {
    uVar5 = uVar3 & 0xffffffff;
    uVar3 = uVar3 + 1;
    FUN_0040d3e0(uVar5);
  } while (uVar3 != 4);
  DAT_0061da40 = 1;
  iVar4 = pthread_create(&DAT_0061da48,(pthread_attr_t *)0x0,FUN_0040d680,(void *)0x0);
  if (iVar4 == 0) {
    return;
  }
  FUN_0040fffa(&DAT_0041913e,"prlcc",0,
               "Error: Failed to start watchdog thread for subtools processes");
  return;
}

