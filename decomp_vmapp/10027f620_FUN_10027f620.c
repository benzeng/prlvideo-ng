
undefined1 FUN_10027f620(long param_1)

{
  long *plVar1;
  int *piVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 uVar14;
  long *local_70;
  long local_68 [2];
  undefined4 local_58;
  long local_48 [2];
  undefined4 local_38;
  
  lVar5 = FUN_100257d80();
  if (*(int *)(lVar5 + 0x31c3c) == 0) {
    return 2;
  }
  lVar5 = FUN_100257d80(param_1);
  bVar3 = *(byte *)(lVar5 + 0x31c1c);
  if (bVar3 == 0) {
    FUN_1008e3970("","LocalDevices",0,"[Scsi] Zero mailbox count");
    return 1;
  }
  lVar5 = FUN_100257d80(param_1);
  local_48[0] = 0;
  local_48[1] = 0;
  local_38 = 0;
  FUN_10008d2d0(local_48,*(undefined4 *)(lVar5 + 0x31c08),(ulong)bVar3 << 4);
  if (local_48[0] == 0) {
    lVar5 = FUN_100257d80(param_1);
    uVar14 = 1;
    FUN_1008e3970("","LocalDevices",0,"[Scsi] Incorrect mailbox address (0x%08x)",
                  *(undefined4 *)(lVar5 + 0x31c08));
  }
  else {
    lVar6 = FUN_100257d80(param_1);
    lVar5 = local_48[0];
    lVar7 = FUN_100257d80(param_1);
    bVar4 = *(byte *)(lVar7 + 0x31c1c);
    uVar14 = 2;
    if (bVar4 != 0) {
      uVar9 = *(uint *)(lVar6 + 0x31c10);
      uVar11 = 0;
      do {
        if (uVar9 == bVar4) {
          uVar9 = 0;
        }
        uVar13 = (ulong)uVar9;
        uVar9 = uVar9 + 1;
        if (*(char *)(lVar5 + 7 + uVar13 * 8) == '\x01') {
          puVar8 = (undefined4 *)(uVar13 * 8 + lVar5);
          *(uint *)(lVar6 + 0x31c10) = uVar9;
          if (puVar8 != (undefined4 *)0x0) {
            lVar6 = FUN_100257d80(param_1);
            lVar10 = (ulong)bVar3 * 8 + local_48[0];
            lVar7 = FUN_100257d80(param_1);
            bVar3 = *(byte *)(lVar7 + 0x31c1c);
            if (bVar3 == 0) goto LAB_10027f869;
            uVar9 = *(uint *)(lVar6 + 0x31c14);
            uVar11 = 0;
            goto LAB_10027f7b0;
          }
          break;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < bVar4);
    }
  }
  goto LAB_10027f8e3;
  while (uVar11 = uVar11 + 1, uVar11 < bVar3) {
LAB_10027f7b0:
    if (uVar9 == bVar3) {
      uVar9 = 0;
    }
    uVar12 = (ulong)uVar9;
    uVar9 = uVar9 + 1;
    if (*(char *)(lVar10 + 7 + uVar12 * 8) == '\0') {
      lVar10 = lVar10 + uVar12 * 8;
      *(uint *)(lVar6 + 0x31c14) = uVar9;
      if (lVar10 != 0) {
        local_68[0] = 0;
        local_68[1] = 0;
        local_58 = 0;
        FUN_10008d2d0(local_68,*puVar8,0x32);
        bVar3 = *(byte *)(local_68[0] + 0x10);
        FUN_100280150(&local_70,(ulong)bVar3);
        uVar14 = *(long *)(local_70[2] + 8) == 0;
        if ((bool)uVar14) {
          FUN_10027f9d0();
          *(undefined4 *)(lVar5 + uVar13 * 8) = 0;
          *(undefined4 *)(lVar5 + 4 + uVar13 * 8) = 0;
        }
        else {
          lVar5 = FUN_100257d80(param_1);
          LOCK();
          piVar2 = (int *)(lVar5 + 0x31c40 + (ulong)bVar3 * 4);
          *piVar2 = *piVar2 + 1;
          UNLOCK();
          FUN_100280860(*(undefined8 *)(local_70[2] + 8),local_48,puVar8,lVar10,
                        *(undefined8 *)(param_1 + 0x70));
        }
        if (local_70 != (long *)0x0) {
          LOCK();
          plVar1 = local_70 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)(*local_70 + 0x10))();
          }
        }
        FUN_10008d3f0(local_68);
        goto LAB_10027f8e3;
      }
      break;
    }
  }
LAB_10027f869:
  uVar14 = 1;
  FUN_1008e3970("","LocalDevices",0,"[Scsi] Incorrect in-mailbox address (0x%p)",0);
LAB_10027f8e3:
  FUN_10008d3f0(local_48);
  return uVar14;
}

