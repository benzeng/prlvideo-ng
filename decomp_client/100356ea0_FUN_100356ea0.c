
bool FUN_100356ea0(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  int local_10;
  int local_c;
  
  if (param_1 == 0) {
    bVar3 = false;
  }
  else {
    uVar2 = FUN_10018c280();
    cVar1 = FUN_10031b620(uVar2,&local_c,&local_10);
    if (cVar1 == '\0') {
      bVar3 = false;
    }
    else {
      bVar3 = true;
      if (local_c != 2) {
        bVar3 = local_10 == 2;
      }
    }
  }
  return bVar3;
}

