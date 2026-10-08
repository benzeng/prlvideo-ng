
ulong FUN_100bccc30(long param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  void *pvVar9;
  undefined8 uVar10;
  uint uVar11;
  int local_34;
  ulong uVar12;
  
  uVar7 = (**(code **)(*(long *)(param_1 + 8) + 0x60))(param_1,0x11e0,0x11e1,4,0x4000,&local_34);
  if (local_34 == 0) goto LAB_100bccd53;
  if ((long)uVar7 < 6) {
    uVar10 = 0x870;
LAB_100bccd2f:
    FUN_100c62ee0(0x14,0x11b,0x9f,"s3_clnt.c",uVar10);
    uVar10 = 0x32;
LAB_100bccd39:
    FUN_100bd2dc0(param_1,2,uVar10);
  }
  else {
    pbVar5 = *(byte **)(param_1 + 0x58);
    bVar1 = *pbVar5;
    bVar2 = pbVar5[1];
    bVar3 = pbVar5[2];
    bVar4 = pbVar5[3];
    uVar11 = (uint)CONCAT11(pbVar5[4],pbVar5[5]);
    uVar12 = (ulong)uVar11;
    if (uVar11 + 6 != uVar7) {
      uVar10 = 0x87b;
      goto LAB_100bccd2f;
    }
    uVar7 = 1;
    if (uVar11 == 0) goto LAB_100bccd53;
    lVar8 = *(long *)(param_1 + 0x130);
    if (*(int *)(lVar8 + 0x44) != 0) {
      lVar6 = *(long *)(param_1 + 0x270);
      if ((*(uint *)(lVar6 + 0x40) & 1) != 0) {
        if ((*(uint *)(lVar6 + 0x40) & 0x200) == 0) {
          FUN_100be99a0(lVar6,lVar8);
        }
        else if (*(code **)(lVar6 + 0x58) != (code *)0x0) {
          (**(code **)(lVar6 + 0x58))(lVar6,lVar8);
        }
      }
      lVar8 = FUN_100be87f0(*(undefined8 *)(param_1 + 0x130),0);
      if (lVar8 != 0) {
        FUN_100be8ab0(*(undefined8 *)(param_1 + 0x130));
        *(long *)(param_1 + 0x130) = lVar8;
        goto LAB_100bccda0;
      }
      FUN_100c62ee0(0x14,0x11b,0x41,"s3_clnt.c",0x89a);
      uVar10 = 0x50;
      goto LAB_100bccd39;
    }
LAB_100bccda0:
    if (*(long *)(lVar8 + 0x140) != 0) {
      FUN_100bf3910();
      *(undefined8 *)(*(long *)(param_1 + 0x130) + 0x148) = 0;
    }
    pvVar9 = (void *)FUN_100bf3540(uVar12,"s3_clnt.c",0x8a6);
    *(void **)(*(long *)(param_1 + 0x130) + 0x140) = pvVar9;
    if (pvVar9 != (void *)0x0) {
      _memcpy(pvVar9,pbVar5 + 6,uVar12);
      lVar8 = *(long *)(param_1 + 0x130);
      *(ulong *)(lVar8 + 0x150) =
           ((ulong)bVar3 << 8 | (ulong)bVar2 << 0x10 | (ulong)bVar1 << 0x18) + (ulong)bVar4;
      *(ulong *)(lVar8 + 0x148) = uVar12;
      uVar10 = FUN_100c6ca20();
      FUN_100c65f10(pbVar5 + 6,uVar12,lVar8 + 0x48,lVar8 + 0x44,uVar10,0);
      goto LAB_100bccd53;
    }
    FUN_100c62ee0(0x14,0x11b,0x41,"s3_clnt.c",0x8a8);
  }
  *(undefined4 *)(param_1 + 0x48) = 5;
  uVar7 = 0xffffffff;
LAB_100bccd53:
  return uVar7 & 0xffffffff;
}

