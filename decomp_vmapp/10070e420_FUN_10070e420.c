
void FUN_10070e420(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x24) != 0) {
      FUN_10070b7b0(lVar1,*(undefined4 *)(param_1 + 8));
      while( true ) {
        plVar2 = *(long **)(param_1 + 0x10);
        lVar1 = *plVar2;
        if (lVar1 == 0) break;
        lVar3 = *(long *)(lVar1 + 0x20);
        *plVar2 = lVar3;
        if (lVar3 == 0) {
          plVar2[1] = 0;
        }
        *(undefined8 *)(lVar1 + 0x20) = 0;
        *(int *)((long)plVar2 + 0x24) = *(int *)((long)plVar2 + 0x24) + -1;
        *(int *)(plVar2 + 4) = (int)plVar2[4] + 1;
        FUN_10070e0f0(plVar2,*(undefined4 *)(lVar1 + 0x38));
      }
      lVar1 = plVar2[2];
      while (lVar1 != 0) {
        lVar3 = *(long *)(lVar1 + 0x20);
        plVar2[2] = lVar3;
        if (lVar3 == 0) {
          plVar2[3] = 0;
        }
        *(undefined8 *)(lVar1 + 0x20) = 0;
        *(int *)(plVar2 + 4) = (int)plVar2[4] + -1;
        (**(code **)(**(long **)(lVar1 + 0x40) + 0x18))();
        FUN_10070aed0(lVar1);
        plVar2 = *(long **)(param_1 + 0x10);
        lVar1 = plVar2[2];
      }
    }
    return;
  }
  FUN_1008e3970("","AbstractFile",0,"!priv");
  return;
}

