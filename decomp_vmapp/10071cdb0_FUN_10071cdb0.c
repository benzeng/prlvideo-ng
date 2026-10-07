
void FUN_10071cdb0(char *param_1,long param_2)

{
  undefined *puVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  
  puVar1 = PTR___DefaultRuneLocale_100ba20c0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    cVar2 = *param_1;
    if ((long)cVar2 < 0) {
      uVar3 = ___maskrune((int)cVar2,0x1000);
      cVar2 = *param_1;
    }
    else {
      uVar3 = *(uint *)(puVar1 + (long)cVar2 * 4 + 0x3c) & 0x1000;
    }
    uVar4 = (uint)cVar2;
    if (uVar3 != 0) {
      uVar4 = ___toupper(uVar4);
    }
    cVar2 = '0';
    if ((uVar4 & 0xff) != 0x4f) {
      cVar2 = (char)uVar4;
    }
    *param_1 = cVar2;
    if ((cVar2 == 'I') || (cVar2 == 'L')) {
      *param_1 = '1';
    }
    param_1 = param_1 + 1;
  }
  return;
}

