
char FUN_1006ab790(long param_1)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x18) & 3;
  cVar1 = '\0';
  if ((uVar2 != 1) && (cVar1 = '\x01', uVar2 != 2)) {
    cVar1 = (uVar2 == 3) * '\x02';
  }
  return cVar1;
}

