
void FUN_100c2e950(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  
  iVar1 = (int)param_3;
  param_1[iVar1 * 2 + -1] = 0;
  *param_1 = 0;
  if (1 < iVar1) {
    iVar7 = iVar1 + -1;
    uVar2 = FUN_100c2ed90(param_1 + 1,param_2 + 1,iVar7,*param_2);
    param_1[(long)iVar7 + 1] = uVar2;
    if (2 < iVar1) {
      puVar6 = param_1 + 3;
      puVar4 = param_1 + (long)(iVar1 + -2) + 3;
      puVar3 = param_2;
      puVar8 = param_2 + 1;
      do {
        iVar7 = iVar7 + -1;
        puVar5 = puVar3 + 2;
        uVar2 = FUN_100c2ec50(puVar6,puVar5,iVar7,*puVar8);
        *puVar4 = uVar2;
        puVar6 = puVar6 + 2;
        puVar4 = puVar4 + 1;
        puVar3 = puVar8;
        puVar8 = puVar5;
      } while (1 < iVar7);
    }
  }
  FUN_100c2f000(param_1,param_1,param_1,iVar1 * 2);
  FUN_100c2eef0(param_4,param_2,param_3);
  FUN_100c2f000(param_1,param_1,param_4,iVar1 * 2);
  return;
}

