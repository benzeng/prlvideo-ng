
void FUN_1005482e0(long param_1,undefined1 *param_2,ulong param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  
  if (param_3 != 0) {
    do {
      cVar1 = FUN_100544e10(param_1 + 0x50,1,1);
      if (cVar1 == '\0') {
        return;
      }
      uVar2 = (uint)param_3;
      if (0x200000 < param_3) {
        uVar2 = 0x200000;
      }
      uVar4 = (ulong)uVar2;
      if ((*(char *)(param_1 + 0x68) != '\0') && (puVar3 = param_2, uVar2 != 0)) {
        do {
          *puVar3 = *puVar3;
          puVar3 = puVar3 + 0x1000;
        } while (puVar3 < param_2 + uVar4);
      }
      FUN_100544e30(param_2,uVar4);
      FUN_100544e10(param_1 + 0x50,0,0);
      if (param_4 != 0) {
        FUN_1007685b0(1000 / (ulong)param_4);
      }
      param_3 = param_3 - uVar4;
      param_2 = param_2 + uVar4;
    } while (param_3 != 0);
  }
  return;
}

