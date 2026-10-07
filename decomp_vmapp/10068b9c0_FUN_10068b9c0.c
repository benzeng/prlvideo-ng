
int FUN_10068b9c0(long *param_1,undefined4 param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0xf) = param_2;
  iVar1 = (**(code **)(*param_1 + 0x20))();
  if (iVar1 < 0) {
    FUN_1008e3970("","dimg",0,"m_Header.m_DiskInUse = 0x%X write failed",(int)param_1[0xf]);
  }
  return iVar1;
}

