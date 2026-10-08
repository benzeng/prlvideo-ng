
void FUN_100167390(void)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_10015cb20();
  if (lVar2 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get VM instance.");
    return;
  }
  cVar1 = FUN_10018da40(lVar2);
  if (cVar1 != '\0') {
    uVar3 = FUN_10018c2b0(lVar2);
    FUN_100192870(lVar2,uVar3,0);
    return;
  }
  return;
}

