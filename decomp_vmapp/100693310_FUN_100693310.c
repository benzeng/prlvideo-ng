
int FUN_100693310(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_10069d810(*(undefined8 *)(param_1 + 0x38),param_1 + 0x4c,0x40);
  if (iVar1 < 0) {
    FUN_1008e3970("","dimg",0,"Save m_Header failed 0x%X",iVar1);
  }
  return iVar1;
}

