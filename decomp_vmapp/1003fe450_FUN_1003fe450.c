
undefined8 FUN_1003fe450(long param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  void *pvVar4;
  long lVar5;
  uint uVar6;
  undefined8 uVar7;
  uint *puVar8;
  bool bVar9;
  
  lVar5 = *(long *)(param_1 + 0x830);
  if (lVar5 != 0) {
    FUN_1008e3970("","HddUtils",0,"hdd: SF Stat: %u, %u, %u, 0x%08X pa: 0x%08llX",
                  *(undefined4 *)(lVar5 + 4),*(undefined4 *)(lVar5 + 8),*(undefined4 *)(lVar5 + 0xc)
                  ,*(undefined4 *)(lVar5 + 0x10),param_2);
  }
  FUN_10008d470(param_1 + 8);
  *(undefined8 *)(param_1 + 0x830) = 0;
  uVar7 = 0;
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x830);
    uVar3 = FUN_10008d820(param_1 + 8,param_2,param_3 & 0xffffffff,puVar1);
    if ((uVar3 == param_3) && (puVar8 = (uint *)*puVar1, puVar8 != (uint *)0x0)) {
      if (*(void **)(param_1 + 0x848) != (void *)0x0) {
        _free(*(void **)(param_1 + 0x848));
        puVar8 = (uint *)*puVar1;
      }
      pvVar4 = _calloc((ulong)*puVar8,0x900);
      *(void **)(param_1 + 0x848) = pvVar4;
      uVar7 = 0xffffffff;
      if (pvVar4 != (void *)0x0) {
        uVar3 = *puVar8;
        if (uVar3 != 0) {
          lVar5 = (long)pvVar4 + 0x8f0;
          uVar6 = 0;
          do {
            lVar2 = DAT_1011c3688;
            *(long *)(lVar5 + -0x828) = DAT_1011c3688;
            *(undefined8 *)(lVar5 + -0x820) = *(undefined8 *)(*(long *)(lVar2 + 0x60) + 0x20);
            *(long *)(lVar5 + -0x818) = lVar5 + -0x810;
            *(undefined4 *)(lVar5 + -0x810) = 0;
            *(undefined8 *)(lVar5 + -0x808) = 0;
            *(long *)lVar5 = lVar5;
            *(long *)(lVar5 + 8) = lVar5;
            uVar6 = uVar6 + 1;
            lVar5 = lVar5 + 0x900;
          } while (uVar6 < uVar3);
        }
        uVar3 = puVar8[4];
        do {
          LOCK();
          uVar6 = puVar8[4];
          bVar9 = uVar3 == uVar6;
          if (bVar9) {
            puVar8[4] = uVar3 & 0xfffffffb;
            uVar6 = uVar3;
          }
          uVar3 = uVar6;
          UNLOCK();
        } while (!bVar9);
        uVar7 = 0;
        FUN_1008e3970("","HddUtils",0,"hdd: SF - %u slots inited",*(undefined4 *)*puVar1);
      }
    }
    else {
      FUN_1008e3970("","HddUtils",0,
                    "CSFilterHddWorker::SetDescPtr() failed to map ring buffer at %#llx[%#x]",
                    param_2,param_3 & 0xffffffff);
      uVar7 = 0xffffffff;
    }
  }
  return uVar7;
}

