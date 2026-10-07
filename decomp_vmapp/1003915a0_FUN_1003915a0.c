
undefined8 FUN_1003915a0(ulong *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int local_34;
  
  local_34 = param_2;
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    puVar6 = (undefined4 *)*param_1;
    puVar5 = (undefined4 *)param_1[1];
    if (puVar5 <= puVar6) {
      return 3;
    }
    *param_1 = (ulong)(puVar6 + 1);
    if (puVar5 <= puVar6 + 1) {
      return 3;
    }
    uVar3 = *puVar6;
    *param_1 = (ulong)(puVar6 + 2);
    if (puVar5 <= puVar6 + 2) break;
    uVar4 = puVar6[1];
    *param_1 = (ulong)(puVar6 + 3);
    if (puVar5 <= puVar6 + 3) {
      return 3;
    }
    param_3 = param_3 + -1;
    uVar1 = puVar6[2];
    *param_1 = (ulong)(puVar6 + 4);
    uVar2 = puVar6[3];
    iVar7 = local_34 + 1;
    puVar6 = (undefined4 *)FUN_100391760(param_1[3],&local_34);
    *puVar6 = uVar3;
    puVar6[1] = uVar4;
    puVar6[2] = uVar1;
    puVar6[3] = uVar2;
    local_34 = iVar7;
  }
  return 3;
}

