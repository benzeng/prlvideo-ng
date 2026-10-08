
ulong FUN_100bda390(int *param_1)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = *param_1;
  uVar2 = DAT_102302fe0;
  if ((((int)DAT_102302fe0 != iVar1) && (uVar2 = DAT_102302fe8, (int)DAT_102302fe8 != iVar1)) &&
     (uVar2 = DAT_102302ff0, (int)DAT_102302ff0 != iVar1)) {
    return 0xffffffff;
  }
  return uVar2 >> 0x20;
}

