
long FUN_100bdd600(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_100bcd160();
  if ((lVar1 == 0) || (lVar2 = 0, *(long *)(lVar1 + 0x28) != 4)) {
    lVar2 = lVar1;
  }
  return lVar2;
}

