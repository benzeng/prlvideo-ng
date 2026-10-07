
void FUN_10008c590(ulong *param_1,uint param_2,uint param_3)

{
  char *pcVar1;
  char cVar2;
  ulong uVar3;
  uint uVar4;
  bool bVar5;
  
  if (*(char *)((long)param_1 + 0xd9) != '\0') {
    uVar4 = (int)(*param_1 >> 0xc) - param_2;
    if (param_3 < uVar4) {
      uVar4 = param_3;
    }
    if (uVar4 != 0) {
      uVar3 = (ulong)param_2;
      if ((DAT_1011c3740 != 0) && (*(int *)(DAT_1011c3740 + 0x10) != 0)) {
        FUN_1000d60e0(DAT_1011c3740,uVar3,uVar4 << 0xc);
      }
      uVar4 = uVar4 + param_2;
      while (param_2 < uVar4) {
        do {
          cVar2 = *(char *)(param_1[0x1c] + uVar3);
          if (cVar2 == -1) break;
          pcVar1 = (char *)(param_1[0x1c] + uVar3);
          LOCK();
          bVar5 = cVar2 == *pcVar1;
          if (bVar5) {
            *pcVar1 = cVar2 + '\x01';
          }
          UNLOCK();
        } while (!bVar5);
        uVar3 = uVar3 + 1;
        param_2 = (uint)uVar3;
      }
    }
  }
  return;
}

