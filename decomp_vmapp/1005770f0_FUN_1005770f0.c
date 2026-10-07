
void FUN_1005770f0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  ulong uVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  undefined8 in_stack_ffffffffffffff68;
  undefined8 uVar9;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  
  uVar4 = (undefined4)((ulong)in_stack_ffffffffffffff68 >> 0x20);
  if (3 < DAT_1011b55f8) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    QString::toUtf8();
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    iVar1 = *(int *)(param_1 + 0x30);
    if ((long)iVar1 == -1) {
      pcVar6 = "Invalid";
    }
    else if (iVar1 == -2) {
      pcVar6 = "Disabled";
    }
    else {
      pcVar6 = (&PTR_s_None_100bc6390)[iVar1];
    }
    FUN_1008e3970("Compact","vdisk",4,"[%p]%s[%zu] Invoked in state [%s]",uVar2,
                  local_38 + *(long *)(local_38 + 0x10),uVar9,pcVar6);
    uVar4 = (undefined4)((ulong)uVar9 >> 0x20);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        if (*(int *)local_38 != 0) goto LAB_1005771bc;
      }
      QArrayData::deallocate(local_38,1,8);
    }
  }
LAB_1005771bc:
  cVar3 = (**(code **)(**(long **)(*(long *)(param_1 + 0x20) + 0x1210) + 0x50))();
  if (cVar3 == '\0') {
    FUN_100577fb0(param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    QString::toUtf8();
    iVar1 = *(int *)(param_1 + 0x30);
    if ((long)iVar1 == -1) {
      pcVar6 = "Invalid";
    }
    else if (iVar1 == -2) {
      pcVar6 = "Disabled";
    }
    else {
      pcVar6 = (&PTR_s_None_100bc6390)[iVar1];
    }
    FUN_1008e3970("Compact","vdisk",0,
                  "[%p]%s[%zu] Terminated by AsyncDev state changing in state [%s]",uVar2,
                  local_40 + *(long *)(local_40 + 0x10),*(undefined8 *)(param_1 + 0x28),pcVar6);
    if (*(int *)local_40 == -1) {
      return;
    }
    local_80 = local_40;
    if (*(int *)local_40 == 0) goto LAB_100577a80;
    LOCK();
    *(int *)local_40 = *(int *)local_40 + -1;
    iVar1 = *(int *)local_40;
    UNLOCK();
    goto joined_r0x0001005773ad;
  }
  if (*(int *)(param_1 + 0x60) == 0) {
switchD_10057731a_default:
    iVar1 = *(int *)(param_1 + 0x30);
    switch(iVar1) {
    case 1:
      do {
        uVar5 = *(long *)(param_1 + 0x28) + 1;
        *(ulong *)(param_1 + 0x28) = uVar5;
        lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 0x1128);
        lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 0x1130);
        if ((ulong)(lVar8 - lVar7 >> 3) <= uVar5) goto LAB_1005772ef;
        cVar3 = FUN_100595b70(*(undefined8 *)(lVar7 + uVar5 * 8));
      } while (cVar3 == '\0');
      uVar5 = *(ulong *)(param_1 + 0x28);
      lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 0x1128);
      lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 0x1130);
LAB_1005772ef:
      if (lVar8 - lVar7 >> 3 == uVar5) {
        FUN_1005780e0();
      }
      else {
        FUN_100576cd0(param_1);
      }
      break;
    case 2:
      FUN_1005781e0(param_1);
      break;
    case 3:
      FUN_1005786c0(param_1);
      break;
    case 4:
      FUN_100578820(param_1);
      break;
    case 5:
      FUN_100578e70(param_1);
      break;
    case 6:
      FUN_1005791e0(param_1);
      break;
    case 7:
      FUN_100579400(param_1);
      break;
    default:
      if (iVar1 == -1) {
        pcVar6 = "Invalid";
      }
      else if (iVar1 == -2) {
        pcVar6 = "Disabled";
      }
      else {
        pcVar6 = (&PTR_s_None_100bc6390)[iVar1];
      }
      FUN_1008e3970("Compact","vdisk",0,"[%p] Unsupported state [%s]",
                    *(undefined8 *)(param_1 + 0x20),pcVar6);
    }
    if (DAT_1011b55f8 < 4) {
      return;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    QString::toUtf8();
    iVar1 = *(int *)(param_1 + 0x30);
    if ((long)iVar1 == -1) {
      pcVar6 = "Invalid";
    }
    else if (iVar1 == -2) {
      pcVar6 = "Disabled";
    }
    else {
      pcVar6 = (&PTR_s_None_100bc6390)[iVar1];
    }
    FUN_1008e3970("Compact","vdisk",4,"[%p]%s[%zu] Done in state [%s]",uVar2,
                  local_80 + *(long *)(local_80 + 0x10),*(undefined8 *)(param_1 + 0x28),pcVar6);
    if (*(int *)local_80 == -1) {
      return;
    }
    if (*(int *)local_80 == 0) goto LAB_100577a80;
    LOCK();
    *(int *)local_80 = *(int *)local_80 + -1;
    iVar1 = *(int *)local_80;
    UNLOCK();
  }
  else {
    FUN_100595d30(*(undefined8 *)
                   (*(long *)(*(long *)(param_1 + 0x20) + 0x1128) + *(long *)(param_1 + 0x28) * 8),
                  param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x28) = 0xffffffffffffffff;
    switch(*(undefined4 *)(param_1 + 0x60)) {
    case 1:
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      QString::toUtf8();
      iVar1 = *(int *)(param_1 + 0x30);
      if ((long)iVar1 == -1) {
        pcVar6 = "Invalid";
      }
      else if (iVar1 == -2) {
        pcVar6 = "Disabled";
      }
      else {
        pcVar6 = (&PTR_s_None_100bc6390)[iVar1];
      }
      FUN_1008e3970("Compact","vdisk",0,"[%p]%s: Cancelled in state [%s]",uVar2,
                    local_48 + *(long *)(local_48 + 0x10),pcVar6);
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          UNLOCK();
          if (*(int *)local_48 != 0) goto LAB_1005776c2;
        }
        QArrayData::deallocate(local_48,1,8);
      }
LAB_1005776c2:
      uVar4 = 0;
      if (1 < *(uint *)(param_1 + 0x30)) {
        uVar4 = 8;
      }
      *(undefined4 *)(param_1 + 0x30) = uVar4;
      *(undefined4 *)(param_1 + 0x60) = 0;
      if (DAT_1011b55f8 < 4) {
        return;
      }
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      QString::toUtf8();
      iVar1 = *(int *)(param_1 + 0x30);
      if ((long)iVar1 == -1) {
        pcVar6 = "Invalid";
      }
      else if (iVar1 == -2) {
        pcVar6 = "Disabled";
      }
      else {
        pcVar6 = (&PTR_s_None_100bc6390)[iVar1];
      }
      FUN_1008e3970("Compact","vdisk",4,"[%p]%s: Done in state [%s]",uVar2,
                    local_50 + *(long *)(local_50 + 0x10),pcVar6);
      if (*(int *)local_50 == -1) {
        return;
      }
      local_80 = local_50;
      if (*(int *)local_50 == 0) goto LAB_100577a80;
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      iVar1 = *(int *)local_50;
      UNLOCK();
      break;
    case 2:
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      QString::toUtf8();
      iVar1 = *(int *)(param_1 + 0x30);
      if ((long)iVar1 == -1) {
        pcVar6 = "Invalid";
      }
      else if (iVar1 == -2) {
        pcVar6 = "Disabled";
      }
      else {
        pcVar6 = (&PTR_s_None_100bc6390)[iVar1];
      }
      FUN_1008e3970("Compact","vdisk",0,"[%p]%s: Disabled in state [%s]",uVar2,
                    local_58 + *(long *)(local_58 + 0x10),pcVar6);
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          UNLOCK();
          if (*(int *)local_58 != 0) goto LAB_10057777f;
        }
        QArrayData::deallocate(local_58,1,8);
      }
LAB_10057777f:
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x30);
      *(undefined4 *)(param_1 + 0x30) = 0xfffffffe;
      *(undefined4 *)(param_1 + 0x60) = 0;
      if (DAT_1011b55f8 < 4) {
        return;
      }
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      QString::toUtf8();
      iVar1 = *(int *)(param_1 + 0x30);
      if ((long)iVar1 == -1) {
        pcVar6 = "Invalid";
      }
      else if (iVar1 == -2) {
        pcVar6 = "Disabled";
      }
      else {
        pcVar6 = (&PTR_s_None_100bc6390)[iVar1];
      }
      FUN_1008e3970("Compact","vdisk",4,"[%p]%s: Done in state [%s]",uVar2,
                    local_60 + *(long *)(local_60 + 0x10),pcVar6);
      if (*(int *)local_60 == -1) {
        return;
      }
      local_80 = local_60;
      if (*(int *)local_60 == 0) goto LAB_100577a80;
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      iVar1 = *(int *)local_60;
      UNLOCK();
      break;
    case 3:
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      QString::toUtf8();
      iVar1 = *(int *)(param_1 + 0x30);
      if ((long)iVar1 == -1) {
        pcVar6 = "Invalid";
      }
      else if (iVar1 == -2) {
        pcVar6 = "Disabled";
      }
      else {
        pcVar6 = (&PTR_s_None_100bc6390)[iVar1];
      }
      FUN_1008e3970("Compact","vdisk",0,"[%p]%s: Resetted in state [%s]",uVar2,
                    local_68 + *(long *)(local_68 + 0x10),pcVar6);
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          UNLOCK();
          if (*(int *)local_68 != 0) goto LAB_10057783a;
        }
        QArrayData::deallocate(local_68,1,8);
      }
LAB_10057783a:
      *(undefined4 *)(param_1 + 0x30) = 0;
      lVar7 = *(long *)(param_1 + 0x20);
      lVar8 = *(long *)(lVar7 + 0x1128);
      uVar5 = 0;
      if (*(long *)(lVar7 + 0x1130) != lVar8) {
        do {
          FUN_100597140(*(undefined8 *)(lVar8 + uVar5 * 8));
          uVar5 = uVar5 + 1;
          lVar7 = *(long *)(param_1 + 0x20);
          lVar8 = *(long *)(lVar7 + 0x1128);
        } while (uVar5 < (ulong)(*(long *)(lVar7 + 0x1130) - lVar8 >> 3));
      }
      *(undefined4 *)(param_1 + 0x60) = 0;
      if (DAT_1011b55f8 < 4) {
        return;
      }
      QString::toUtf8();
      iVar1 = *(int *)(param_1 + 0x30);
      if ((long)iVar1 == -1) {
        pcVar6 = "Invalid";
      }
      else if (iVar1 == -2) {
        pcVar6 = "Disabled";
      }
      else {
        pcVar6 = (&PTR_s_None_100bc6390)[iVar1];
      }
      FUN_1008e3970("Compact","vdisk",4,"[%p]%s: Done in state [%s]",lVar7,
                    local_70 + *(long *)(local_70 + 0x10),pcVar6);
      if (*(int *)local_70 == -1) {
        return;
      }
      local_80 = local_70;
      if (*(int *)local_70 == 0) goto LAB_100577a80;
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      iVar1 = *(int *)local_70;
      UNLOCK();
      break;
    case 4:
      *(undefined1 *)(param_1 + 0x68) = 1;
      *(undefined4 *)(param_1 + 0x60) = 0;
      if ((*(uint *)(param_1 + 0x30) & 0xfffffffe) != 4) {
        FUN_1008e3970("Compact","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]",
                      "cntx->SearchMoveInProgress()","DiskStatesImp.cpp",CONCAT44(uVar4,0x1448),
                      "CompactOnWaitCb");
      }
      FUN_1005780e0(param_1);
      if (DAT_1011b55f8 < 4) {
        return;
      }
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      QString::toUtf8();
      iVar1 = *(int *)(param_1 + 0x30);
      if ((long)iVar1 == -1) {
        pcVar6 = "Invalid";
      }
      else if (iVar1 == -2) {
        pcVar6 = "Disabled";
      }
      else {
        pcVar6 = (&PTR_s_None_100bc6390)[iVar1];
      }
      FUN_1008e3970("Compact","vdisk",4,"[%p]%s: Done in state [%s]",uVar2,
                    local_78 + *(long *)(local_78 + 0x10),pcVar6);
      if (*(int *)local_78 == -1) {
        return;
      }
      local_80 = local_78;
      if (*(int *)local_78 == 0) goto LAB_100577a80;
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      iVar1 = *(int *)local_78;
      UNLOCK();
      break;
    default:
      goto switchD_10057731a_default;
    }
  }
joined_r0x0001005773ad:
  if (iVar1 != 0) {
    return;
  }
LAB_100577a80:
  QArrayData::deallocate(local_80,1,8);
  return;
}

