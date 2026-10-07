
bool FUN_10052f8e0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  bool bVar3;
  
  lVar1 = DAT_1011cc990;
  bVar3 = DAT_1011cc990 != 0;
  if (bVar3) {
    puVar2 = operator_new(0x28);
    *puVar2 = PTR_shared_null_100ba20d0;
    puVar2[4] = PTR_shared_null_100ba2188;
    puVar2[1] = param_1;
    puVar2[2] = param_2;
    *(undefined4 *)(puVar2 + 3) = 0;
    *(undefined4 *)((long)puVar2 + 0x1c) = param_3;
    FUN_10051afa0(puVar2 + 4,param_4);
    FUN_100041750(*(undefined8 *)(lVar1 + 0x40),puVar2);
  }
  return bVar3;
}

