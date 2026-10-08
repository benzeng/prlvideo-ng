
bool FUN_100aaaad0(long *param_1,long param_2)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("","IOCommunication",2,"Perfoming credentials setting");
  }
  cVar1 = FUN_100aab120();
  if (cVar1 == '\0') {
    bVar3 = false;
  }
  else {
    cVar1 = FUN_100aab120();
    if (cVar1 == '\0') {
      bVar3 = false;
    }
    else {
      lVar2 = *(long *)(param_2 + 8);
      lVar2 = FUN_100ab5620(*(long *)(lVar2 + 0x10) + lVar2,*(undefined4 *)(lVar2 + 4));
      *param_1 = lVar2;
      bVar3 = lVar2 != 0;
    }
  }
  return bVar3;
}

