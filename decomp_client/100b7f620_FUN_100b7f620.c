
undefined4 FUN_100b7f620(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 8) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","Pd4License.cpp",
                  0x214,"GetProtected");
  }
  if (*(int *)(param_1 + 0x80) == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(int *)(param_1 + 0x18) - 9;
    uVar2 = CONCAT31((int3)(uVar1 >> 8),uVar1 < 2);
  }
  return uVar2;
}

