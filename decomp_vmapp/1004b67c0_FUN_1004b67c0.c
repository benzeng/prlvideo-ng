
int FUN_1004b67c0(long param_1,long param_2)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  long local_38;
  
  QMutex::lock();
  bVar6 = true;
  puVar2 = (undefined4 *)FUN_1002a6010(param_2);
  iVar1 = -0xffffffe;
  switch(*puVar2) {
  case 5:
    if (*(short *)(param_2 + 0x14) == 8) {
      lVar3 = FUN_1002a6120(param_2,0,0);
      iVar1 = -0xffffffd;
      if (lVar3 == 0) goto LAB_1004b6b93;
      uVar4 = (ulong)*(uint *)(lVar3 + 8);
      lVar5 = *(long *)(param_1 + 0x58);
      uVar7 = *(long *)(param_1 + 0x60) - lVar5;
      if (uVar7 < uVar4) {
        FUN_10005a320((long *)(param_1 + 0x58));
        lVar5 = *(long *)(param_1 + 0x58);
      }
      else if ((uVar4 < uVar7) && (*(long *)(param_1 + 0x60) != lVar5 + uVar4)) {
        *(ulong *)(param_1 + 0x60) = lVar5 + uVar4;
      }
      FUN_1002a5990(lVar3,0,lVar5);
      lVar3 = FUN_1002a6120(param_2,1,0);
      local_38 = 0;
      if ((lVar3 != 0) && (local_38 = 0, 0x1f < *(uint *)(lVar3 + 8))) {
        local_38 = param_1 + 0x88;
        FUN_1002a5990(lVar3,0,local_38,0x20);
      }
      lVar3 = FUN_1002a6120(param_2,2,0);
      if (lVar3 == 0) {
        lVar3 = *(long *)(param_1 + 0x70);
        lVar5 = *(long *)(param_1 + 0x78);
        lVar8 = lVar5;
        if (lVar5 != lVar3) {
          *(long *)(param_1 + 0x78) = lVar3;
          lVar5 = lVar3;
          lVar8 = lVar3;
        }
      }
      else {
        uVar4 = (ulong)*(uint *)(lVar3 + 8);
        lVar5 = *(long *)(param_1 + 0x70);
        uVar7 = *(long *)(param_1 + 0x78) - lVar5;
        if (uVar7 < uVar4) {
          FUN_10005a320();
          lVar5 = *(long *)(param_1 + 0x70);
          uVar4 = (ulong)*(uint *)(lVar3 + 8);
        }
        else if ((uVar4 < uVar7) && (*(long *)(param_1 + 0x78) != lVar5 + uVar4)) {
          *(ulong *)(param_1 + 0x78) = lVar5 + uVar4;
        }
        FUN_1002a5990(lVar3,0,lVar5,uVar4);
        lVar5 = *(long *)(param_1 + 0x70);
        lVar8 = *(long *)(param_1 + 0x78);
      }
      iVar1 = FUN_100527300(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x58),
                            *(int *)(param_1 + 0x60) - (int)*(undefined8 *)(param_1 + 0x58),local_38
                            ,lVar5,(int)lVar8 - (int)lVar5,param_2);
      if (iVar1 == -1) {
        bVar6 = false;
        QMutex::unlock();
        iVar1 = -1;
        FUN_1002af2c0(*(undefined8 *)(param_1 + 0x50),1);
        goto LAB_1004b6b93;
      }
    }
    else {
      iVar1 = -0xffffffd;
      if (0 < DAT_1011b55f8) {
        FUN_1008e3970("CHRSERVER","ChrToolSrv",1,"Invalid inline data size (need %ld; is %d)",8);
      }
    }
    break;
  case 6:
    iVar1 = -0xffffffd;
    if (*(short *)(param_2 + 0x14) == 0x10) {
      lVar3 = FUN_1002a6010(param_2);
      iVar1 = FUN_100528210(*(undefined8 *)(param_1 + 0x10),lVar3 + 4);
    }
    break;
  case 0xb:
    lVar3 = FUN_1002a6120(param_2,0,0);
    iVar1 = -0xffffffd;
    if (lVar3 == 0) goto LAB_1004b6b93;
    uVar4 = (ulong)*(uint *)(lVar3 + 8);
    lVar5 = *(long *)(param_1 + 0x58);
    uVar7 = *(long *)(param_1 + 0x60) - lVar5;
    if (uVar7 < uVar4) {
      FUN_10005a320();
      lVar5 = *(long *)(param_1 + 0x58);
      uVar4 = (ulong)*(uint *)(lVar3 + 8);
    }
    else if ((uVar4 < uVar7) && (*(long *)(param_1 + 0x60) != lVar5 + uVar4)) {
      *(ulong *)(param_1 + 0x60) = lVar5 + uVar4;
    }
    FUN_1002a5990(lVar3,0,lVar5,uVar4);
    lVar3 = FUN_1002a6120(param_2,1,0);
    if (lVar3 == 0) goto LAB_1004b6b93;
    if (*(uint *)(lVar3 + 8) < 0x20) {
      if (1 < DAT_1011b55f8) {
        FUN_1008e3970("CHRSERVER","ChrToolSrv",2,
                      "Invalid size of window content data (is %d; need %ld)",*(uint *)(lVar3 + 8),
                      0x20);
      }
      goto LAB_1004b6b93;
    }
    iVar1 = FUN_100528650(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x58),
                          *(int *)(param_1 + 0x60) - (int)*(undefined8 *)(param_1 + 0x58),param_2);
    if (iVar1 == -1) {
      bVar6 = false;
      QMutex::unlock();
      iVar1 = -1;
      FUN_1002af2c0(*(undefined8 *)(param_1 + 0x50),1);
      goto LAB_1004b6b93;
    }
    break;
  case 0xc:
    iVar1 = 0;
    break;
  case 0x10:
    iVar1 = -0xffffffd;
    if (0xf < *(ushort *)(param_2 + 0x14)) {
      lVar3 = FUN_1002a6010(param_2);
      iVar1 = FUN_1005285d0(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(lVar3 + 4),
                            *(undefined4 *)(lVar3 + 8));
    }
  }
  bVar6 = false;
  QMutex::unlock();
  FUN_1002af2c0(*(undefined8 *)(param_1 + 0x50),0);
LAB_1004b6b93:
  if (bVar6) {
    QMutex::unlock();
  }
  return iVar1;
}

