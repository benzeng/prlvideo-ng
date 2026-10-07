
ulong FUN_100883ff0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = FUN_10087db60(param_1,0x8f,0,param_2);
    uVar2 = 0x7fffffff;
    if ((long)uVar1 < 0x80000000) {
      uVar2 = uVar1 & 0xffffffff;
    }
    return uVar2;
  }
  FUN_100887ce0(0x20,0x7c,0x78,"bss_bio.c",0x33f);
  return 0xfffffffe;
}

