
undefined4 FUN_10027bd00(long param_1,int param_2)

{
  int *piVar1;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  undefined4 uVar8;
  int local_40;
  uint local_3c;
  void *local_38;
  
  if (DAT_1011ccc18 != (code *)0x0) {
    (*DAT_1011ccc18)(0,0x15,3);
  }
  lVar7 = (long)param_2 * 0x2850;
  local_40 = *(int *)(param_1 + 0x164 + lVar7);
  uVar8 = 0;
  if (local_40 != 0) {
    piVar1 = (int *)(param_1 + 0x164 + lVar7);
    local_3c = 0;
    pvVar2 = (void *)(param_1 + 0x9a8 + lVar7);
    plVar5 = *(long **)(*(long *)(param_1 + 8) + 0x170);
    local_38 = pvVar2;
    (**(code **)(*plVar5 + 0xa0))(plVar5,&local_40);
    if ((local_3c & 1) != 0) {
      *(undefined1 *)(param_1 + 0x51fe) = 1;
    }
    piVar3 = (int *)(param_1 + 0x160 + lVar7);
    iVar6 = *(int *)(param_1 + 0x160 + lVar7);
    iVar4 = *piVar1;
    if (iVar6 == iVar4) {
      *piVar3 = 0;
      *piVar1 = 0;
      if (0xff < *(int *)(param_1 + 0x16c + lVar7)) {
        FUN_10008d470(param_1 + 0x180 + lVar7);
        *(undefined4 *)(param_1 + 0x16c + lVar7) = 0;
      }
    }
    else {
      iVar6 = iVar6 - iVar4;
      _memmove(pvVar2,(void *)((long)iVar4 * 0x10 + 0x9a8 + lVar7 + param_1),(long)iVar6 << 4);
      *piVar3 = iVar6;
      *piVar1 = 0;
    }
    if (*(char *)(*(long *)(param_1 + 0x18) + 0x1f) != '\0') {
      *(undefined1 *)(*(long *)(param_1 + 0x18) + 2 + (long)param_2 * 6) = 1;
    }
    uVar8 = 1;
    if (DAT_1011ccc18 != (code *)0x0) {
      (*DAT_1011ccc18)(0,0x15,4);
    }
  }
  return uVar8;
}

