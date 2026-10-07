
void FUN_1004035a0(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  int iVar7;
  
  if (0 < DAT_101119c90) {
    lVar1 = *(long *)(param_1 + 0xe8);
    *(ulong *)(param_2 + 0x48) = (param_4 & 0xffffffff) + param_3;
    *(long *)(param_2 + 0x50) = param_3;
    uVar5 = FUN_1007d87f0();
    *(undefined8 *)(param_2 + 0x58) = uVar5;
    plVar6 = (long *)(param_1 + 0xe0);
    lVar4 = *(long *)(param_1 + 0xe0);
    lVar3 = 0;
    while (lVar2 = lVar4, lVar2 != 0) {
      if (lVar2 + -0x60 == param_2) {
LAB_10040368e:
        FUN_1008e3970("","HddUtils",0,"Hdd:%d request ts collision",*(undefined4 *)(param_1 + 0x40))
        ;
        return;
      }
      iVar7 = *(int *)(param_2 + 0x48) - *(int *)(lVar2 + -0x18);
      if (iVar7 == 0) {
        iVar7 = (int)param_2 - (int)(lVar2 + -0x60);
      }
      if (iVar7 < 0) {
        plVar6 = (long *)(lVar2 + 0x10);
      }
      else {
        if (iVar7 < 1) {
          if (lVar2 != 0) goto LAB_10040368e;
          goto LAB_10040365c;
        }
        plVar6 = (long *)(lVar2 + 8);
      }
      lVar3 = lVar2;
      lVar4 = *plVar6;
    }
    *(long *)(param_2 + 0x60) = lVar3;
    *(undefined8 *)(param_2 + 0x70) = 0;
    *(undefined8 *)(param_2 + 0x68) = 0;
    *plVar6 = param_2 + 0x60;
    FUN_1007d95d0();
LAB_10040365c:
    if (*(long *)(param_2 + 0x48) < lVar1) {
      FUN_100403a80(param_1 + 0xe8);
      return;
    }
  }
  return;
}

