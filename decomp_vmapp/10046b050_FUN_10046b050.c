
undefined8 * FUN_10046b050(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  uint *puVar6;
  int iVar7;
  int *piVar8;
  long lVar9;
  
  uVar4 = FUN_100472f90(param_2);
  plVar5 = (long *)FUN_100473400(uVar4);
  (**(code **)(*plVar5 + 0x70))(param_1,plVar5);
  puVar6 = (uint *)*param_1;
  iVar7 = puVar6[3] - puVar6[2];
  if (0 < iVar7) {
    lVar9 = (long)iVar7;
    iVar7 = (puVar6[3] - 1) - puVar6[2];
    while( true ) {
      if (1 < *puVar6) {
        FUN_100479940(param_1,puVar6[1]);
        puVar6 = (uint *)*param_1;
      }
      puVar1 = *(undefined8 **)(puVar6 + ((int)puVar6[2] + lVar9) * 2 + 2);
      piVar2 = (int *)*puVar1;
      piVar8 = (int *)0x0;
      if ((piVar2 != (int *)0x0) && (piVar8 = piVar2, *piVar2 != 1)) {
        FUN_100031c40(puVar1);
        piVar8 = (int *)*puVar1;
      }
      piVar8 = piVar8 + 2;
      iVar3 = QString::compare(piVar8,&DAT_1011bbf80,1);
      if (iVar3 != 0) {
        iVar3 = QString::compare(piVar8,&DAT_1011bbf88,1);
        if (iVar3 != 0) {
          iVar3 = QString::compare(piVar8,&DAT_1011bbf90,1);
          if (iVar3 != 0) {
            FUN_10046b8e0(param_1,iVar7);
          }
        }
      }
      if (lVar9 < 2) break;
      lVar9 = lVar9 + -1;
      puVar6 = (uint *)*param_1;
      iVar7 = iVar7 + -1;
    }
  }
  return param_1;
}

