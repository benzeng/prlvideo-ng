
void FUN_100814780(long param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if ((param_2[1] != 0) && (param_2[1] <= *(long *)(param_1 + 200) + *(long *)(param_1 + 0xd0))) {
    return;
  }
  FUN_100885c10(param_2[2],param_1);
  lVar5 = *param_2;
  puVar2 = *(undefined8 **)(param_1 + 0x110);
  if ((puVar2 != (undefined8 *)0x0) &&
     (puVar3 = *(undefined8 **)(param_1 + 0x108), puVar3 != (undefined8 *)0x0)) {
    puVar1 = (undefined8 *)(lVar5 + 0x38);
    puVar4 = (undefined8 *)(lVar5 + 0x30);
    if (puVar2 == puVar1) {
      if (puVar3 == puVar4) {
        *(undefined8 *)(lVar5 + 0x38) = 0;
        *puVar4 = 0;
      }
      else {
        *puVar1 = puVar3;
        puVar3[0x22] = puVar1;
      }
    }
    else if (puVar3 == puVar4) {
      *puVar4 = puVar2;
      puVar2[0x21] = puVar4;
    }
    else {
      puVar2[0x21] = puVar3;
      *(undefined8 **)(*(long *)(param_1 + 0x108) + 0x110) = puVar2;
    }
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(long *)(param_1 + 0x108) = 0;
    lVar5 = *param_2;
  }
  *(undefined4 *)(param_1 + 0xa0) = 1;
  if (*(code **)(lVar5 + 0x58) != (code *)0x0) {
    (**(code **)(lVar5 + 0x58))(lVar5,param_1);
  }
  FUN_100813340(param_1);
  return;
}

