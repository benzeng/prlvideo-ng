
undefined1 FUN_100cdc6c0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  undefined1 uVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  
  cVar3 = (**(code **)(*param_1 + 0x80))();
  if (cVar3 == '\0') {
    return 0;
  }
  sVar5 = _CGEventGetIntegerValueField(param_3,9);
  iVar6 = _CGEventGetIntegerValueField(param_3,0x29);
  uVar7 = _CGEventGetFlags(param_3);
  if (sVar5 == 0 && (uVar7 & 0x80000000) == 0) {
    lVar9 = 0;
    lVar10 = *(long *)(param_1[0xa0] + 0x10);
    if (*(long *)(param_1[0xa0] + 0x10) != 0) {
      do {
        while (iVar2 = *(int *)(lVar10 + 0x18), iVar2 < iVar6) {
          plVar1 = (long *)(lVar10 + 0x10);
          lVar10 = *plVar1;
          if (*plVar1 == 0) {
            if (lVar9 == 0) goto LAB_100cdc763;
            iVar2 = *(int *)(lVar9 + 0x18);
            goto LAB_100cdc75f;
          }
        }
        plVar1 = (long *)(lVar10 + 8);
        lVar9 = lVar10;
        lVar10 = *plVar1;
      } while (*plVar1 != 0);
LAB_100cdc75f:
      if (iVar2 <= iVar6) goto LAB_100cdc773;
    }
LAB_100cdc763:
    if (DAT_10230ffd0 < 2) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      FUN_100df99c0("","hid",2,"Modifiers change event is NOT sent to VM, event keyCode is 0!");
    }
  }
  else {
LAB_100cdc773:
    sVar5 = _CGEventGetIntegerValueField(param_3,10);
    iVar6 = _KBGetLayoutType((int)sVar5);
    uVar8 = 4;
    if (iVar6 != 0x4a495320) {
      uVar8 = 1 << (iVar6 == 0x49534f20);
    }
    *(uint *)(param_1 + 0x89) = *(uint *)(param_1 + 0x89) | uVar8;
    uVar4 = FUN_100cdc0a0(param_1,uVar7,0x9f207f);
  }
  return uVar4;
}

