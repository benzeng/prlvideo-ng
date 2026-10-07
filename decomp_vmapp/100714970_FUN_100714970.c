
ulong FUN_100714970(undefined8 param_1,undefined4 param_2,uint param_3,void *param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_3 < 0x401) {
    puVar2 = _malloc((ulong)param_3 + 9);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = param_2;
      puVar2[1] = param_3;
      _memcpy(puVar2 + 2,param_4,(ulong)param_3);
      uVar1 = FUN_100741c70(param_1,puVar2);
      _free(puVar2);
      return (ulong)uVar1;
    }
    uVar4 = 0xfffffffe;
  }
  else {
    uVar4 = 0xfffffffd;
  }
  uVar3 = FUN_10071e690(uVar4,0);
  return uVar3;
}

