
uint FUN_1002f87a0(long param_1,undefined8 *param_2,uint param_3)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  uint uVar4;
  
  QMutex::lock();
  uVar4 = 0xffffffff;
  if (*(int *)(param_1 + 0x38) != 0) goto LAB_1002f88e3;
  uVar4 = 0;
  if (((10 < param_3) && (uVar1 = *(uint *)((long)param_2 + 1), uVar4 = 0, uVar1 != 0)) &&
     (uVar4 = param_3 - 10, uVar1 < param_3 - 10)) {
    uVar4 = uVar1;
  }
  pvVar2 = *(void **)(param_1 + 0x50);
  pvVar3 = (void *)0x0;
  if ((pvVar2 != (void *)0x0) && (pvVar3 = pvVar2, *(uint *)(param_1 + 0x58) < uVar4)) {
    _free(pvVar2);
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    pvVar3 = (void *)0x0;
  }
  if (uVar4 != 0) {
    if (*(uint *)(param_1 + 0x58) < uVar4) {
      pvVar3 = _malloc((ulong)uVar4);
      *(void **)(param_1 + 0x50) = pvVar3;
      if (pvVar3 != (void *)0x0) {
        *(uint *)(param_1 + 0x58) = uVar4;
LAB_1002f884e:
        _memcpy(pvVar3,(void *)((long)param_2 + 10),(ulong)uVar4);
      }
    }
    else if (pvVar3 != (void *)0x0) goto LAB_1002f884e;
  }
  *(undefined8 *)(param_1 + 0x38) = 1;
  *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  if (uVar4 < *(uint *)((long)param_2 + 1)) {
    FUN_1008e3970("","USB",0,"Fixed CCID-header field dwLength from %d to %d",
                  *(uint *)((long)param_2 + 1),uVar4);
    *(uint *)(param_1 + 0x41) = uVar4;
  }
  uVar4 = param_3;
  if (*(long *)(param_1 + 0x50) == 0) {
    FUN_1008e3970("","USB",0,"Fixed CCID-header field dwLength from %d to %d",
                  *(undefined4 *)((long)param_2 + 1),0);
    *(undefined4 *)(param_1 + 0x41) = 0;
  }
LAB_1002f88e3:
  QMutex::unlock();
  return uVar4;
}

