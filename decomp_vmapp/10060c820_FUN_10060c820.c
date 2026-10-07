
int FUN_10060c820(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  char *pcVar9;
  ulong uVar10;
  
  puVar6 = _malloc((ulong)*(uint *)(param_1 + 9));
  if (puVar6 == (undefined8 *)0x0) {
    FUN_1008e3970("","vdisk",0,"No memory for block buffer");
    return -0x7ffeffed;
  }
  iVar5 = FUN_10060a920(param_1 + 0x191,param_2);
  if (iVar5 < 0) {
    pcVar9 = "Allocation file writing failed, err = 0x%X";
  }
  else {
    ___bzero(puVar6,(int)param_1[9]);
    FUN_100606a70(param_1 + 0x44,puVar6);
    uVar1 = *(uint *)((long)param_1 + 0x2c);
    uVar2 = *(uint *)(param_1 + 9);
    uVar7 = (**(code **)(*param_2 + 0x2e0))(param_2);
    iVar5 = FUN_100603fb0(param_1,param_2,((ulong)uVar1 * (ulong)uVar2) / uVar7,puVar6,(ulong)uVar2)
    ;
    if (iVar5 < 0) {
      pcVar9 = "Journal info block writing failed, err = 0x%X";
    }
    else {
      uVar10 = (ulong)*(uint *)(param_1 + 9);
      ___bzero(puVar6,uVar10);
      *(undefined4 *)(puVar6 + 5) = *(undefined4 *)((long)param_1 + 0x2fc);
      puVar6[4] = *(undefined8 *)((long)param_1 + 0x2f4);
      puVar6[3] = *(undefined8 *)((long)param_1 + 0x2ec);
      puVar6[2] = *(undefined8 *)((long)param_1 + 0x2e4);
      uVar3 = *(undefined8 *)((long)param_1 + 0x2d4);
      puVar6[1] = *(undefined8 *)((long)param_1 + 0x2dc);
      *puVar6 = uVar3;
      uVar7 = *(ulong *)((long)param_1 + 0x244);
      uVar8 = (**(code **)(*param_2 + 0x2e0))(param_2);
      iVar5 = FUN_100603fb0(param_1,param_2,(uVar7 - uVar7 % uVar10) / uVar8,puVar6,uVar10);
      if (iVar5 < 0) {
        pcVar9 = "Journal header writing failed, err = 0x%X";
      }
      else {
        iVar5 = FUN_10060cc70(param_1,param_2,(int)param_1[0x1e],
                              *(undefined4 *)((long)param_1 + 0xf4));
        if (iVar5 < 0) {
          pcVar9 = "Ext. file B-Tree cleaning failed 0x%X";
LAB_10060cbfd:
          FUN_1008e3970("","vdisk",0,pcVar9,iVar5);
          goto LAB_10060cc4d;
        }
        iVar5 = FUN_10060a350(param_1 + 0x60,param_2,(int)param_1[0x1e]);
        if (iVar5 < 0) {
          pcVar9 = "Ext. file B-Tree header writing failed, err = 0x%X";
        }
        else {
          iVar5 = FUN_10060a350(param_1 + 0x85,param_2,(int)param_1[0x32]);
          if (iVar5 < 0) {
            pcVar9 = "Attr. file B-Tree header writing failed, err = 0x%X";
          }
          else {
            iVar5 = FUN_10060cc70(param_1,param_2,(int)param_1[0x28],
                                  *(undefined4 *)((long)param_1 + 0x144));
            if (iVar5 < 0) {
              pcVar9 = "Cat. file B-Tree cleaning failed 0x%X";
              goto LAB_10060cbfd;
            }
            iVar5 = FUN_10060ce80(param_1,param_2,
                                  (int)param_1[0x28] +
                                  ((uint)*(ushort *)(param_1 + 0xb0) * (int)param_1[0xae]) /
                                  *(uint *)(param_1 + 9));
            if (iVar5 < 0) {
              FUN_1008e3970("","vdisk",0,"System files writing failed, err = 0x%X",iVar5);
            }
            iVar5 = FUN_10060a350(param_1 + 0xaa,param_2,(int)param_1[0x28]);
            if (iVar5 < 0) {
              pcVar9 = "Cat. file B-Tree header writing failed, err = 0x%X";
            }
            else {
              ___bzero(puVar6,(int)param_1[9]);
              FUN_100606d50(param_1 + 4,puVar6 + 0x80);
              lVar4 = param_1[9];
              (**(code **)(*param_2 + 0x2e0))(param_2);
              iVar5 = FUN_100603fb0(param_1,param_2,0,puVar6,(int)lVar4);
              if (iVar5 < 0) {
                pcVar9 = "Primary header writing failed, err = 0x%X";
              }
              else {
                ___bzero(puVar6,(int)param_1[9]);
                uVar7 = param_1[3];
                uVar8 = param_1[2] * uVar7 - 0x400;
                FUN_100606d50(param_1 + 4,(long)puVar6 + uVar8 % uVar7);
                iVar5 = FUN_100603fb0(param_1,param_2,uVar8 / uVar7,puVar6,param_1[3]);
                if (-1 < iVar5) goto LAB_10060cc4d;
                pcVar9 = "Backup header writing failed, err = 0x%X";
              }
            }
          }
        }
      }
    }
  }
  FUN_1008e3970("","vdisk",0,pcVar9,iVar5);
  (**(code **)(*param_1 + 0x20))(param_1);
LAB_10060cc4d:
  _free(puVar6);
  return iVar5;
}

