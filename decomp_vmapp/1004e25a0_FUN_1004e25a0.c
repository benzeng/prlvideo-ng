
void FUN_1004e25a0(long param_1,uint param_2)

{
  char cVar1;
  
  cVar1 = QFile::open(param_1 + 0x18,(param_2 & 7) == 2 | param_2);
  if (cVar1 != '\0') {
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | param_2 & 0xf;
  }
  return;
}

