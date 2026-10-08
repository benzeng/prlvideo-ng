
void FUN_100d6c730(undefined8 *param_1,long *param_2,undefined4 param_3)

{
  long lVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint *puVar6;
  
  *param_1 = &PTR_FUN_10230fad8;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  if (param_2 != (long *)0x0) {
    puVar6 = (uint *)*param_2;
    if ((1 < *puVar6) || (*(long *)(puVar6 + 4) != 0x18)) {
      QByteArray::reallocData(param_2,puVar6[1] + 1,puVar6[2] >> 0x1f);
      puVar6 = (uint *)*param_2;
      param_2 = (long *)param_1[1];
    }
    lVar1 = *(long *)(puVar6 + 4);
    FUN_100df99c0("","WinRegistry",0,"OA00004.01:\t%x;\t%x",*(undefined4 *)(*param_2 + 4),
                  *(undefined4 *)(lVar1 + 0x28 + (long)puVar6));
    puVar5 = (undefined8 *)param_1[1];
    puVar3 = (uint *)*puVar5;
    uVar4 = puVar3[1];
    if (uVar4 != *(int *)(lVar1 + 0x28 + (long)puVar6) + 0x1000U) {
      QByteArray::resize((int)puVar5);
      FUN_100df99c0("","WinRegistry",0,"OA00004.02:");
      puVar5 = (undefined8 *)param_1[1];
      puVar3 = (uint *)*puVar5;
      uVar4 = puVar3[1];
    }
    uVar2 = *(int *)(param_1 + 2) * 0x400 + uVar4;
    if ((1 < *puVar3) || ((puVar3[2] & 0x7fffffff) < uVar2 + 1)) {
      if (uVar4 < uVar2) {
        uVar4 = uVar2;
      }
      QByteArray::reallocData(puVar5,uVar4 + 1,1);
      return;
    }
    puVar3[2] = puVar3[2] | 0x80000000;
  }
  return;
}

