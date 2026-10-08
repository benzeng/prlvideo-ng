
int _xmlNanoHTTPRead(long param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  int local_30;
  int local_2c;
  
  if (param_1 == 0) {
    local_30 = -1;
  }
  else if (param_2 == (undefined1 *)0x0) {
    local_30 = -1;
  }
  else if (param_3 < 1) {
    local_30 = 0;
  }
  else {
    do {
      if ((long)param_3 <= *(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x58)) break;
      iVar1 = FUN_1008fbedf(param_1);
    } while (0 < iVar1);
    local_2c = param_3;
    if (*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x58) < (long)param_3) {
      local_2c = (int)*(undefined8 *)(param_1 + 0x50) - (int)*(undefined8 *)(param_1 + 0x58);
    }
    puVar3 = *(undefined1 **)(param_1 + 0x58);
    for (lVar2 = (long)local_2c; lVar2 != 0; lVar2 = lVar2 + -1) {
      *param_2 = *puVar3;
      puVar3 = puVar3 + 1;
      param_2 = param_2 + 1;
    }
    *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + (long)local_2c;
    local_30 = local_2c;
  }
  return local_30;
}

