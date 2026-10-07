
void FUN_1007d7220(uint *param_1,uint param_2,long *param_3,uint *param_4,undefined8 *param_5,
                  int *param_6)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = param_1[3] - param_1[2] & param_1[5];
  if (param_2 <= uVar1) {
    uVar1 = param_2;
  }
  uVar4 = param_1[2] & param_1[4];
  if (*param_1 < uVar1 + uVar4) {
    uVar5 = *param_1 - uVar4;
    *param_4 = uVar5;
    iVar2 = uVar1 - uVar5;
  }
  else {
    *param_4 = uVar1;
    iVar2 = 0;
  }
  *param_6 = iVar2;
  *param_3 = (long)param_1 + (ulong)(uVar4 * param_1[1]) + 0x18;
  puVar3 = (uint *)0x0;
  if (iVar2 != 0) {
    puVar3 = param_1 + 6;
  }
  *param_5 = puVar3;
  return;
}

