
void FUN_1002b6c50(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  char *pcVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  undefined8 *puVar17;
  uint uVar18;
  ulong uVar19;
  QArrayData *local_a8;
  QArrayData *local_a0;
  undefined1 local_98 [8];
  Data *local_90;
  Data *local_88;
  Data *local_80;
  undefined4 local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar15 = 0;
  if (*(long **)(param_1 + 0x2e8) != (long *)0x0) {
    iVar3 = (**(code **)(**(long **)(param_1 + 0x2e8) + 0x78))();
    uVar15 = (uint)(iVar3 == 2);
  }
  if (*(long **)(param_1 + 0x2f0) != (long *)0x0) {
    iVar3 = (**(code **)(**(long **)(param_1 + 0x2f0) + 0x78))();
    if (iVar3 == 2) {
      uVar15 = uVar15 + 2;
    }
  }
  uVar16 = uVar15;
  if (*(long **)(param_1 + 0x2f8) != (long *)0x0) {
    iVar3 = (**(code **)(**(long **)(param_1 + 0x2f8) + 0x78))();
    uVar16 = uVar15 | 4;
    if (iVar3 != 2) {
      uVar16 = uVar15;
    }
  }
  uVar18 = *(uint *)(param_1 + 0x2a8) & uVar16;
  *(uint *)(param_1 + 0x2a8) = *(uint *)(param_1 + 0x2a8) & ~uVar18;
  uVar15 = uVar18;
  if (((uVar16 & 4) == 0) && (*(long *)(param_1 + 0x2f8) != 0)) {
    if ((uVar18 & 2) != 0) {
      if (0 < DAT_1011c568c) {
        FUN_1008e3970("","USB",0,"Start XHC wait timer");
      }
      uVar12 = FUN_1007d87f0();
      *(undefined8 *)(param_1 + 0x2b8) = uVar12;
    }
    lVar10 = FUN_1007d87f0();
    lVar11 = *(long *)(param_1 + 0x2b8);
    if ((lVar11 != 0) && ((ulong)DAT_101116b48 * 1000000 < (ulong)(lVar10 - lVar11))) {
      *(long *)(param_1 + 0x2b8) = 0;
      uVar15 = uVar18 | 4;
      if (0 < DAT_1011c568c) {
        pcVar13 = "XHC wait timer expired";
        goto LAB_1002b6ddf;
      }
    }
  }
  else if ((*(long *)(param_1 + 0x2f8) == 0) &&
          (((uVar18 & 2) != 0 && (uVar15 = uVar18 | 4, 0 < DAT_1011c568c)))) {
    pcVar13 = "All super speed devices will be connected as high speed";
LAB_1002b6ddf:
    FUN_1008e3970("","USB",0,pcVar13);
    uVar15 = uVar18 | 4;
  }
  if (((DAT_1011c5680 != uVar15) ||
      (uVar18 = DAT_1011c5680, uVar4 = DAT_1011c5684, DAT_1011c5684 != uVar16)) &&
     (uVar18 = uVar15, uVar4 = uVar16, 1 < DAT_1011c568c)) {
    FUN_1008e3970("","USB",0,"[ONBOOT] ready:%x onboot:%x mask:%x",uVar16,
                  *(undefined4 *)(param_1 + 0x2a8),uVar15);
  }
  DAT_1011c5684 = uVar4;
  DAT_1011c5680 = uVar18;
  if (uVar15 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2ac) = 1;
  local_40 = (QArrayData *)QString::fromAscii_helper("VIRTUAL@MOUSE@",0xe);
  uVar18 = FUN_1002b7860(param_1,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002b6ebe;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1002b6ebe:
  local_48 = (QArrayData *)QString::fromAscii_helper("VIRTUAL@KEYBOARD@",0x11);
  uVar4 = FUN_1002b7860(param_1,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002b6f15;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1002b6f15:
  local_50 = (QArrayData *)QString::fromAscii_helper("VIRTUAL@PRINTER@",0x10);
  uVar5 = FUN_1002b7860(param_1,&local_50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002b6f6c;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1002b6f6c:
  local_58 = (QArrayData *)QString::fromAscii_helper("VIRTUAL@BT@",0xb);
  uVar6 = FUN_1002b7860(param_1,&local_58);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002b6fc0;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1002b6fc0:
  local_60 = (QArrayData *)QString::fromAscii_helper("VIRTUAL@MSC@",0xc);
  uVar7 = FUN_1002b7860(param_1,&local_60);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002b701a;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1002b701a:
  local_68 = (QArrayData *)QString::fromAscii_helper("VIRTUAL@UVC@",0xc);
  uVar8 = FUN_1002b7860(param_1,&local_68);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002b7071;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1002b7071:
  uVar9 = 0;
  if (uVar18 < 4) {
    uVar9 = *(uint *)(&DAT_100b381c0 + (long)(int)uVar18 * 4);
  }
  if ((uVar15 & uVar9) != 0) {
    FUN_1002bacc0(0,2,0);
  }
  uVar18 = 0;
  if (uVar4 < 4) {
    uVar18 = *(uint *)(&DAT_100b381c0 + (long)(int)uVar4 * 4);
  }
  if ((uVar15 & uVar18) != 0) {
    FUN_1002bacc0(0,3,0);
  }
  uVar18 = 0;
  if (uVar6 < 4) {
    uVar18 = *(uint *)(&DAT_100b381c0 + (long)(int)uVar6 * 4);
  }
  if ((uVar15 & uVar18) != 0) {
    CVmConfiguration::getVmSettings();
    CVmSettings::getSharedBluetooth();
    cVar2 = CVmSharedBluetooth::isEnabled();
    if (cVar2 != '\0') {
      FUN_1002bacc0(0,8,0);
    }
  }
  uVar18 = 0;
  if (uVar5 < 4) {
    uVar18 = *(uint *)(&DAT_100b381c0 + (long)(int)uVar5 * 4);
  }
  if ((uVar15 & uVar18) != 0) {
    FUN_10009aa20(*(int *)(param_1 + 0x2b0) != 0);
  }
  uVar18 = 0;
  if (uVar7 < 4) {
    uVar18 = *(uint *)(&DAT_100b381c0 + (long)(int)uVar7 * 4);
  }
  if ((uVar15 & uVar18) != 0) {
    FUN_1002e6df0();
  }
  uVar18 = 0;
  if (uVar8 < 4) {
    uVar18 = *(uint *)(&DAT_100b381c0 + (long)(int)uVar8 * 4);
  }
  if ((uVar15 & uVar18) != 0) {
    FUN_1002e40c0();
  }
  uVar19 = 0;
  if (((*(byte *)(DAT_1011c3698 + 0x1ab1) & 0x40) == 0) && ((uVar16 & 4 & uVar15) != 0)) {
    puVar17 = &DAT_1011c4ab8;
    do {
      if (((*(int *)(puVar17 + -3) != 0) && (iVar3 = FUN_1002b8030(puVar17), iVar3 == 3)) &&
         (iVar3 = FUN_1002b8700(param_1,uVar19 & 0xffffffff), iVar3 != 0)) {
        *(undefined4 *)(puVar17 + -3) = 2;
      }
      uVar19 = uVar19 + 1;
      puVar17 = puVar17 + 6;
    } while (uVar19 != 0x2f);
    *(undefined8 *)(param_1 + 0x2b8) = 0;
  }
  if ((*param_2 == 0) || (*(long *)(*param_2 + 0x10) == 0)) {
    if (-1 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,
                    "Can\'t get host-hw-info. Usb devices resume &virtual usb printers reconnection will be skipped."
                   );
    }
  }
  else {
    puVar17 = &DAT_1011c4ab8;
    uVar19 = 0;
    do {
      lVar11 = 3;
      if (uVar19 < 0x2f) {
        lVar11 = (ulong)(0x1f < uVar19) + 1;
      }
      if (((((*(uint *)(&DAT_100b381c0 + lVar11 * 4) & uVar15) != 0) &&
           (*(int *)((long)puVar17 + -0x14) != 0)) && (*(int *)(puVar17 + -3) != 0)) &&
         (iVar3 = FUN_1002c6e30(puVar17), iVar3 != 0 || DAT_1011c5610 != 0)) {
        if (*(int *)(puVar17 + -3) == 6) {
          *(undefined4 *)(puVar17 + -3) = 2;
        }
        if (-1 < DAT_1011c568c) {
          QString::toUtf8();
          FUN_1008e3970("","USB",0,"Port %u, dev %s, state %u is waiting",uVar19 & 0xffffffff,
                        local_70 + *(long *)(local_70 + 0x10),*(undefined4 *)(puVar17 + -3));
          if (*(int *)local_70 != -1) {
            if (*(int *)local_70 != 0) {
              LOCK();
              *(int *)local_70 = *(int *)local_70 + -1;
              local_31 = *(int *)local_70 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002b7320;
            }
            QArrayData::deallocate(local_70,1,8);
          }
        }
      }
LAB_1002b7320:
      uVar19 = uVar19 + 1;
      puVar17 = puVar17 + 6;
    } while (uVar19 < 0x3d);
    uVar12 = FUN_1000b1620(DAT_1011c3698);
    plVar1 = *(long **)(*(long *)(*param_2 + 0x10) + 0x180);
    local_90 = (Data *)*plVar1;
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 == 0) {
        QListData::detach((int)&local_90);
        lVar10 = (long)*(int *)(local_90 + 8);
        lVar11 = *plVar1;
        if (((Data *)(lVar11 + (long)*(int *)(lVar11 + 8) * 8) != local_90 + lVar10 * 8) &&
           (lVar14 = *(int *)(local_90 + 0xc) - lVar10,
           lVar14 != 0 && lVar10 <= *(int *)(local_90 + 0xc))) {
          _memcpy(local_90 + lVar10 * 8 + 0x10,
                  (void *)(lVar11 + 0x10 + (long)*(int *)(lVar11 + 8) * 8),lVar14 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + 1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
      }
    }
    local_88 = local_90 + (long)*(int *)(local_90 + 8) * 8 + 0x10;
    local_80 = local_90 + (long)*(int *)(local_90 + 0xc) * 8 + 0x10;
    if (*(int *)(local_90 + 8) != *(int *)(local_90 + 0xc)) {
      do {
        local_78 = 1;
        plVar1 = *(long **)local_88;
        iVar3 = (**(code **)(*plVar1 + 0xd8))(plVar1);
        if (iVar3 == 0) {
LAB_1002b7492:
          (**(code **)(*plVar1 + 0xb8))(&local_a0,plVar1);
          iVar3 = FUN_1002c6e30(&local_a0);
          if (iVar3 != 0 || DAT_1011c5610 != 0) {
            uVar18 = FUN_1002b8030(&local_a0);
            uVar16 = 0;
            if (uVar18 < 4) {
              uVar16 = *(uint *)(&DAT_100b381c0 + (long)(int)uVar18 * 4);
            }
            if ((uVar15 & uVar16) != 0) {
              (**(code **)(*plVar1 + 0xa8))(&local_a8,plVar1);
              FUN_1002b8890(param_1,0,&local_a0,&local_a8,3,1);
              if (*(int *)local_a8 != -1) {
                if (*(int *)local_a8 != 0) {
                  LOCK();
                  *(int *)local_a8 = *(int *)local_a8 + -1;
                  local_31 = *(int *)local_a8 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1002b7550;
                }
                QArrayData::deallocate(local_a8,2,8);
              }
            }
          }
LAB_1002b7550:
          if (*(int *)local_a0 != -1) {
            if (*(int *)local_a0 != 0) {
              LOCK();
              *(int *)local_a0 = *(int *)local_a0 + -1;
              local_31 = *(int *)local_a0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002b7586;
            }
            QArrayData::deallocate(local_a0,2,8);
          }
        }
        else {
          (**(code **)(*plVar1 + 200))(local_98,plVar1);
          cVar2 = QtPrivate::QStringList_contains(local_98,uVar12,1);
          FUN_100013180(local_98);
          if (cVar2 != '\0') goto LAB_1002b7492;
        }
LAB_1002b7586:
        local_88 = local_88 + 8;
      } while (local_88 != local_80);
    }
    local_78 = 1;
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        UNLOCK();
        if (*(int *)local_90 != 0) {
          return;
        }
        local_31 = 0;
      }
      QListData::dispose(local_90);
    }
  }
  return;
}

