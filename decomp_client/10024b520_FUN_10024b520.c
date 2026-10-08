
bool FUN_10024b520(long *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x110))();
  return iVar1 == param_2 || iVar1 == 0;
}

