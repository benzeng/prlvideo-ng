
bool FUN_1008ca710(void)

{
  undefined8 uVar1;
  long lVar2;
  bool bVar3;
  int local_c;
  
  uVar1 = FUN_1008bc560();
  local_c = FUN_100821ab0(uVar1);
  bVar3 = false;
  if (local_c != 0) {
    lVar2 = FUN_100822740(&local_c,&DAT_100b5a270,0xb,4,FUN_1008caf60);
    bVar3 = lVar2 != 0;
  }
  return bVar3;
}

