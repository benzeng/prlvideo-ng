
long FUN_10086fff0(long param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_28;
  
  *param_2 = 0;
  piVar1 = *(int **)(param_1 + 8);
  lVar6 = 0;
  if ((piVar1 != (int *)0x0) && (lVar6 = 0, *piVar1 == 0x10)) {
    local_28 = *(undefined8 *)(*(long *)(piVar1 + 2) + 8);
    lVar4 = FUN_10086ed00(0,&local_28,(long)**(int **)(piVar1 + 2));
    lVar6 = 0;
    if ((lVar4 != 0) &&
       (puVar2 = *(undefined8 **)(lVar4 + 8), lVar6 = lVar4, puVar2 != (undefined8 *)0x0)) {
      piVar1 = (int *)puVar2[1];
      iVar3 = FUN_100821ab0(*puVar2);
      if (((piVar1 != (int *)0x0) && (iVar3 == 0x38f)) && (*piVar1 == 0x10)) {
        local_28 = *(undefined8 *)(*(long *)(piVar1 + 2) + 8);
        uVar5 = FUN_10089f860(0,&local_28,(long)**(int **)(piVar1 + 2));
        *param_2 = uVar5;
      }
    }
  }
  return lVar6;
}

