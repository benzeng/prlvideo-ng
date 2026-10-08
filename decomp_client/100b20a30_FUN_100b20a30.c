
int FUN_100b20a30(long *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x118))();
  if (iVar1 < 0) {
    FUN_100df99c0("","dimg",0,"Error fillig information for structured disk");
    (**(code **)(*param_1 + 0xf0))(param_1);
  }
  return iVar1;
}

