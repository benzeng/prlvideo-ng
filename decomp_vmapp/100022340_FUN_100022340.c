
uint * FUN_100022340(undefined8 *param_1,QString *param_2,long *param_3)

{
  uint *puVar1;
  char cVar2;
  uint *puVar3;
  uint *puVar4;
  undefined8 uVar5;
  undefined8 local_38;
  
  puVar3 = (uint *)*param_1;
  if (1 < *puVar3) {
    FUN_100022a90(param_1);
    puVar3 = (uint *)*param_1;
  }
  puVar4 = (uint *)0x0;
  puVar1 = *(uint **)(puVar3 + 4);
  if (*(uint **)(puVar3 + 4) == (uint *)0x0) {
    puVar3 = puVar3 + 2;
    uVar5 = 1;
  }
  else {
    do {
      while (puVar3 = puVar1, cVar2 = operator<((QString *)(puVar3 + 6),param_2), cVar2 != '\0') {
        puVar1 = *(uint **)(puVar3 + 4);
        if (*(uint **)(puVar3 + 4) == (uint *)0x0) {
          uVar5 = 0;
          if (puVar4 == (uint *)0x0) goto LAB_10002242b;
          goto LAB_1000223ca;
        }
      }
      uVar5 = 1;
      puVar1 = *(uint **)(puVar3 + 2);
      puVar4 = puVar3;
    } while (*(uint **)(puVar3 + 2) != (uint *)0x0);
LAB_1000223ca:
    cVar2 = operator<(param_2,(QString *)(puVar4 + 6));
    if (cVar2 == '\0') {
      if (*(long *)(puVar4 + 8) != *param_3) {
        FUN_100022be0(&local_38,param_3);
        uVar5 = *(undefined8 *)(puVar4 + 8);
        *(undefined8 *)(puVar4 + 8) = local_38;
        local_38 = uVar5;
        FUN_100022290(&local_38);
      }
      return puVar4;
    }
  }
LAB_10002242b:
  puVar3 = (uint *)FUN_1000229b0(*param_1,param_2,param_3,puVar3,uVar5);
  return puVar3;
}

