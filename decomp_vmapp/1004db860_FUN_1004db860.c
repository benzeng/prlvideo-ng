
undefined8
FUN_1004db860(long param_1,uint param_2,long param_3,void *param_4,code *param_5,undefined8 param_6,
             uint *param_7)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  void *pvVar5;
  uint local_3c;
  void *local_38;
  
  local_38 = (void *)0x0;
  local_3c = 0;
  cVar2 = (*param_5)(param_6,&local_38,&local_3c);
  if (cVar2 != '\0') {
    pvVar5 = param_4;
    do {
      _memcpy(pvVar5,local_38,(ulong)local_3c);
      pvVar5 = (void *)((long)pvVar5 + (ulong)local_3c);
      cVar2 = (*param_5)(param_6,&local_38,&local_3c);
    } while (cVar2 != '\0');
  }
  iVar1 = *(int *)(*(long *)(param_1 + 0x40) + 4);
  uVar3 = param_2;
  if ((long)iVar1 < (long)((ulong)param_2 + param_3)) {
    uVar3 = iVar1 - (int)param_3;
  }
  QByteArray::replace((int)(param_1 + 0x40),(int)param_3,(char *)(ulong)uVar3,(int)param_4);
  *param_7 = param_2;
  FUN_1004e32f0(*(undefined8 *)(param_1 + 0x20));
  cVar2 = FUN_1004f7910(param_1 + 0x18,param_1 + 0x40);
  uVar4 = 0xf000001c;
  if (cVar2 != '\0') {
    *(undefined1 *)(param_1 + 0x48) = 1;
    uVar4 = 0;
  }
  return uVar4;
}

