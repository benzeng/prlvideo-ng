
int FUN_10055a9a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined8 *param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  
  iVar4 = FUN_10055a870();
  cVar3 = (*(code *)*param_5)(param_4,param_3);
  if (cVar3 != '\0') {
    uVar1 = *param_3;
    *param_3 = *param_4;
    *param_4 = uVar1;
    uVar2 = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)(param_3 + 2) = *(undefined8 *)(param_4 + 2);
    *(undefined8 *)(param_4 + 2) = uVar2;
    cVar3 = (*(code *)*param_5)(param_3,param_2);
    if (cVar3 == '\0') {
      iVar4 = iVar4 + 1;
    }
    else {
      uVar1 = *param_2;
      *param_2 = *param_3;
      *param_3 = uVar1;
      uVar2 = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)(param_3 + 2) = uVar2;
      cVar3 = (*(code *)*param_5)(param_2,param_1);
      if (cVar3 == '\0') {
        iVar4 = iVar4 + 2;
      }
      else {
        uVar1 = *param_1;
        *param_1 = *param_2;
        *param_2 = uVar1;
        uVar2 = *(undefined8 *)(param_1 + 2);
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
        *(undefined8 *)(param_2 + 2) = uVar2;
        iVar4 = iVar4 + 3;
      }
    }
  }
  return iVar4;
}

