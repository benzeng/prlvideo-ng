
bool FUN_100aacb30(long *param_1)

{
  long lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  iVar2 = QString::compare_helper
                    (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),"RSA",0xffffffff,1);
  return iVar2 == 0;
}

