
char FUN_10061bb70(void)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  
  uVar1 = _LMGetKbdType();
  iVar3 = _KBGetLayoutType(uVar1);
  cVar2 = '\x01';
  if (iVar3 != 0x49534f20) {
    cVar2 = (iVar3 == 0x4a495320) * '\x02';
  }
  return cVar2;
}

