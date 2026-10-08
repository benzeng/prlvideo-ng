
undefined1 FUN_100ab11d0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  long lVar3;
  undefined1 local_68 [64];
  
  FUN_100aafe50(local_68,param_1 + 0x19);
  if (*(char *)(param_1 + 0x1e) == '\0') {
    uVar2 = 0;
  }
  else {
    lVar3 = param_1[0x18];
    if (lVar3 == 0) {
      puVar1 = operator_new(0xa0);
      *(undefined4 *)(puVar1 + 1) = 1;
      *puVar1 = &PTR_FUN_102239d20;
      puVar1[2] = param_1;
      (**(code **)*param_1)(param_1);
      puVar1[4] = 0;
      puVar1[3] = 0;
      FUN_100aaf550(puVar1 + 5,1,0);
      param_1[0x18] = puVar1;
      FUN_100ab0dd0(param_1,puVar1);
      lVar3 = param_1[0x18];
    }
    uVar2 = 1;
    FUN_100ab1300(lVar3,0,param_2,param_3);
  }
  FUN_100aafde0(local_68);
  return uVar2;
}

