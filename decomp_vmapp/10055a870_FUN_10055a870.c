
undefined8
FUN_10055a870(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  char cVar3;
  char cVar4;
  
  cVar3 = (*(code *)*param_4)(param_2,param_1);
  cVar4 = (*(code *)*param_4)(param_3,param_2);
  if (cVar3 == '\0') {
    if (cVar4 == '\0') {
      return 0;
    }
    uVar1 = *param_2;
    *param_2 = *param_3;
    *param_3 = uVar1;
    uVar2 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)(param_3 + 2) = uVar2;
    cVar3 = (*(code *)*param_4)(param_2,param_1);
    if (cVar3 == '\0') {
      return 1;
    }
    uVar1 = *param_1;
    *param_1 = *param_2;
    *param_2 = uVar1;
    uVar2 = *(undefined8 *)(param_1 + 2);
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_2 + 2) = uVar2;
  }
  else {
    if (cVar4 != '\0') {
      uVar1 = *param_1;
      *param_1 = *param_3;
      *param_3 = uVar1;
      uVar2 = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)(param_3 + 2) = uVar2;
      return 1;
    }
    uVar1 = *param_1;
    *param_1 = *param_2;
    *param_2 = uVar1;
    uVar2 = *(undefined8 *)(param_1 + 2);
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_2 + 2) = uVar2;
    cVar3 = (*(code *)*param_4)(param_3,param_2);
    if (cVar3 == '\0') {
      return 1;
    }
    uVar1 = *param_2;
    *param_2 = *param_3;
    *param_3 = uVar1;
    uVar2 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)(param_3 + 2) = uVar2;
  }
  return 2;
}

