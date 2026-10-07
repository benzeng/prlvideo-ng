
bool FUN_1004b9a20(long param_1,ulong param_2)

{
  double dVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  undefined8 local_60;
  int local_58;
  int local_54;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  
  uVar5 = (uint)(param_2 >> 0x10) & 0xffff ^ (uint)param_2;
  uVar9 = (ulong)(uVar5 >> 8 ^ uVar5) & 0xff;
  plVar2 = *(long **)(param_1 + 0x818 + uVar9 * 8);
  if (plVar2 != (long *)0x0) {
    plVar11 = (long *)(param_1 + 0x818 + uVar9 * 8);
    do {
      plVar10 = plVar2;
      if (*(uint *)(plVar10 + 1) == (uint)param_2) {
        *(undefined1 *)((long)plVar10 + 0x21) = 1;
        pcVar4 = DAT_1011ccd98;
        uVar6 = (*DAT_1011ccc38)();
        iVar7 = (*pcVar4)(uVar6,(int)plVar10[1],&local_50);
        if (iVar7 == 0) {
          lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x30);
          iVar7 = *(int *)(lVar3 + 0x1c);
          dVar1 = *(double *)(lVar3 + 0x240);
          iVar8 = (int)((double)((int)local_50 - *(int *)(lVar3 + 0x18)) * dVar1);
          *(int *)(plVar10 + 0xb) = iVar8;
          iVar7 = (int)((double)((int)local_48 - iVar7) * dVar1);
          *(int *)((long)plVar10 + 0x5c) = iVar7;
          *(int *)(plVar10 + 0xc) = (int)((double)(int)local_40 * dVar1 + (double)iVar8);
          *(int *)((long)plVar10 + 100) = (int)((double)(int)local_38 * dVar1 + (double)iVar7);
        }
        pcVar4 = DAT_1011ccd98;
        uVar6 = (*DAT_1011ccc38)();
        iVar7 = (*pcVar4)(uVar6,param_2 & 0xffffffff,&local_50);
        if (iVar7 == 0) {
          dVar1 = *(double *)(*(long *)(*(long *)(param_1 + 0x10) + 0x30) + 0x240);
          local_60 = 0;
          local_58 = (int)(local_40 * dVar1);
          local_54 = (int)(dVar1 * local_38);
          FUN_1004bf6a0(param_1 + 0x1030,&local_60);
        }
        return *plVar11 != 0;
      }
      plVar2 = (long *)*plVar10;
      plVar11 = plVar10;
    } while ((long *)*plVar10 != (long *)0x0);
  }
  return false;
}

