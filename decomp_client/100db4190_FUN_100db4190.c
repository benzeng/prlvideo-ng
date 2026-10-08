
bool FUN_100db4190(long param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  
  *(undefined4 *)(param_1 + 0x30) = param_2;
  lVar1 = FUN_100db41e0(param_3);
  *(long *)(param_1 + 0x50) = lVar1;
  if (lVar1 == 0) {
    FUN_100df99c0("","AbstractFile",0,"Disk adding failed");
  }
  else {
    *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1;
  }
  return lVar1 != 0;
}

