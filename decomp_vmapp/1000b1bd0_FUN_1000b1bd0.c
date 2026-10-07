
int FUN_1000b1bd0(long param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  lVar3 = FUN_1000a1c30();
  if (((lVar3 != 0) && (cVar1 = FUN_10002c470(lVar3), cVar1 != '\0')) &&
     (cVar1 = FUN_100026bb0(lVar3), cVar1 != '\0')) {
    return 0;
  }
  iVar2 = FUN_1000920c0(param_1,0,param_2,0);
  iVar4 = 0;
  if (iVar2 != 0x1aa) {
    *(byte *)(param_1 + 0x10e8) = (byte)((uint)iVar2 >> 0x1f) ^ 1;
    *(undefined1 *)(param_1 + 0x10e9) = 0;
    iVar4 = iVar2;
  }
  return iVar4;
}

