
undefined8
FUN_1004db1d0(long param_1,undefined4 param_2,undefined8 param_3,void *param_4,code *param_5,
             undefined8 param_6,undefined4 *param_7)

{
  char cVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined4 local_40;
  uint local_3c;
  void *local_38;
  
  cVar1 = FUN_1004e3380(*(undefined8 *)(param_1 + 0x20));
  uVar2 = 0xf0000012;
  if (cVar1 != '\0') {
    local_38 = (void *)0x0;
    local_3c = 0;
    cVar1 = (*param_5)(param_6,&local_38,&local_3c);
    if (cVar1 != '\0') {
      pvVar3 = param_4;
      do {
        _memcpy(pvVar3,local_38,(ulong)local_3c);
        pvVar3 = (void *)((long)pvVar3 + (ulong)local_3c);
        cVar1 = (*param_5)(param_6,&local_38,&local_3c);
      } while (cVar1 != '\0');
    }
    local_40 = 0;
    uVar2 = FUN_1004e3620(*(undefined8 *)(param_1 + 0x20),param_4,param_2,&local_40,param_3);
    *param_7 = local_40;
  }
  return uVar2;
}

