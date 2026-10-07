
undefined1 FUN_10040ca80(long param_1)

{
  double *pdVar1;
  int *piVar2;
  long lVar3;
  char cVar4;
  undefined1 uVar5;
  long *plVar6;
  undefined8 uVar7;
  void *pvVar8;
  uint uVar9;
  bool bVar10;
  
  uVar5 = 1;
  if (*(long *)(param_1 + 0x60) == 0) {
    pdVar1 = (double *)(param_1 + 8);
    piVar2 = *(int **)(param_1 + 0x68);
    bVar10 = true;
    if (((piVar2[2] == *(int *)(param_1 + 0x24)) && ((double)(uint)piVar2[3] == *pdVar1)) &&
       (!NAN((double)(uint)piVar2[3]) && !NAN(*pdVar1))) {
      bVar10 = *piVar2 != 2;
    }
    if (*(char *)(param_1 + 0x44) == '\0') {
      if (bVar10) {
        plVar6 = operator_new(0x68);
        FUN_10040f1b0(plVar6,piVar2,pdVar1);
      }
      else {
        plVar6 = operator_new(0x38);
        FUN_10040df50(plVar6,piVar2);
      }
    }
    else if (bVar10) {
      plVar6 = operator_new(0x70);
      FUN_10040ead0(plVar6,piVar2,pdVar1);
    }
    else {
      plVar6 = operator_new(0x38);
      FUN_10040e1d0(plVar6,piVar2);
    }
    *(long **)(param_1 + 0x60) = plVar6;
    cVar4 = (**(code **)(*plVar6 + 0x30))(plVar6);
    if (cVar4 == '\0') {
      uVar5 = 0;
      FUN_1008e3970("","PrlAudioCore",0,
                    "CAudioUnitAUHAL::OpenAudioUnit: Failed to create audio pipeline");
      if (*(long **)(param_1 + 0x60) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x60) + 0x48))();
        *(undefined8 *)(param_1 + 0x60) = 0;
        uVar5 = 0;
      }
    }
    else {
      lVar3 = *(long *)(param_1 + 0x60);
      if (lVar3 != 0) {
        uVar7 = FUN_100409dc0();
        uVar5 = FUN_10040be20(uVar7,*(undefined1 *)(param_1 + 0x44));
        *(undefined1 *)(lVar3 + 0x32) = uVar5;
      }
      uVar9 = *(int *)(param_1 + 0x4c) * *(int *)(*(long *)(param_1 + 0x68) + 0xc);
      FUN_10040d3c0(param_1,(ulong)uVar9 / 1000);
      uVar5 = 1;
      if (*(char *)(param_1 + 0x44) != '\0') {
        if ((*(int *)(param_1 + 0x58) != 0) && (*(void **)(param_1 + 0x50) != (void *)0x0)) {
          operator_delete__(*(void **)(param_1 + 0x50));
        }
        *(uint *)(param_1 + 0x58) = uVar9 / 1000;
        pvVar8 = operator_new__((ulong)((uVar9 / 1000) * *(int *)(param_1 + 0x20)));
        *(void **)(param_1 + 0x50) = pvVar8;
      }
    }
  }
  return uVar5;
}

