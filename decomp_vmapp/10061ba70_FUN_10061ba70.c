
ulong FUN_10061ba70(long param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = 0;
  do {
    if (param_2 == 0) {
      return uVar2 & 0xffffffff;
    }
    uVar1 = 0;
    while (*(char *)(param_1 + uVar1) == (&PTR_s__100bc8480)[uVar2][uVar1]) {
      uVar1 = uVar1 + 1;
      if (param_2 <= uVar1) {
        return uVar2 & 0xffffffff;
      }
    }
    uVar2 = uVar2 + 1;
    if (0xc0 < uVar2) {
      return 0;
    }
  } while( true );
}

