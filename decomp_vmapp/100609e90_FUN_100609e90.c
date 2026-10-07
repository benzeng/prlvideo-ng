
int FUN_100609e90(long param_1,long *param_2,uint param_3)

{
  byte bVar1;
  undefined2 uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  void *pvVar6;
  ulong uVar7;
  ulong uVar8;
  void *pvVar9;
  char *pcVar10;
  uint uVar11;
  
  lVar4 = *(long *)(param_1 + 8);
  uVar11 = *(uint *)(lVar4 + 0x48);
  uVar8 = (ulong)uVar11;
  pvVar6 = _malloc(uVar8);
  if (pvVar6 == (void *)0x0) {
    pcVar10 = "No memory for block buffer";
LAB_100609f4d:
    FUN_1008e3970("","vdisk",0,pcVar10);
    iVar5 = -0x7ffeffed;
  }
  else {
    uVar3 = *(uint *)(lVar4 + 0x48);
    uVar7 = (**(code **)(*param_2 + 0x2e0))(param_2);
    iVar5 = FUN_100603f80(lVar4,param_2,((ulong)uVar3 * (ulong)param_3) / uVar7,pvVar6,uVar8);
    if (iVar5 < 0) {
      pcVar10 = "Block %u reading failed";
LAB_100609f76:
      FUN_1008e3970("","vdisk",0,pcVar10,param_3);
    }
    else {
      FUN_100607a80(param_1 + 0x10,pvVar6);
      bVar1 = *(byte *)(param_1 + 0x18);
      if (bVar1 == 1) {
        uVar7 = (ulong)*(ushort *)(param_1 + 0x30);
        if (*(ushort *)(param_1 + 0x30) != uVar11) {
          pvVar6 = _realloc(pvVar6,uVar7);
          if (pvVar6 == (void *)0x0) {
            pcVar10 = "No memory for node buffer";
            goto LAB_100609f4d;
          }
          lVar4 = *(long *)(param_1 + 8);
          uVar11 = *(uint *)(lVar4 + 0x48);
          uVar8 = (**(code **)(*param_2 + 0x2e0))(param_2);
          iVar5 = FUN_100603f80(lVar4,param_2,((ulong)uVar11 * (ulong)param_3) / uVar8,pvVar6,uVar7)
          ;
          if (iVar5 < 0) {
            pcVar10 = "Node %u re-reading failed";
            goto LAB_100609f76;
          }
          FUN_100607a80(param_1 + 0x10,pvVar6);
          uVar8 = uVar7;
        }
        uVar2 = *(undefined2 *)((uVar8 - 8) + (long)pvVar6);
        *(ushort *)(param_1 + 0x110) = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
        uVar2 = *(undefined2 *)((uVar8 - 6) + (long)pvVar6);
        *(ushort *)(param_1 + 0x10e) = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
        uVar2 = *(undefined2 *)((uVar8 - 4) + (long)pvVar6);
        *(ushort *)(param_1 + 0x10c) = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
        uVar2 = *(undefined2 *)((uVar8 - 2) + (long)pvVar6);
        *(ushort *)(param_1 + 0x10a) = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
        uVar11 = (int)uVar8 + 0xff00;
        *(short *)(param_1 + 0x112) = (short)uVar11;
        pvVar9 = _malloc((ulong)(uVar11 & 0xffff));
        *(void **)(param_1 + 0x118) = pvVar9;
        if (pvVar9 == (void *)0x0) {
          FUN_1008e3970("","vdisk",0,"No memory for bitmap buffer");
          iVar5 = -0x7ffeffed;
        }
        else {
          _memcpy(pvVar9,(void *)((long)pvVar6 + 0xf8),(ulong)(uVar11 & 0xffff));
          *(undefined4 *)(param_1 + 0x120) = 0;
          if ((uVar11 & 0xffff) * 8 < *(uint *)(param_1 + 0x34)) {
            uVar11 = *(uint *)(param_1 + 0x34) + (uVar11 & 0xffff) * -8 + -0xa1 +
                     (uint)*(ushort *)(param_1 + 0x30) * 8;
            *(uint *)(param_1 + 0x120) =
                 uVar11 - uVar11 % ((uint)*(ushort *)(param_1 + 0x30) * 8 - 0xa0);
          }
        }
      }
      else {
        if (bVar1 < 2) {
          if (bVar1 == 0) {
            pcVar10 = "Index Node";
          }
          else if (bVar1 == 1) {
            pcVar10 = "Head Node";
          }
          else {
LAB_10060a121:
            pcVar10 = "Unknown node kind";
          }
        }
        else if (bVar1 == 2) {
          pcVar10 = "Map Node";
        }
        else {
          if (bVar1 != 0xff) goto LAB_10060a121;
          pcVar10 = "Leaf Node";
        }
        FUN_1008e3970("","vdisk",0,"Block %u has wrong kind \'%s\'",param_3,pcVar10);
        iVar5 = -0x7ffdf000;
      }
    }
    _free(pvVar6);
  }
  return iVar5;
}

