
ulong FUN_100be3e90(long param_1,void *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(param_1 + 0x80);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = (ulong)*(int *)(lVar1 + 0x394);
    if (uVar2 < param_3) {
      param_3 = uVar2;
    }
    _memcpy(param_2,(void *)(lVar1 + 0x314),param_3);
  }
  return uVar2;
}

