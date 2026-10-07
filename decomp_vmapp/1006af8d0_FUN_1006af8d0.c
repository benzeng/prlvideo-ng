
void FUN_1006af8d0(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar1 = *param_3;
  lVar5 = *(long *)(lVar1 + 0x10);
  puVar4 = (undefined8 *)&DAT_00000070;
  if ((lVar1 == 0) ||
     (puVar4 = (undefined8 *)(lVar5 + 0x70), *(long *)(lVar5 + 0x70) == *(long *)(lVar5 + 0x78))) {
    *puVar4 = 0;
    *(undefined8 *)(lVar5 + 0x78) = 0;
  }
  else if ((long *)*puVar4 == param_2) {
    *(undefined8 *)(lVar5 + 0x70) = **(undefined8 **)(lVar5 + 0x70);
  }
  else if (*(long **)(lVar5 + 0x78) == param_2) {
    *(undefined8 *)(lVar5 + 0x78) = *(undefined8 *)(*(long *)(lVar5 + 0x78) + 8);
  }
  lVar2 = *param_2;
  plVar3 = (long *)param_2[1];
  *(long **)(lVar2 + 8) = plVar3;
  *plVar3 = lVar2;
  *param_2 = 0x112233;
  param_2[1] = (long)&DAT_00445566;
  if (lVar1 == 0) {
    lVar5 = 0;
  }
  FUN_1006b1970(lVar5 + 0x80,param_2 + 3);
  FUN_1006b1fd0(param_2);
  operator_delete(param_2);
  return;
}

