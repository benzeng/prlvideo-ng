
void FUN_100378300(long param_1,char param_2)

{
  undefined8 uVar1;
  byte bVar2;
  char cVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  
  FUN_1003682f0(*(undefined8 *)(param_1 + 0x40));
  bVar2 = FUN_10037da90(*(undefined8 *)(param_1 + 0x38));
  if (bVar2 != 0) {
    FUN_100378b40(param_1);
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    cVar3 = FUN_10036a3f0();
    if (cVar3 != '\0') {
      FUN_10036a3a0(*(undefined8 *)(param_1 + 0x30),(ulong)bVar2 << 2);
      uVar1 = *(undefined8 *)(param_1 + 0x30);
      uVar4 = 1;
      if (param_2 == '\x01' && bVar2 == 0) {
        uVar5 = 0;
        if ((*(long *)(param_1 + 0x18) != 0) &&
           (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
          uVar5 = *(undefined8 *)(param_1 + 0x20);
        }
        uVar5 = FUN_100323dd0(uVar5);
        uVar5 = FUN_10018c2b0(uVar5);
        uVar4 = FUN_100114050(uVar5);
      }
      FUN_10036a330(uVar1,uVar4);
    }
  }
  if (bVar2 != 0) {
    return;
  }
  FUN_100378b40(param_1);
  return;
}

