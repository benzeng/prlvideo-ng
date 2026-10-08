
int FUN_10058fb00(long param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  int extraout_var;
  int extraout_var_00;
  int extraout_var_01;
  int extraout_var_02;
  int iVar3;
  
  (**(code **)(*param_2 + 0x70))(param_2);
  (**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x10) + 0x40) + 0x48) + 0x70))();
  iVar3 = extraout_var_00 + extraout_var;
  plVar1 = *(long **)(*(long *)(*(long *)(param_1 + 0x10) + 0x40) + 0x40);
  if ((*(byte *)(plVar1[5] + 9) & 0x80) != 0) {
    (**(code **)(*plVar1 + 0x70))();
    iVar3 = extraout_var_01 + iVar3;
  }
  iVar2 = CMappingModel::getSubmitPolicy();
  if (iVar2 == 1) {
    (**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x10) + 0x40) + 0x18) + 0x70))();
    iVar3 = extraout_var_02 + iVar3;
  }
  return iVar3;
}

