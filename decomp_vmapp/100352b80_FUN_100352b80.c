
void FUN_100352b80(long param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  lVar1 = param_1 + 0x118;
  local_34 = 0x1f;
  puVar2 = *(undefined4 **)(param_1 + 0x120);
  puVar3 = *(undefined4 **)(param_1 + 0x128);
  local_30 = param_3;
  local_2c = param_2;
  if (puVar2 == puVar3) {
    FUN_10027f110(lVar1,&local_34);
    puVar2 = *(undefined4 **)(param_1 + 0x120);
    puVar3 = *(undefined4 **)(param_1 + 0x128);
  }
  else {
    *puVar2 = 0x1f;
    puVar2 = puVar2 + 1;
    *(undefined4 **)(param_1 + 0x120) = puVar2;
  }
  if (puVar2 == puVar3) {
    FUN_10027f110(lVar1,&local_2c);
    puVar2 = *(undefined4 **)(param_1 + 0x120);
    puVar3 = *(undefined4 **)(param_1 + 0x128);
  }
  else {
    *puVar2 = param_2;
    puVar2 = puVar2 + 1;
    *(undefined4 **)(param_1 + 0x120) = puVar2;
  }
  if (puVar2 == puVar3) {
    FUN_10027f110(lVar1,&local_30);
  }
  else {
    *puVar2 = param_3;
    *(undefined4 **)(param_1 + 0x120) = puVar2 + 1;
  }
  FUN_1003a0030(param_1,param_2,param_3);
  return;
}

