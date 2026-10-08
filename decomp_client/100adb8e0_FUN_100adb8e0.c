
void FUN_100adb8e0(long param_1,uint param_2,void *param_3,uint param_4)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  void *pvVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  uVar3 = param_2 >> 0x10 ^ param_2;
  uVar6 = (ulong)((uVar3 >> 8 ^ uVar3) & 0xff);
  plVar2 = *(long **)(param_1 + uVar6 * 8);
  if (plVar2 != (long *)0x0) {
    plVar7 = (long *)(param_1 + uVar6 * 8);
    do {
      plVar5 = plVar2;
      if (*(uint *)(plVar5 + 1) == param_2) {
        if (param_4 == 0) {
          _free((void *)plVar5[0xd]);
          *(undefined8 *)(*plVar7 + 0x68) = 0;
        }
        else {
          lVar1 = (ulong)param_4 * 0x10 + 0xff;
          if ((int)((ulong)lVar1 >> 8) != (int)((ulong)*(uint *)(plVar5 + 0xe) * 0x10 + 0xff >> 8))
          {
            _free((void *)plVar5[0xd]);
            uVar6 = (ulong)((uint)lVar1 & 0xffffff00);
            pvVar4 = _malloc(uVar6);
            *(void **)(*plVar7 + 0x68) = pvVar4;
            plVar5 = (long *)*plVar7;
            if (plVar5[0xd] == 0) {
              FUN_100df99c0("CHRCLIENT","ChrToolClient",0,
                            "Failed to allocate memory for window shape (%d bytes)",uVar6);
              *(undefined4 *)(*plVar7 + 0x70) = 0;
              return;
            }
          }
          _memcpy((void *)plVar5[0xd],param_3,(ulong)param_4 * 0x10);
        }
        lVar1 = *plVar7;
        *(uint *)(lVar1 + 0x70) = param_4;
        *(uint *)(lVar1 + 0x1c) = param_4;
        return;
      }
      plVar2 = (long *)*plVar5;
      plVar7 = plVar5;
    } while ((long *)*plVar5 != (long *)0x0);
  }
  return;
}

