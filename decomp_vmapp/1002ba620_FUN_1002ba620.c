
undefined8 FUN_1002ba620(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  QArrayData *pQVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  uint uVar15;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar16;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar16 = (undefined4)((ulong)in_stack_ffffffffffffff68 >> 0x20);
  CVmDevice::getSystemName();
  CVmDevice::getUserFriendlyName();
  iVar5 = CVmUsbDevice::getConnectReason();
  uVar6 = FUN_1002b9040(&local_40);
  if (-1 < DAT_1011c568c) {
    QString::toUtf8();
    lVar13 = *(long *)(local_50 + 0x10);
    QString::toUtf8();
    pQVar11 = local_50 + lVar13;
    FUN_1008e3970("","USB",0,"DisconnectFromBus: reason %d, idx %d, dev <%s><%s>",iVar5,uVar6,
                  pQVar11,local_58 + *(long *)(local_58 + 0x10));
    uVar16 = (undefined4)((ulong)pQVar11 >> 0x20);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002ba703;
      }
      QArrayData::deallocate(local_58,1,8);
    }
LAB_1002ba703:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002ba736;
      }
      QArrayData::deallocate(local_50,1,8);
    }
  }
LAB_1002ba736:
  uVar12 = (ulong)uVar6;
  iVar7 = FUN_1002c6e30(&local_40);
  if (iVar7 == 0 && DAT_1011c5610 == 0) {
    uVar10 = 0x80000001;
    if (-1 < DAT_1011c568c) {
      uVar10 = 0x80000001;
      FUN_1008e3970("","USB",0,"No connection to parallels usb manager driver.");
      goto LAB_1002baa0f;
    }
  }
  else {
    if (uVar6 == 0xffffffff) {
      uVar10 = 0x80000001;
      if (0 < DAT_1011c568c) {
        uVar10 = 0x80000001;
        FUN_1008e3970("","USB",0,"Device not serviced by vm.");
      }
    }
    else {
      uVar1 = (&DAT_1011c4aa0)[uVar12 * 0xc];
      if ((iVar5 == 1) && (1 < uVar1 - 5)) {
        if (uVar1 == 1) {
          if (0 < DAT_1011c568c) {
            FUN_1008e3970("","USB",0,"Transfer port %u to WaitingPlug state.",uVar12);
          }
          (&DAT_1011c4aa0)[uVar12 * 0xc] = 2;
        }
        else if (0 < DAT_1011c568c) {
          uVar10 = FUN_1002da790(uVar1);
          FUN_1008e3970("","USB",0,"Skip automatic disconnect. Port %u state %s.",uVar12,uVar10);
        }
        uVar10 = FUN_1007d87f0();
        (&DAT_1011c4aa8)[uVar12 * 6] = uVar10;
        uVar10 = 0x80000001;
      }
      else {
        if (uVar1 == 5) {
          FUN_1002b8700(param_1);
        }
        uVar9 = 0;
        if (iVar5 == 1) {
          iVar8 = FUN_1002c6cd0(&DAT_1011c4ab8 + uVar12 * 6);
          uVar9 = FUN_1002c6ef0(&local_40);
          uVar4 = FUN_1002c7030(&local_40);
          lVar13 = 0;
          iVar7 = -1;
          uVar15 = 0;
          do {
            uVar2 = *(uint *)(param_1 + 0x98 + lVar13);
            iVar14 = 1;
            if ((uVar2 == (uVar9 & 0xffff)) || (iVar14 = 0, uVar2 == 0x1ffff)) {
              uVar2 = *(uint *)(param_1 + 0x9c + lVar13);
              if (uVar2 == uVar4) {
                iVar14 = iVar14 + 1;
              }
              else if (uVar2 != 0x1ffff) goto LAB_1002ba92c;
              iVar3 = *(int *)(param_1 + 0xa0 + lVar13);
              if (iVar3 != 0x1ff) {
                if (iVar3 != 0) goto LAB_1002ba92c;
                iVar14 = iVar14 + 1;
              }
              if (iVar7 <= iVar14) {
                uVar15 = *(uint *)(param_1 + 0xa4 + lVar13);
                iVar7 = iVar14;
              }
            }
LAB_1002ba92c:
            lVar13 = lVar13 + 0x10;
          } while (lVar13 != 0x200);
          uVar9 = 4;
          if ((uVar15 & 0x10000) == 0) {
            uVar9 = (uint)(iVar8 == 0) * 2;
          }
        }
        if (((uVar1 < 7) && ((0x6eU >> (uVar1 & 0x1f) & 1) != 0)) && ((uVar9 & 0xfffffffb) == 0)) {
          FUN_1002bcd80();
        }
        (&DAT_1011c4aa0)[uVar12 * 0xc] = uVar9;
        uVar10 = FUN_1007d87f0();
        (&DAT_1011c4aa8)[uVar12 * 6] = uVar10;
        if (uVar9 == 0) {
          FUN_1002b6210(uVar12);
        }
        uVar10 = 0;
        CVmDevice::setConnected((uint)param_2);
        FUN_10025b3c0(param_1 + 0x68,param_2);
      }
    }
LAB_1002baa0f:
    if (-1 < DAT_1011c568c) {
      QString::toUtf8();
      lVar13 = *(long *)(local_60 + 0x10);
      QString::toUtf8();
      FUN_1008e3970("","USB",0,"DisconnectFromBus: result %d, reason %d, idx %d, dev <%s><%s>",
                    uVar10,iVar5,CONCAT44(uVar16,uVar6),local_60 + lVar13,
                    local_68 + *(long *)(local_68 + 0x10));
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002baaad;
        }
        QArrayData::deallocate(local_68,1,8);
      }
LAB_1002baaad:
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002baadd;
        }
        QArrayData::deallocate(local_60,1,8);
      }
    }
  }
LAB_1002baadd:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002bab0d;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1002bab0d:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return uVar10;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return uVar10;
}

