
char * FUN_100ab9ec0(char *param_1,char *param_2)

{
  byte bVar1;
  long lVar2;
  size_t sVar3;
  long lVar4;
  byte local_58 [48];
  long local_28;
  
  lVar2 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_28 = lVar2;
  sVar3 = _strlen(param_2);
  FUN_100bf9750(param_2,sVar3,local_58 + 0x20);
  lVar4 = 0;
  do {
    bVar1 = local_58[lVar4 + 0x20];
    local_58[lVar4 * 2] = "0123456789abcdef"[bVar1 >> 4];
    local_58[lVar4 * 2 + 1] = "0123456789abcdef"[(ulong)bVar1 & 0xf];
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x10);
  std::string::__init(param_1,(ulong)local_58);
  if (lVar2 == local_28) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

