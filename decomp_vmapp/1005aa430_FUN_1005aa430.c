
void FUN_1005aa430(uint *param_1,uint param_2,int param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  bool bVar5;
  
  *param_1 = *param_1 | param_4;
  if (param_2 < param_3 + param_2) {
    do {
      lVar3 = *(long *)(param_1 + 2);
      uVar4 = *(uint *)(lVar3 + (ulong)(param_2 >> 5) * 4);
      do {
        puVar1 = (uint *)(lVar3 + (ulong)(param_2 >> 5) * 4);
        LOCK();
        uVar2 = *puVar1;
        bVar5 = uVar4 == uVar2;
        if (bVar5) {
          *puVar1 = 1 << ((byte)param_2 & 0x1f) | uVar4;
          uVar2 = uVar4;
        }
        uVar4 = uVar2;
        UNLOCK();
      } while (!bVar5);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

