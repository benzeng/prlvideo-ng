
undefined8 FUN_1002e7970(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 7;
  if (*(char *)(param_1 + 300) < '\0') {
    iVar1 = FUN_100410570(param_1 + 0x12f,*(undefined1 *)(param_1 + 0x12e),
                          *(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x128),
                          param_1 + 0x150,0x12,*(undefined8 *)(param_1 + 0x80),
                          *(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0x98),
                          *(undefined2 *)(param_1 + 0x108));
    uVar2 = 5;
    if (-1 < iVar1) {
      *(long *)(param_1 + 0x168) = (long)iVar1;
      uVar2 = 2;
    }
  }
  return uVar2;
}

