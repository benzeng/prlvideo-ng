
void FUN_100352e80(long param_1,undefined4 param_2,undefined4 param_3,long param_4,uint param_5)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_38;
  undefined4 local_34;
  
  lVar1 = param_1 + 0x130;
  puVar3 = *(undefined4 **)(param_1 + 0x138);
  puVar2 = *(undefined4 **)(param_1 + 0x140);
  local_38 = param_3;
  local_34 = param_2;
  if (puVar3 == puVar2) {
    FUN_10027f110(lVar1,&local_34);
    puVar3 = *(undefined4 **)(param_1 + 0x138);
    puVar2 = *(undefined4 **)(param_1 + 0x140);
  }
  else {
    *puVar3 = param_2;
    puVar3 = puVar3 + 1;
    *(undefined4 **)(param_1 + 0x138) = puVar3;
  }
  if (puVar3 == puVar2) {
    FUN_10027f110(lVar1,&local_38);
    puVar3 = *(undefined4 **)(param_1 + 0x138);
  }
  else {
    *puVar3 = param_3;
    puVar3 = puVar3 + 1;
    *(undefined4 **)(param_1 + 0x138) = puVar3;
  }
  FUN_10033f0e0(lVar1,puVar3,param_4,param_4 + (ulong)param_5 * 4);
  FUN_10039fb70(param_1,param_2,param_3,param_4,param_5);
  return;
}

