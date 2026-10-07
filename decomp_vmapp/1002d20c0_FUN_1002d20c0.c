
void FUN_1002d20c0(long *param_1,uint param_2,long param_3,int param_4,uint param_5)

{
  ulong *puVar1;
  byte *pbVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  ulong uVar6;
  byte bVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  bool bVar14;
  
  if ((param_2 == 0) || (param_1[(ulong)param_2 * 5 + 0x29a] != 0)) {
    if (param_4 != 0) {
      uVar11 = (ulong)param_2;
      puVar1 = (ulong *)(param_1 + uVar11 * 5 + 0x29a);
      pbVar2 = (byte *)(param_1 + uVar11 * 5 + 0x29c);
      piVar3 = (int *)((long)param_1 + uVar11 * 0x28 + 0x14dc);
      lVar13 = param_3;
      do {
        uVar6 = *puVar1;
        *(uint *)(param_3 + 0xc) = *(uint *)(param_3 + 0xc) & 0xfffffffe | *pbVar2 & 1;
        *piVar3 = *piVar3 + -1;
        if (*piVar3 == 0) {
          uVar9 = (ulong)((int)param_1[uVar11 * 5 + 0x29b] + 1) %
                  (ulong)*(ushort *)(param_1[8] + 0x588 + uVar11 * 0x20);
          bVar7 = *pbVar2;
          if ((int)uVar9 == 0) {
            bVar7 = bVar7 ^ 1;
            *pbVar2 = bVar7;
          }
          FUN_1002d2890(param_1,param_2,uVar9,bVar7 & 1);
          uVar9 = *puVar1;
        }
        else {
          uVar9 = *puVar1 + 0x10;
          *puVar1 = uVar9;
        }
        if (uVar9 == (*(ulong *)(param_1[8] + 0x598 + uVar11 * 0x20) & 0xfffffffffffffff0)) {
          if (-1 < DAT_1011c568c) {
            FUN_1008e3970("","USB",0,"[XHC][ER%d] FULL",param_2);
          }
          *(undefined1 *)(lVar13 + 0xb) = 0x15;
        }
        if ((lVar13 != 0) && (uVar6 != 0)) {
          FUN_10008c9b0(DAT_1011c3688,uVar6,lVar13,0x10);
        }
        if (1 < DAT_1011c568c) {
          uVar10 = FUN_1002da200(lVar13,uVar6);
          FUN_1008e3970("","USB",0,"[XHC][ER%d] %s",param_2,uVar10);
        }
        lVar13 = lVar13 + 0x10;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
    }
    if (2 < DAT_1011c568c) {
      lVar13 = param_1[8];
      lVar12 = (ulong)param_2 * 0x20;
      uVar8 = *(uint *)(lVar13 + 0x580 + lVar12);
      uVar5 = *(uint *)(lVar13 + 0x584 + lVar12);
      FUN_1008e3970("","USB",0,
                    "[XHC][ER%d] Interrup Requested (EBH:%lld IP:%d IE:%d IMODC:%d IMODI:%d)",
                    param_2,*(ulong *)(lVar13 + 0x598 + lVar12) >> 3 & 1,uVar8 & 1,uVar8 >> 1 & 1,
                    uVar5 >> 0x10,uVar5 & 0xffff);
    }
    lVar13 = param_1[8];
    lVar12 = (ulong)param_2 * 0x20;
    uVar8 = *(uint *)(lVar13 + 0x580 + lVar12);
    do {
      puVar4 = (uint *)(lVar13 + 0x580 + lVar12);
      LOCK();
      uVar5 = *puVar4;
      bVar14 = uVar8 == uVar5;
      if (bVar14) {
        *puVar4 = uVar8 | 1;
        uVar5 = uVar8;
      }
      uVar8 = uVar5;
      UNLOCK();
    } while (!bVar14);
    if ((*(byte *)(param_1[8] + 0x580 + lVar12) & 2) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001002d236b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xa0))(param_1,(short)(param_5 | 1),param_2,param_5 | 1);
      return;
    }
  }
  else {
    FUN_1002d2890(param_1,param_2,0,1);
    if ((param_1[(ulong)param_2 * 5 + 0x29a] == 0) && (2 < DAT_1011c568c)) {
      FUN_1008e3970("","USB",0,"[XHC][ER%d] EventTRB skiped due to ring not initialized!",param_2);
      return;
    }
  }
  return;
}

