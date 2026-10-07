
void FUN_1000acd00(long param_1,ulong param_2,int param_3,int param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  bool bVar5;
  
  if (DAT_1011ccc18 != (code *)0x0) {
    (*DAT_1011ccc18)(0,0x12,(long)param_3 | param_2 << 0x20);
  }
  lVar1 = *(long *)(param_1 + 0x1938);
  if ((lVar1 != 0) && ((*(ulong *)(lVar1 + 0xd000) & param_2) == 0)) {
    uVar3 = *(ulong *)(lVar1 + 0xd000);
    do {
      LOCK();
      uVar4 = *(ulong *)(lVar1 + 0xd000);
      bVar5 = uVar3 == uVar4;
      if (bVar5) {
        *(ulong *)(lVar1 + 0xd000) = param_2 | uVar3;
        uVar4 = uVar3;
      }
      UNLOCK();
      uVar3 = uVar4;
    } while (!bVar5);
    if (((param_2 & uVar4) == 0) && ((*(byte *)(param_1 + 0x1ab1) & 2) != 0)) {
      iVar2 = *(int *)(param_1 + 0x1164);
      if (iVar2 == 0) {
        iVar2 = *(int *)(param_1 + 0x5d8);
        *(int *)(param_1 + 0x1164) = iVar2;
      }
      iVar2 = (**(code **)(**(long **)(param_1 + 0x1950) + 0xd8))
                        (*(long **)(param_1 + 0x1950),(int)(1L << ((byte)iVar2 & 0x3f)) + -1,
                         param_3 != 0 | (param_4 != 0) * '\x02');
      if ((iVar2 < 0) && (0 < DAT_1011b55f8)) {
        FUN_1008e3970("","vm",1,"%s: KickVcpu failed","SendVcpuSignal");
        return;
      }
    }
  }
  return;
}

