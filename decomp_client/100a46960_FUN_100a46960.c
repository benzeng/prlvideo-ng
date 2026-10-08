
void FUN_100a46960(void)

{
  long lVar1;
  int iVar2;
  
  lVar1 = FUN_100a46880();
  if (lVar1 == 0) {
    return;
  }
  iVar2 = FUN_10018a9d0(lVar1);
  if (iVar2 == 0x30000004) {
    FUN_100193200(lVar1,0xc9);
    return;
  }
  FUN_100192d10(lVar1,0x27f,0,0);
  return;
}

