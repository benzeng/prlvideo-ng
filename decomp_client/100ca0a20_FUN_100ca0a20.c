
undefined8 FUN_100ca0a20(int *param_1,int *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = 0xffffffff;
  if (((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) && (*param_1 == *param_2)) {
    switch(*param_1) {
    case 0:
      puVar1 = *(undefined8 **)(param_1 + 2);
      if (((puVar1 != (undefined8 *)0x0) &&
          (puVar2 = *(undefined8 **)(param_2 + 2), puVar2 != (undefined8 *)0x0)) &&
         (uVar3 = FUN_100bf8810(*puVar1,*puVar2), (int)uVar3 == 0)) {
        uVar3 = puVar1[1];
        uVar4 = puVar2[1];
        goto LAB_100ca0a6c;
      }
      break;
    case 1:
    case 2:
    case 6:
      uVar3 = FUN_100c8b430(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
      return uVar3;
    case 3:
    case 5:
      uVar3 = *(undefined8 *)(param_1 + 2);
      uVar4 = *(undefined8 *)(param_2 + 2);
LAB_100ca0a6c:
      uVar3 = FUN_100c76f80(uVar3,uVar4);
      return uVar3;
    case 4:
      uVar3 = FUN_100c92120(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
      return uVar3;
    case 7:
      uVar3 = FUN_100c76bb0(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
      return uVar3;
    case 8:
      uVar3 = FUN_100bf8810(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
      return uVar3;
    }
  }
  return uVar3;
}

