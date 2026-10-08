
undefined8 * FUN_1003423b0(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  
  uVar2 = FUN_100323e00();
  uVar2 = FUN_100319c50(uVar2);
  cVar1 = FUN_100330bf0(uVar2);
  if (cVar1 == '\0') {
    switch(param_2) {
    case 0:
      puVar3 = operator_new(0x40);
      FUN_100342130(puVar3,param_1);
      goto LAB_1003423f0;
    case 1:
      puVar3 = operator_new(0x40);
      FUN_100342130(puVar3,param_1);
      puVar4 = &DAT_10220cd58;
      break;
    case 2:
      puVar3 = operator_new(0x40);
      FUN_100342130(puVar3,param_1);
      puVar4 = &DAT_10220ce08;
      break;
    case 3:
      puVar3 = operator_new(0x40);
      FUN_100342130(puVar3,param_1);
      puVar4 = &DAT_10220ceb8;
      break;
    case 4:
      puVar3 = operator_new(0x40);
      FUN_100342130(puVar3,param_1);
      puVar4 = &DAT_10220cf68;
      break;
    default:
      puVar3 = operator_new(0x40);
      FUN_100342130(puVar3,param_1);
      return puVar3;
    }
  }
  else {
    puVar3 = operator_new(0x40);
    FUN_100342130(puVar3,param_1);
LAB_1003423f0:
    puVar4 = &DAT_10220cca8;
  }
  *puVar3 = puVar4 + 0x10;
  return puVar3;
}

