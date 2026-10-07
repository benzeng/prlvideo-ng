
void FUN_1002b24f0(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char *pcVar5;
  
  puVar4 = operator_new(0x40,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (puVar4 == (undefined8 *)0x0) {
    if (*(char *)((long)param_2 + 0x1c) == '\0') {
      pcVar5 = "abs";
    }
    else {
      pcVar5 = "rel";
    }
    FUN_1008e3970("","LocalDevices",0,"[%s] Couldn\'t store pending_move (%d, %d, %d, %d, 0x%x, %s)"
                  ,*(undefined8 *)(param_1 + 0xc0),*(undefined4 *)param_2,
                  *(undefined4 *)((long)param_2 + 4),*(undefined4 *)(param_2 + 1),
                  *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 3),pcVar5);
    plVar1 = (long *)(*(long *)(param_1 + 0x88) + 0xf0);
    *plVar1 = *plVar1 + 1;
  }
  else {
    puVar4[7] = param_2[7];
    puVar4[6] = param_2[6];
    puVar4[5] = param_2[5];
    puVar4[4] = param_2[4];
    puVar4[3] = param_2[3];
    puVar4[2] = param_2[2];
    uVar2 = *param_2;
    puVar4[1] = param_2[1];
    *puVar4 = uVar2;
    puVar3 = *(undefined8 **)(param_1 + 0x20);
    *(undefined8 **)(param_1 + 0x20) = puVar4 + 4;
    puVar4[4] = param_1 + 0x18;
    puVar4[5] = puVar3;
    *puVar3 = puVar4 + 4;
  }
  return;
}

