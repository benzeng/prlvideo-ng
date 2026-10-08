
/* Function Stack Size: 0x10 bytes */

unsigned_long_long PDDeviceBarViewContaner::totalItemsCount(ID param_1,SEL param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  undefined8 uVar6;
  long *plVar7;
  unsigned_long_long uVar8;
  
  lVar4 = _vm;
  uVar8 = 0;
  if ((*(long *)(param_1 + _vm) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + _vm) + 4) != 0)) {
    uVar8 = 0;
    if (*(long *)(_vm + 8 + param_1) != 0) {
      cVar5 = FUN_10011a720();
      uVar8 = 0;
      if (cVar5 != '\0') {
        lVar3 = *(long *)(param_1 + lVar4);
        uVar6 = 0;
        if ((lVar3 != 0) && (uVar6 = 0, *(int *)(lVar3 + 4) != 0)) {
          uVar6 = *(undefined8 *)(lVar4 + 8 + param_1);
        }
        uVar6 = FUN_10018f4e0(uVar6);
        plVar7 = (long *)FUN_1007c65a0(uVar6);
        iVar1 = *(int *)(*plVar7 + 0xc);
        iVar2 = *(int *)(*plVar7 + 8);
        cVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_toolsWarningVisible_1022691e8);
        uVar8 = ((long)((iVar1 + 2) - iVar2) + 1) - (ulong)(cVar5 == '\0');
      }
    }
  }
  return uVar8;
}

