
bool FUN_100ca5c90(void)

{
  undefined8 uVar1;
  long lVar2;
  bool bVar3;
  int local_c;
  
  uVar1 = FUN_100c97ae0();
  local_c = FUN_100bf7220(uVar1);
  bVar3 = false;
  if (local_c != 0) {
    lVar2 = FUN_100bf7eb0(&local_c,&DAT_101daef30,0xb,4,FUN_100ca64e0);
    bVar3 = lVar2 != 0;
  }
  return bVar3;
}

