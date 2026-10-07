
ulong FUN_10087ed50(long param_1,void *param_2,uint param_3)

{
  size_t sVar1;
  ulong uVar2;
  
  if ((param_2 == (void *)0x0) || (*(int *)(param_1 + 0x18) == 0)) {
    uVar2 = 0;
  }
  else {
    sVar1 = _fwrite(param_2,(long)(int)param_3,1,*(FILE **)(param_1 + 0x30));
    uVar2 = sVar1 & 0xffffffff;
    if ((int)sVar1 != 0) {
      uVar2 = (ulong)param_3;
    }
  }
  return uVar2;
}

