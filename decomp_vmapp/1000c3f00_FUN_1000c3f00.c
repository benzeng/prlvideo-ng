
bool FUN_1000c3f00(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x10))();
  if (iVar1 == 0) {
    bVar2 = false;
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x18))(param_1,param_2,param_3);
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}

