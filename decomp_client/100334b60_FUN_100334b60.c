
undefined8 * FUN_100334b60(undefined8 param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar2 = FUN_100319c50();
  cVar1 = FUN_100330bf0(uVar2);
  if (cVar1 == '\0') {
    if (param_2 != 0) {
      if (param_2 == 2) {
        puVar3 = operator_new(0x40);
        FUN_1003346e0(puVar3,param_1);
        *puVar3 = &PTR_FUN_10220c5a8;
        *(undefined4 *)((long)puVar3 + 0x24) = 3;
        return puVar3;
      }
      if (param_2 != 3) {
        puVar3 = operator_new(0x40);
        FUN_1003346e0(puVar3,param_1);
        return puVar3;
      }
    }
    puVar3 = operator_new(0x40);
    FUN_1003346e0(puVar3,param_1);
  }
  else {
    puVar3 = operator_new(0x40);
    FUN_1003346e0(puVar3,param_1);
  }
  *puVar3 = &PTR_FUN_10220c4f8;
  return puVar3;
}

