
int FUN_100b1b980(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_100b25e80(*(undefined8 *)(param_1 + 0x38),param_1 + 0x4c,0x40);
  if (iVar1 < 0) {
    FUN_100df99c0("","dimg",0,"Save m_Header failed 0x%X",iVar1);
  }
  return iVar1;
}

