
undefined8 FUN_100ad0230(long *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  long lVar9;
  long *plVar10;
  
  iVar5 = FUN_100ae56a0(param_2);
  if (iVar5 == 3) {
    puVar8 = (undefined4 *)FUN_100ae55d0(param_2);
    lVar9 = FUN_100ae5630(param_2);
    if ((puVar8 != (undefined4 *)0x0) && (lVar9 != 0)) {
      pcVar2 = *(code **)(*param_1 + 0x130);
      uVar1 = *puVar8;
      uVar6 = FUN_100ae5700(param_2);
      (*pcVar2)(param_1,uVar1,lVar9,uVar6);
    }
  }
  else if (iVar5 == 4) {
    cVar3 = FUN_100acadf0(param_1[2],1);
    if (cVar3 != '\0') {
      uVar7 = FUN_100ae5080(param_2);
      if (0x43 < uVar7) {
        plVar10 = (long *)FUN_100ae5090(param_2);
        lVar9 = 0;
        if (*plVar10 != 0) {
          lVar9 = *(long *)(*plVar10 + 0x10);
        }
        *(short *)(lVar9 + 0x40) = (short)param_1[0x136];
        *(undefined2 *)(lVar9 + 0x42) = *(undefined2 *)((long)param_1 + 0x9b4);
        uVar4 = FUN_100ae5760(param_2);
        FUN_100ad0320(param_1,lVar9 + 0x24,uVar4);
      }
    }
  }
  return 0;
}

