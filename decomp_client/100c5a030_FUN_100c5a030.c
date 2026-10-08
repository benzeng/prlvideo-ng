
ulong FUN_100c5a030(long param_1,char *param_2)

{
  size_t sVar1;
  size_t sVar2;
  ulong uVar3;
  
  sVar1 = _strlen(param_2);
  uVar3 = 0;
  if ((param_2 != (char *)0x0) && (*(int *)(param_1 + 0x18) != 0)) {
    sVar2 = _fwrite(param_2,(long)(int)sVar1,1,*(FILE **)(param_1 + 0x30));
    uVar3 = sVar1 & 0xffffffff;
    if ((int)sVar2 == 0) {
      uVar3 = sVar2 & 0xffffffff;
    }
  }
  return uVar3;
}

