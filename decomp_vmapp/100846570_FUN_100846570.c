
ulong FUN_100846570(byte *param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = (ulong)((*param_1 >> 2 & 0xe) + 2);
  uVar1 = 0;
  if (uVar2 <= param_3) {
    _memcpy(param_2,param_1 + 0x10,uVar2);
    uVar1 = uVar2;
  }
  return uVar1;
}

