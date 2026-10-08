
undefined8 *
FUN_1000e4a60(undefined8 *param_1,undefined8 *param_2,long *param_3,undefined8 *param_4)

{
  uint *puVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar1 = (uint *)*param_2;
  if (*puVar1 < 2) {
    puVar4 = (undefined8 *)QListData::insert((int)param_2);
  }
  else {
    puVar4 = (undefined8 *)
             FUN_1000e7550(param_2,(ulong)(*param_3 - (long)(puVar1 + (ulong)puVar1[2] * 2 + 4)) >>
                                   3 & 0xffffffff,1);
  }
  puVar5 = operator_new(0x20);
  *puVar5 = *param_4;
  piVar2 = (int *)param_4[1];
  puVar5[1] = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  uVar3 = param_4[2];
  puVar5[3] = param_4[3];
  puVar5[2] = uVar3;
  *puVar4 = puVar5;
  *param_1 = puVar4;
  return param_1;
}

