
undefined8 * FUN_1002306a0(undefined8 param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined2 local_2b;
  undefined1 local_29;
  
  puVar3 = (undefined8 *)0x0;
  switch(param_2) {
  case 0:
    puVar3 = operator_new(0x80);
    FUN_100235b00(puVar3,param_1);
    break;
  case 1:
  case 4:
    puVar3 = operator_new(0x60);
    FUN_1002301a0(puVar3,param_1,param_2);
    break;
  case 2:
    puVar3 = operator_new(0x60);
    FUN_1002301a0(puVar3,param_1,2);
    *puVar3 = &PTR_FUN_1022028e8;
    break;
  case 3:
    puVar3 = operator_new(0x70);
    FUN_1002301a0(puVar3,param_1,3);
    *puVar3 = &PTR_FUN_102202a48;
    puVar3[0xd] = 0;
    puVar3[0xc] = 0;
    break;
  default:
    goto switchD_1002306db_default;
  }
  cVar1 = FUN_10031bc70(param_1,param_2);
  iVar4 = 1;
  if (cVar1 != '\0') {
    uVar2 = FUN_100319450(param_1);
    iVar4 = 3;
    if (uVar2 < 2) {
      iVar4 = (param_2 == 0) + 1 + (uint)(param_2 == 0);
    }
  }
  *(int *)(puVar3 + 6) = iVar4;
  *(undefined1 *)(puVar3 + 7) = 0;
  *(undefined4 *)((long)puVar3 + 0x34) = 0;
  *(undefined1 *)((long)puVar3 + 0x3b) = local_29;
  *(undefined2 *)((long)puVar3 + 0x39) = local_2b;
  *(undefined4 *)((long)puVar3 + 0x3c) = 0xffff;
  *(undefined4 *)(puVar3 + 8) = 0;
  *(undefined1 *)((long)puVar3 + 0x44) = 0;
switchD_1002306db_default:
  return puVar3;
}

