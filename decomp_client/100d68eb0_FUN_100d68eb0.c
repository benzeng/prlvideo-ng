
int FUN_100d68eb0(long param_1,uint param_2,undefined8 param_3,int param_4,void *param_5,
                 uint param_6)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  long lVar8;
  int *piVar9;
  uint *puVar10;
  ulong uVar11;
  int local_34;
  
  if (*(long *)(param_1 + 8) != 0) {
    puVar2 = *(undefined8 **)(*(long *)(param_1 + 8) + 8);
    if (puVar2 == (undefined8 *)0x0) {
      FUN_100df99c0("","WinRegistry",0,"OA00004.10:");
    }
    else {
      puVar10 = (uint *)*puVar2;
      if ((1 < *puVar10) || (*(long *)(puVar10 + 4) != 0x18)) {
        QByteArray::reallocData(puVar2,puVar10[1] + 1,puVar10[2] >> 0x1f);
        puVar10 = (uint *)*puVar2;
      }
      lVar3 = *(long *)(puVar10 + 4);
      if ((long)puVar10 + lVar3 != 0) {
        lVar8 = (ulong)param_2 + lVar3;
        if (*(short *)((long)puVar10 + lVar8) != 0x6b6e) {
          FUN_100df99c0("","WinRegistry",0,"OA00002.64:");
          return 0x8158009;
        }
        if (*(int *)((long)puVar10 + lVar8 + 0x24) == 0) {
          pcVar7 = "OA00002.65:";
        }
        else {
          uVar4 = FUN_100d680b0(param_1,(long)puVar10 + lVar8);
          if (uVar4 != 0xffffffff) {
            uVar11 = (ulong)(*(int *)((long)puVar10 +
                                     (ulong)uVar4 * 4 +
                                     (ulong)(*(int *)((long)puVar10 + lVar8 + 0x28) + 0x1004) +
                                     lVar3) + 0x1004);
            lVar1 = uVar11 + lVar3;
            if (*(short *)((long)puVar10 + lVar1) != 0x6b76) {
              FUN_100df99c0("","WinRegistry",0,"OA00002.67:");
              return 0x815800b;
            }
            uVar4 = *(uint *)((long)puVar10 + lVar1 + 4);
            uVar6 = 4;
            if (uVar4 != 0x80000000) {
              uVar6 = uVar4 & 0x7fffffff;
            }
            if (uVar6 != param_6) {
              iVar5 = FUN_100d69e90(*(undefined8 *)(param_1 + 8),param_6,&local_34);
              if (iVar5 != 0x8000000) {
                FUN_100df99c0("","WinRegistry",0,"OA00002.68:\t%x;\t%d",param_6,iVar5);
                return iVar5;
              }
              iVar5 = *(int *)((long)puVar10 + lVar1 + 8);
              if (1 < iVar5 + 1U) {
                FUN_100d6a060(*(undefined8 *)(param_1 + 8),iVar5 + 0x1000);
              }
              *(int *)((long)puVar10 + lVar3 + 8 + uVar11) = local_34 + -0x1000;
              *(uint *)((long)puVar10 + lVar3 + 4 + uVar11) = param_6;
              uVar4 = param_6;
            }
            if (uVar4 == 0x80000000) {
              piVar9 = (int *)((long)puVar10 + lVar1 + 0xc);
              *(undefined4 *)((long)puVar10 + lVar1 + 0xc) = 0;
            }
            else {
              if (((param_4 != 0) && (iVar5 = *(int *)((long)puVar10 + lVar1 + 0xc), iVar5 != 0)) &&
                 (iVar5 != param_4)) {
                FUN_100df99c0("","WinRegistry",0,"OA00002.69:");
                return 0x8158018;
              }
              piVar9 = (int *)((long)puVar10 + lVar1 + 8);
              if (-1 < (int)uVar4) {
                _memcpy((void *)((ulong)(*piVar9 + 0x1004) + lVar3 + (long)puVar10),param_5,
                        (ulong)param_6);
                uVar4 = *(uint *)((long)puVar10 + lVar8 + 0x40);
                if (uVar4 < param_6) {
                  uVar4 = param_6;
                }
                *(uint *)((long)puVar10 + lVar8 + 0x40) = uVar4;
                return 0x8000000;
              }
              *piVar9 = 0;
            }
            _memcpy(piVar9,param_5,(ulong)param_6);
            uVar4 = *(uint *)((long)puVar10 + lVar8 + 0x40);
            uVar6 = 4;
            if (3 < uVar4) {
              uVar6 = uVar4;
            }
            *(uint *)((long)puVar10 + lVar8 + 0x40) = uVar6;
            return 0x8000000;
          }
          pcVar7 = "OA00002.66:";
        }
        FUN_100df99c0("","WinRegistry",0,pcVar7);
        return 0x8158014;
      }
    }
  }
  FUN_100df99c0("","WinRegistry",0,"OA00002.63:");
  return 0x8158002;
}

