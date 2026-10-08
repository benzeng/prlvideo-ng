
void * FUN_100adb5d0(long param_1,undefined8 *param_2,void *param_3,uint param_4,undefined8 *param_5
                    ,undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  void *pvVar5;
  ulong uVar6;
  
  pvVar4 = _malloc(0x98);
  if (pvVar4 == (void *)0x0) {
    pvVar4 = (void *)0x0;
    FUN_100df99c0("CHRCLIENT","ChrToolClient",0,"Failed to allocate memory (%ld bytes)",0x98);
  }
  else {
    ___bzero(pvVar4,0x98);
    *(undefined8 *)((long)pvVar4 + 0x30) = param_2[5];
    *(undefined8 *)((long)pvVar4 + 0x28) = param_2[4];
    *(undefined8 *)((long)pvVar4 + 0x20) = param_2[3];
    *(undefined8 *)((long)pvVar4 + 0x18) = param_2[2];
    uVar3 = *param_2;
    *(undefined8 *)((long)pvVar4 + 0x10) = param_2[1];
    *(undefined8 *)((long)pvVar4 + 8) = uVar3;
    *(undefined8 *)((long)pvVar4 + 0x38) = *param_5;
    *(undefined4 *)((long)pvVar4 + 0x4c) = param_6;
    *(undefined4 *)((long)pvVar4 + 0x50) = param_7;
    uVar1 = *(uint *)((long)param_2 + 0x14);
    uVar6 = (ulong)uVar1;
    if (uVar6 != 0) {
      pvVar5 = _malloc((ulong)((int)(uVar6 << 4) + 0xffU & 0xffffff00));
      *(void **)((long)pvVar4 + 0x68) = pvVar5;
      _memcpy(pvVar5,param_2 + 6,uVar6 << 4);
    }
    *(uint *)((long)pvVar4 + 0x1c) = uVar1;
    *(uint *)((long)pvVar4 + 0x70) = uVar1;
    iVar2 = *(int *)(param_2 + 3);
    if (iVar2 != 0) {
      pvVar5 = _malloc((ulong)(uint)(iVar2 * 2));
      *(void **)((long)pvVar4 + 0x78) = pvVar5;
      _memcpy(pvVar5,param_2 + uVar6 * 2 + 6,(ulong)(uint)(iVar2 * 2));
      *(int *)((long)pvVar4 + 0x80) = iVar2;
    }
    if (param_4 != 0) {
      pvVar5 = _malloc((ulong)param_4 * 2);
      *(void **)((long)pvVar4 + 0x88) = pvVar5;
      _memcpy(pvVar5,param_3,(ulong)param_4 * 2);
    }
    *(uint *)((long)pvVar4 + 0x90) = param_4;
    *(undefined1 *)((long)pvVar4 + 0x56) = 1;
    *(int *)(param_1 + 0x818) = *(int *)(param_1 + 0x818) + 1;
  }
  return pvVar4;
}

