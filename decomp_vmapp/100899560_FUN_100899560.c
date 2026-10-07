
long * FUN_100899560(undefined8 *param_1,long *param_2,ulong param_3)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  uint uVar4;
  void *pvVar5;
  int iVar6;
  
  if ((((param_2 == (long *)0x0) || (0x7ffffffe < param_3 - 1)) ||
      (pvVar5 = (void *)*param_2, pvVar5 == (void *)0x0)) ||
     (*(char *)((long)pvVar5 + (param_3 - 1)) < '\0')) {
    FUN_100887ce0(0xd,0xc4,0xd8,"a_object.c",0x11b);
LAB_1008996a1:
    plVar2 = (long *)0x0;
  }
  else {
    lVar1 = 0;
    iVar6 = (int)param_3;
    if (0 < iVar6) {
      do {
        if ((*(char *)((long)pvVar5 + lVar1) == -0x80) &&
           (((int)lVar1 == 0 || (-1 < *(char *)((long)pvVar5 + lVar1 + -1))))) {
          FUN_100887ce0(0xd,0xc4,0xd8,"a_object.c",0x122);
          goto LAB_1008996a1;
        }
        lVar1 = lVar1 + 1;
      } while ((int)lVar1 < iVar6);
    }
    if (((param_1 == (undefined8 *)0x0) || (plVar2 = (long *)*param_1, plVar2 == (long *)0x0)) ||
       ((*(byte *)(plVar2 + 4) & 1) == 0)) {
      plVar2 = (long *)FUN_10081ddd0(0x28,"a_object.c",0x15a);
      if (plVar2 == (long *)0x0) {
        FUN_100887ce0(0xd,0x7b,0x41,"a_object.c",0x15c);
        goto LAB_1008996a1;
      }
      plVar2[3] = 0;
      plVar2[2] = 0;
      plVar2[1] = 0;
      *plVar2 = 0;
      *(undefined4 *)(plVar2 + 4) = 1;
      pvVar5 = (void *)*param_2;
    }
    pvVar3 = (void *)plVar2[3];
    plVar2[3] = 0;
    if (pvVar3 == (void *)0x0) {
      *(undefined4 *)((long)plVar2 + 0x14) = 0;
LAB_100899700:
      pvVar3 = (void *)FUN_10081ddd0(param_3 & 0xffffffff,"a_object.c",0x13b);
      if (pvVar3 == (void *)0x0) {
        FUN_100887ce0(0xd,0xc4,0x41,"a_object.c",0x150);
        if ((param_1 != (undefined8 *)0x0) && ((long *)*param_1 == plVar2)) {
          return (long *)0x0;
        }
        uVar4 = *(uint *)(plVar2 + 4);
        if ((uVar4 & 4) != 0) {
          if (*plVar2 != 0) {
            FUN_10081e1a0();
          }
          if (plVar2[1] != 0) {
            FUN_10081e1a0();
          }
          plVar2[1] = 0;
          *plVar2 = 0;
          uVar4 = *(uint *)(plVar2 + 4);
        }
        if ((uVar4 & 8) != 0) {
          if (plVar2[3] != 0) {
            FUN_10081e1a0();
            uVar4 = *(uint *)(plVar2 + 4);
          }
          plVar2[3] = 0;
          *(undefined4 *)((long)plVar2 + 0x14) = 0;
        }
        if ((uVar4 & 1) == 0) {
          return (long *)0x0;
        }
        FUN_10081e1a0(plVar2);
        goto LAB_1008996a1;
      }
      *(byte *)(plVar2 + 4) = *(byte *)(plVar2 + 4) | 8;
    }
    else if (*(int *)((long)plVar2 + 0x14) < iVar6) {
      *(undefined4 *)((long)plVar2 + 0x14) = 0;
      FUN_10081e1a0(pvVar3);
      goto LAB_100899700;
    }
    _memcpy(pvVar3,pvVar5,(long)iVar6);
    plVar2[3] = (long)pvVar3;
    *(int *)((long)plVar2 + 0x14) = iVar6;
    plVar2[1] = 0;
    *plVar2 = 0;
    if (param_1 != (undefined8 *)0x0) {
      *param_1 = plVar2;
    }
    *param_2 = (long)pvVar5 + (long)iVar6;
  }
  return plVar2;
}

