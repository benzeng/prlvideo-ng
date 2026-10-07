
void FUN_10085c0d0(undefined8 *param_1,long param_2,long param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*param_1;
    while (puVar3 = puVar2, puVar3 != (undefined8 *)0x0) {
      if (((puVar3[2] == param_2) && (puVar3[3] == param_3)) && ((code *)puVar3[4] == param_4)) {
        uVar1 = *puVar3;
        (*param_4)(puVar3[1]);
        FUN_10081e1a0(*param_1);
        *param_1 = uVar1;
        return;
      }
      param_1 = puVar3;
      puVar2 = (undefined8 *)*puVar3;
    }
  }
  return;
}

