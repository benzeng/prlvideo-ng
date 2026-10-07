
void FUN_10008c7f0(ulong *param_1,uint param_2,uint param_3)

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
    if ((uVar4 != 0) && (param_2 < uVar4 + param_2)) {
      uVar3 = (ulong)param_2;
LAB_10008c820:
      do {
        cVar2 = *(char *)(param_1[0x1c] + uVar3);
        if (cVar2 != -1) {
          pcVar1 = (char *)(param_1[0x1c] + uVar3);
          LOCK();
          bVar5 = cVar2 == *pcVar1;
          if (bVar5) {
            *pcVar1 = cVar2 + -1;
          }
          UNLOCK();
          if (!bVar5) goto LAB_10008c820;
        }
        uVar3 = uVar3 + 1;
      } while ((uint)uVar3 < uVar4 + param_2);
    }
  }
  return;
}

