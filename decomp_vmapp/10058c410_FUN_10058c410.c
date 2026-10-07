
undefined8 FUN_10058c410(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  char cVar6;
  undefined8 uVar7;
  
  uVar7 = 0;
  if (*(long *)(param_3 + 0x10) != 0) {
    cVar6 = (**(code **)(*param_1 + 0x18))();
    if (cVar6 == '\0') {
      FUN_1008e3970("","vdisk",0,"Error: device sync request was not acked");
      uVar7 = 0x80021025;
    }
    else {
      while (uVar7 = 0, *(long *)(param_3 + 0x10) != 0) {
        plVar3 = *(long **)(param_3 + 8);
        uVar7 = 0;
        if (plVar3[2] != 0) {
          uVar7 = *(undefined8 *)(plVar3[2] + 0x10);
        }
        FUN_10058c520(uVar7,0xffffffffffffffff);
        plVar4 = (long *)plVar3[2];
        iVar2 = *(int *)(plVar4[2] + 0x1100);
        if (iVar2 != 0) {
          FUN_1008e3970("","vdisk",0,
                        "Error: WR request failed during merge with dio_err=%u, sys_err=%u",iVar2,
                        *(undefined4 *)(plVar4[2] + 0x1104));
          return 0x80021027;
        }
        lVar5 = *plVar3;
        *(long *)(lVar5 + 8) = plVar3[1];
        *(long *)plVar3[1] = lVar5;
        *(long *)(param_3 + 0x10) = *(long *)(param_3 + 0x10) + -1;
        if (plVar4 != (long *)0x0) {
          LOCK();
          plVar1 = plVar4 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)(*plVar4 + 0x10))();
          }
        }
        operator_delete(plVar3);
      }
    }
  }
  return uVar7;
}

