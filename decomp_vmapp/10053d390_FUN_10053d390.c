
undefined1 FUN_10053d390(long param_1,long param_2,long *param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  long lVar9;
  char *pcVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  undefined8 local_38;
  
  piVar7 = (int *)FUN_1002a6010(param_2);
  iVar4 = *piVar7;
  uVar2 = piVar7[2];
  puVar8 = (undefined4 *)FUN_1002a6010(param_2);
  if (iVar4 == 0x104) {
    uVar13 = 0;
    lVar9 = FUN_1002a6120(param_2,0,0);
    uVar3 = *(uint *)(lVar9 + 8);
    if (uVar2 <= *(uint *)(lVar9 + 8)) {
      uVar3 = uVar2;
    }
    LOCK();
    *(long *)(param_1 + 0x78) = param_2;
    UNLOCK();
    bVar14 = true;
    if (uVar3 != 0) {
      uVar13 = 0;
      uVar12 = 0;
      do {
        iVar4 = FUN_1002a5b80(lVar9,uVar12,&local_38);
        if (iVar4 == 0) break;
        if (uVar3 < iVar4 + uVar12) {
          iVar4 = uVar3 - uVar12;
        }
        iVar5 = (**(code **)(*param_3 + 0x18))(param_3,local_38,iVar4);
        if (iVar5 == -1) {
          iVar4 = (**(code **)(*param_3 + 0x20))(param_3);
          bVar14 = iVar4 == 0;
          goto LAB_10053d5a7;
        }
        uVar12 = iVar4 + uVar12;
        uVar13 = uVar13 + iVar5;
      } while (uVar12 != uVar3);
      bVar14 = true;
    }
LAB_10053d5a7:
    LOCK();
    lVar9 = *(long *)(param_1 + 0x78);
    *(long *)(param_1 + 0x78) = 0;
    UNLOCK();
    bVar14 = (bool)(uVar2 == uVar13 & bVar14);
    if (lVar9 == param_2) {
      uVar6 = 0x101;
      if (bVar14) {
        uVar6 = 0;
      }
      *puVar8 = uVar6;
      FUN_1004c07d0(*(undefined8 *)(param_1 + 0x18),param_2,0);
    }
    else if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","InvSharingHost",2,"op_write: request has been cancelled");
    }
    if (bVar14) {
      return 1;
    }
    if (DAT_1011b55f8 < 3) {
      return 0;
    }
    pcVar10 = "op_write: connection closed";
  }
  else {
    if (iVar4 != 0x103) {
      FUN_1004c07d0(*(undefined8 *)(param_1 + 0x18),param_2,0xf000001c);
      if (DAT_1011b55f8 < 1) {
        return 0;
      }
      pcVar10 = "unknown op";
      uVar11 = 1;
      goto LAB_10053d70a;
    }
    uVar13 = 0;
    lVar9 = FUN_1002a6120(param_2,0,1);
    uVar3 = *(uint *)(lVar9 + 8);
    if (uVar2 <= *(uint *)(lVar9 + 8)) {
      uVar3 = uVar2;
    }
    LOCK();
    *(long *)(param_1 + 0x78) = param_2;
    UNLOCK();
    bVar14 = true;
    if (uVar3 != 0) {
      uVar13 = 0;
      uVar12 = 0;
      do {
        iVar4 = FUN_1002a5b80(lVar9,uVar12,&local_38);
        if (iVar4 == 0) break;
        if (uVar3 < iVar4 + uVar12) {
          iVar4 = uVar3 - uVar12;
        }
        iVar5 = (**(code **)(*param_3 + 0x10))(param_3,local_38,iVar4);
        if (iVar5 == -1) {
          iVar4 = (**(code **)(*param_3 + 0x20))(param_3);
          bVar14 = iVar4 == 0;
          goto LAB_10053d66c;
        }
        uVar12 = iVar4 + uVar12;
        uVar13 = uVar13 + iVar5;
      } while (uVar12 != uVar3);
      bVar14 = true;
    }
LAB_10053d66c:
    LOCK();
    lVar1 = *(long *)(param_1 + 0x78);
    *(long *)(param_1 + 0x78) = 0;
    UNLOCK();
    bVar14 = (bool)(uVar2 == uVar13 & bVar14);
    if (lVar1 == param_2) {
      uVar6 = 0x101;
      if (bVar14) {
        uVar6 = 0;
      }
      *puVar8 = uVar6;
      *(uint *)(lVar9 + 0x10) = uVar13;
      FUN_1004c07d0(*(undefined8 *)(param_1 + 0x18),param_2,0);
    }
    else if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","InvSharingHost",2,"op_read: request has been cancelled");
    }
    if (bVar14) {
      return 1;
    }
    if (DAT_1011b55f8 < 3) {
      return 0;
    }
    pcVar10 = "op_read: connection closed";
  }
  uVar11 = 3;
LAB_10053d70a:
  FUN_1008e3970("","InvSharingHost",uVar11,pcVar10);
  return 0;
}

