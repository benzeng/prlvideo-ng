
void FUN_1005ab5b0(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  long *plVar4;
  char cVar5;
  uint uVar6;
  byte bVar7;
  long lVar8;
  
  QMutex::lock();
  if ((int)param_1[0xf] == -1) {
    bVar7 = 0;
  }
  else {
    bVar7 = (*(byte *)(param_1 + 0x1d) & 2) >> 1;
  }
  if ((int)param_1[3] != 0) {
    lVar8 = 0x28;
    uVar6 = 0;
    do {
      if (bVar7 != 0) {
        cVar5 = FUN_1005ab890(param_1 + 9,param_1[2] + -0x28 + lVar8);
        if (cVar5 == '\0' && 1 < DAT_1011b55f8) {
          FUN_1008e3970("","vdisk",2,"Failed to write unused group[%u]",uVar6);
        }
      }
      lVar1 = param_1[2];
      pvVar2 = *(void **)(lVar1 + -0x28 + lVar8);
      if (pvVar2 != (void *)0x0) {
        operator_delete__(pvVar2);
        *(undefined8 *)(lVar1 + -0x28 + lVar8) = 0;
        pvVar2 = *(void **)(lVar1 + -0x20 + lVar8);
        if (pvVar2 != (void *)0x0) {
          operator_delete__(pvVar2);
          *(undefined8 *)(lVar1 + -0x20 + lVar8) = 0;
        }
        lVar3 = *(long *)(lVar1 + lVar8);
        plVar4 = *(long **)(lVar1 + 8 + lVar8);
        *(long **)(lVar3 + 8) = plVar4;
        *plVar4 = lVar3;
        *(long *)(lVar1 + lVar8) = lVar1 + lVar8;
        *(long *)(lVar1 + 8 + lVar8) = lVar1 + lVar8;
        *(int *)(param_1 + 6) = (int)param_1[6] + -1;
        if (*(long *)(*param_1 + 0x1390) != 0) {
          plVar4 = (long *)(*(long *)(*param_1 + 0x1390) + 0xf0);
          *plVar4 = *plVar4 + -1;
        }
      }
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 0x40;
    } while (uVar6 < *(uint *)(param_1 + 3));
  }
  if ((long *)param_1[4] != param_1 + 4) {
    FUN_1008e3970("","vdisk",0,"Full groups unload do not made full unloading");
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","0","BlockGroup.cpp",0x161,
                  "Invalidate");
  }
  if ((int)param_1[7] != 0) {
    FUN_1008e3970("","vdisk",0,"Error: extra layer still exists");
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","0","BlockGroup.cpp",0x167,
                  "Invalidate");
  }
  QMutex::unlock();
  return;
}

