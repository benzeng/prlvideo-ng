
void FUN_1004b2340(long param_1)

{
  long lVar1;
  undefined1 uVar2;
  
  lVar1 = DAT_1011c35c8;
  if ((DAT_1011c35c8 != 0) && (*(char *)(param_1 + 0x152) == '\0')) {
    uVar2 = FUN_1000304a0(DAT_1011c35c8,1,FUN_1004b0830,param_1,0x3f);
    *(undefined1 *)(param_1 + 0x152) = uVar2;
    FUN_1004b2ea0(*(undefined8 *)(param_1 + 0xe0),*(int *)(lVar1 + 0x44) != 0);
    return;
  }
  return;
}

