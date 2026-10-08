
bool FUN_100aac520(long *param_1)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  
  lVar1 = *param_1;
  iVar2 = QString::compare_helper
                    (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),"DH",0xffffffff,1);
  bVar3 = true;
  if (iVar2 != 0) {
    lVar1 = *param_1;
    iVar2 = QString::compare_helper
                      (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),"RSA",0xffffffff,1
                      );
    bVar3 = iVar2 == 0;
  }
  return bVar3;
}

