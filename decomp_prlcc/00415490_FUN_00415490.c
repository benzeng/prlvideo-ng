
void FUN_00415490(void)

{
  code *pcVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR_FUN_0061b860;
  pcVar1 = (code *)PTR_FUN_0061b860;
  while (pcVar1 != (code *)0xffffffffffffffff) {
    ppuVar2 = ppuVar2 + -1;
    (*pcVar1)();
    pcVar1 = (code *)*ppuVar2;
  }
  return;
}

