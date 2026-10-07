
int FUN_1000b1c50(long param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1000920c0(param_1,0,param_2,param_3);
  iVar2 = 0;
  if (iVar1 != 0x1aa) {
    *(byte *)(param_1 + 0x10e8) = (byte)((uint)iVar1 >> 0x1f) ^ 1;
    *(undefined1 *)(param_1 + 0x10e9) = 0;
    iVar2 = iVar1;
  }
  return iVar2;
}

