
void FUN_100adba00(long param_1,uint param_2,void *param_3,uint param_4)

{
  size_t sVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  void *pvVar5;
  ulong uVar6;
  long *plVar7;
  
  uVar3 = param_2 >> 0x10 ^ param_2;
  uVar6 = (ulong)((uVar3 >> 8 ^ uVar3) & 0xff);
  plVar2 = *(long **)(param_1 + uVar6 * 8);
  if (plVar2 != (long *)0x0) {
    plVar7 = (long *)(param_1 + uVar6 * 8);
    do {
      plVar4 = plVar2;
      if (*(uint *)(plVar4 + 1) == param_2) {
        _free((void *)plVar4[0xf]);
        *(undefined8 *)(*plVar7 + 0x78) = 0;
        if (param_4 != 0) {
          sVar1 = (ulong)param_4 * 8;
          pvVar5 = _malloc(sVar1);
          *(void **)(*plVar7 + 0x78) = pvVar5;
          if (*(void **)(*plVar7 + 0x78) == (void *)0x0) {
            FUN_100df99c0("CHRCLIENT","ChrToolClient",0,
                          "Failed to allocate memory for window caption (%ld bytes)",sVar1);
            *(undefined4 *)(*plVar7 + 0x80) = 0;
            return;
          }
          _memcpy(*(void **)(*plVar7 + 0x78),param_3,(ulong)param_4 * 2);
        }
        *(uint *)(*plVar7 + 0x80) = param_4;
        return;
      }
      plVar2 = (long *)*plVar4;
      plVar7 = plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
  }
  return;
}

