
void FUN_10040e960(undefined8 *param_1,undefined8 param_2,double *param_3)

{
  double dVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  FUN_10040e590();
  *param_1 = &PTR_FUN_100bc0120;
  param_1[0xd] = 0;
  if ((*(char *)(param_1 + 8) == '\0') || (*(char *)((long)param_1 + 0x41) != '\0')) {
    lVar2 = param_1[0xc];
  }
  else {
    if (param_1[0xc] == 0) {
      return;
    }
    lVar2 = param_1[7];
  }
  if (lVar2 != 0) {
    uVar4 = (ulong)*(uint *)(param_3 + 3);
    dVar1 = *param_3;
    puVar3 = operator_new__(((long)((double)uVar4 * dVar1) & 0xffffffffU) + 0x74);
    param_1[0xd] = puVar3;
    *(undefined4 *)(puVar3 + 0xe) = 0;
    puVar3[0xd] = 0;
    puVar3[0xc] = 0;
    puVar3[0xb] = 0;
    puVar3[10] = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    FUN_1007d7110((long)puVar3 + 0x5c,((long)((double)uVar4 * dVar1) & 0xffffffffU) / uVar4,uVar4);
    lVar2 = param_1[0xd];
    *(undefined4 *)(lVar2 + 8) = *(undefined4 *)((long)param_3 + 0x1c);
    *(undefined4 *)(lVar2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return;
}

