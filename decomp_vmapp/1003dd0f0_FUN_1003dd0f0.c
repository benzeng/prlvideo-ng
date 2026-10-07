
void FUN_1003dd0f0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)(param_2 + 0x10);
  if (puVar1 != (undefined8 *)*param_1) {
    puVar2 = *(undefined8 **)(param_2 + 0x10);
    puVar4 = *(undefined8 **)(param_2 + 0x18);
    *(undefined8 *)(param_2 + 0x18) = 0;
    *puVar1 = 0;
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = puVar2;
    }
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[1] = puVar4;
    }
    puVar3 = (undefined8 *)param_1[1];
    if ((undefined8 *)param_1[1] == puVar1) {
      param_1[1] = puVar4;
      puVar3 = puVar4;
    }
    puVar4 = (undefined8 *)*param_1;
    if ((undefined8 *)*param_1 == puVar1) {
      *param_1 = puVar2;
      puVar4 = puVar2;
    }
    *puVar1 = puVar4;
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[1] = puVar1;
    }
    *param_1 = puVar1;
    if (puVar3 == (undefined8 *)0x0) {
      param_1[1] = puVar1;
    }
  }
  return;
}

