
undefined8 FUN_1008c0560(long param_1,int param_2,undefined8 param_3,ulong param_4)

{
  char *pcVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_2 == 2) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    if (param_4 != 3) {
      uVar2 = FUN_1008c0c20(uVar2,param_3,param_4 & 0xffffffff);
      return uVar2;
    }
    pcVar1 = (char *)FUN_1008b69c0();
    pcVar1 = _getenv(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = (char *)FUN_1008b69a0();
    }
    uVar2 = FUN_1008c0c20(uVar2,pcVar1,1);
    if ((int)uVar2 == 0) {
      FUN_100887ce0(0xb,0x66,0x67,"by_dir.c",0x8a);
      uVar2 = 0;
    }
  }
  return uVar2;
}

