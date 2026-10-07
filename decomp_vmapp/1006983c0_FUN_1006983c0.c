
int FUN_1006983c0(long *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x118))();
  if (iVar1 < 0) {
    FUN_1008e3970("","dimg",0,"Error fillig information for structured disk");
    (**(code **)(*param_1 + 0xf0))(param_1);
  }
  return iVar1;
}

