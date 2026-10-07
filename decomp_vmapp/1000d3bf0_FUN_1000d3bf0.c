
uint FUN_1000d3bf0(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  CVmHardware *this;
  CVmSettings *this_00;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  uint uVar13;
  long *plVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  bool bVar18;
  long *local_70;
  void *local_68;
  void *pvStack_60;
  undefined8 local_58;
  Data *local_50;
  Data *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  lVar15 = *(long *)(param_1 + 0x2b0);
  this = operator_new(0x208);
  CVmHardware::CVmHardware(this);
  this_00 = operator_new(0x160);
  CVmSettings::CVmSettings(this_00);
  cVar3 = FUN_1000d1630(param_1,&DAT_1011c36b0,this);
  if (cVar3 == '\0') {
    FUN_1008e3970("","vm",0,"[CSnapshot::FnAfterLoad] can\'t read from saved config!");
    uVar13 = 0x2d;
    goto LAB_1000d4097;
  }
  cVar3 = FUN_1000d19b0(param_1,&DAT_1011c36b8,this_00);
  if (cVar3 == '\0') {
    FUN_1008e3970("","vm",0,"[CSnapshot::FnAfterLoad] can\'t read from saved config settings!");
    QString::toLatin1();
    if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f)
      ;
    }
    FUN_1008e3970("","vm",0,"string = \n%s",local_40 + *(long *)(local_40 + 0x10));
    uVar13 = 0x2e;
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000d4097;
      }
      QArrayData::deallocate(local_40,1,8);
    }
    goto LAB_1000d4097;
  }
  uVar13 = 1;
  if (*(long *)(lVar15 + 0x110) == 0) goto LAB_1000d4097;
  lVar8 = CVmConfiguration::getVmHardwareList();
  uVar13 = 2;
  if (lVar8 == 0) goto LAB_1000d4097;
  lVar9 = CVmConfiguration::getVmSettings();
  uVar13 = 0x29;
  if (lVar9 == 0) goto LAB_1000d4097;
  lVar9 = *(long *)(lVar8 + 0x160);
  uVar1 = *(uint *)(lVar9 + 8);
  uVar12 = (ulong)uVar1;
  uVar13 = 3;
  if (*(int *)(lVar9 + 0xc) - uVar1 !=
      *(int *)(*(long *)(this + 0x160) + 0xc) - *(int *)(*(long *)(this + 0x160) + 8))
  goto LAB_1000d4097;
  uVar17 = 0;
  if ((int)uVar1 < *(int *)(lVar9 + 0xc)) {
    do {
      plVar11 = *(long **)(lVar9 + 0x10 + ((long)(int)uVar12 + uVar17) * 8);
      iVar4 = (**(code **)(*plVar11 + 0x68))(plVar11);
      if (iVar4 == 6) {
        lVar9 = *(long *)(this + 0x160);
        iVar4 = *(int *)(lVar9 + 8);
        if (iVar4 < *(int *)(lVar9 + 0xc)) {
          iVar16 = 0;
          do {
            if ((int)uVar17 == iVar16) {
              plVar11 = *(long **)(lVar9 + 0x10 + ((long)iVar4 + uVar17) * 8);
              iVar4 = (**(code **)(*plVar11 + 0x68))(plVar11);
              uVar13 = 4;
              if (iVar4 != 6) goto LAB_1000d4097;
              iVar4 = CVmDevice::getEnabled();
              iVar5 = CVmDevice::getEnabled();
              uVar13 = 5;
              if (iVar4 != iVar5) goto LAB_1000d4097;
              iVar4 = CVmDevice::getConnected();
              iVar5 = CVmDevice::getConnected();
              if (iVar4 != iVar5) {
                uVar7 = CVmDevice::getConnected();
                uVar6 = CVmDevice::getConnected();
                FUN_1008e3970("","vm",0,"Loaded=%u,Current=%u",uVar7,uVar6);
                uVar13 = 6;
                goto LAB_1000d4097;
              }
              iVar4 = CVmDevice::getEmulatedType();
              iVar5 = CVmDevice::getEmulatedType();
              uVar13 = 7;
              if (iVar4 != iVar5) goto LAB_1000d4097;
              iVar4 = CVmClusteredDevice::getInterfaceType();
              iVar5 = CVmClusteredDevice::getInterfaceType();
              uVar13 = 8;
              if (iVar4 != iVar5) goto LAB_1000d4097;
              CVmDevice::getEnabled();
              lVar9 = *(long *)(this + 0x160);
            }
            iVar16 = iVar16 + 1;
            iVar4 = *(int *)(lVar9 + 8);
          } while (iVar16 < *(int *)(lVar9 + 0xc) - iVar4);
        }
      }
      else {
        iVar4 = (**(code **)(*plVar11 + 0x68))(plVar11);
        if (iVar4 == 5) {
          lVar9 = *(long *)(this + 0x160);
          iVar4 = *(int *)(lVar9 + 8);
          if (iVar4 < *(int *)(lVar9 + 0xc)) {
            iVar16 = 0;
            uVar12 = uVar17 & 0xffffffff;
            do {
              if ((int)uVar12 == 0) {
                plVar11 = *(long **)(lVar9 + 0x10 + ((long)iVar4 + uVar17) * 8);
                iVar4 = (**(code **)(*plVar11 + 0x68))(plVar11);
                uVar13 = 9;
                if (iVar4 != 5) goto LAB_1000d4097;
                iVar4 = CVmDevice::getEnabled();
                iVar5 = CVmDevice::getEnabled();
                uVar13 = 10;
                if (iVar4 != iVar5) goto LAB_1000d4097;
                iVar4 = CVmClusteredDevice::getInterfaceType();
                iVar5 = CVmClusteredDevice::getInterfaceType();
                uVar13 = 0xb;
                if (iVar4 != iVar5) goto LAB_1000d4097;
                lVar9 = *(long *)(this + 0x160);
              }
              iVar16 = iVar16 + 1;
              iVar4 = *(int *)(lVar9 + 8);
              uVar12 = (ulong)((int)uVar12 - 1);
            } while (iVar16 < *(int *)(lVar9 + 0xc) - iVar4);
          }
        }
      }
      uVar17 = uVar17 + 1;
      lVar9 = *(long *)(lVar8 + 0x160);
      uVar12 = (ulong)*(int *)(lVar9 + 8);
    } while ((long)uVar17 < (long)((long)*(int *)(lVar9 + 0xc) - uVar12));
  }
  lVar9 = *(long *)(lVar8 + 0x1a0);
  iVar4 = *(int *)(lVar9 + 8);
  lVar10 = *(long *)(this + 0x1a0);
  uVar13 = 0xc;
  if (*(int *)(lVar9 + 0xc) - iVar4 != *(int *)(lVar10 + 0xc) - *(int *)(lVar10 + 8))
  goto LAB_1000d4097;
  if (iVar4 < *(int *)(lVar9 + 0xc)) {
    plVar11 = *(long **)(lVar9 + 0x10 + (long)iVar4 * 8);
    plVar14 = *(long **)(lVar10 + 0x10 + (long)*(int *)(lVar10 + 8) * 8);
    lVar9 = 1;
    if ((plVar14 != (long *)0x0) == (plVar11 != (long *)0x0)) {
      do {
        if (plVar11 != (long *)0x0) {
          iVar4 = (**(code **)(*plVar14 + 0x68))(plVar14);
          uVar13 = 0xe;
          if ((iVar4 != 3) || (iVar4 = (**(code **)(*plVar11 + 0x68))(plVar11), iVar4 != 3))
          goto LAB_1000d4097;
          iVar4 = CVmDevice::getEnabled();
          iVar16 = CVmDevice::getEnabled();
          uVar13 = 0xf;
          if (iVar4 != iVar16) goto LAB_1000d4097;
          uVar13 = CVmDevice::getIndex();
          if (uVar13 < 2) {
            *(undefined4 *)(lVar15 + 0x184 + (ulong)uVar13 * 0x110) = 0;
            iVar4 = CVmDevice::getEnabled();
            if ((iVar4 == 1) && (iVar4 = CVmDevice::getConnected(), iVar4 == 1)) {
              *(undefined4 *)(lVar15 + 0x184 + (ulong)uVar13 * 0x110) = 1;
            }
          }
          else {
            FUN_1008e3970("","vm",0,"[Config] Wrong %s config %u","flp",uVar13);
          }
        }
        lVar10 = *(long *)(lVar8 + 0x1a0);
        if ((long)*(int *)(lVar10 + 0xc) - (long)*(int *)(lVar10 + 8) <= lVar9) goto LAB_1000d4223;
        plVar11 = *(long **)(lVar10 + 0x10 + (*(int *)(lVar10 + 8) + lVar9) * 8);
        plVar14 = *(long **)(*(long *)(this + 0x1a0) + 0x10 +
                            (*(int *)(*(long *)(this + 0x1a0) + 8) + lVar9) * 8);
        lVar9 = lVar9 + 1;
      } while ((plVar14 != (long *)0x0) == (plVar11 != (long *)0x0));
      uVar13 = 0xd;
    }
    else {
      uVar13 = 0xd;
    }
    goto LAB_1000d4097;
  }
LAB_1000d4223:
  lVar10 = *(long *)(lVar8 + 0x1b8);
  iVar4 = *(int *)(lVar10 + 8);
  lVar9 = *(long *)(this + 0x1b8);
  uVar13 = 0x10;
  if (*(int *)(lVar10 + 0xc) - iVar4 != *(int *)(lVar9 + 0xc) - *(int *)(lVar9 + 8))
  goto LAB_1000d4097;
  if (iVar4 < *(int *)(lVar10 + 0xc)) {
    plVar11 = *(long **)(lVar10 + 0x10 + (long)iVar4 * 8);
    plVar14 = *(long **)(lVar9 + 0x10 + (long)*(int *)(lVar9 + 8) * 8);
    bVar18 = plVar11 == (long *)0x0;
    lVar9 = 1;
    if (plVar14 != (long *)0x0 && bVar18) {
      uVar13 = 0x11;
    }
    else if (plVar14 != (long *)0x0 || bVar18) {
      do {
        if (!bVar18) {
          iVar4 = (**(code **)(*plVar14 + 0x68))(plVar14);
          uVar13 = 0x12;
          if ((iVar4 != 10) || (iVar4 = (**(code **)(*plVar11 + 0x68))(plVar11), iVar4 != 10))
          goto LAB_1000d4097;
          iVar4 = CVmDevice::getEnabled();
          iVar16 = CVmDevice::getEnabled();
          uVar13 = 0x13;
          if (iVar4 != iVar16) goto LAB_1000d4097;
          lVar10 = *(long *)(lVar8 + 0x1b8);
        }
        if ((long)*(int *)(lVar10 + 0xc) - (long)*(int *)(lVar10 + 8) <= lVar9) goto LAB_1000d439d;
        plVar11 = *(long **)(lVar10 + 0x10 + (*(int *)(lVar10 + 8) + lVar9) * 8);
        plVar14 = *(long **)(*(long *)(this + 0x1b8) + 0x10 +
                            (*(int *)(*(long *)(this + 0x1b8) + 8) + lVar9) * 8);
        bVar18 = plVar11 == (long *)0x0;
      } while ((plVar14 == (long *)0x0 || !bVar18) &&
              (lVar9 = lVar9 + 1, plVar14 != (long *)0x0 || bVar18));
      uVar13 = 0x11;
    }
    else {
      uVar13 = 0x11;
    }
    goto LAB_1000d4097;
  }
LAB_1000d439d:
  lVar10 = *(long *)(lVar8 + 0x1c8);
  iVar4 = *(int *)(lVar10 + 8);
  iVar16 = *(int *)(lVar10 + 0xc) - iVar4;
  lVar9 = *(long *)(this + 0x1c8);
  iVar5 = *(int *)(lVar9 + 0xc) - *(int *)(lVar9 + 8);
  if (iVar16 == iVar5) {
    if (iVar4 < *(int *)(lVar10 + 0xc)) {
      plVar11 = *(long **)(lVar10 + 0x10 + (long)iVar4 * 8);
      plVar14 = *(long **)(lVar9 + 0x10 + (long)*(int *)(lVar9 + 8) * 8);
      bVar18 = plVar11 == (long *)0x0;
      lVar9 = 1;
      if ((plVar14 == (long *)0x0 || !bVar18) && (plVar14 != (long *)0x0 || bVar18)) {
        do {
          if (!bVar18) {
            iVar4 = (**(code **)(*plVar14 + 0x68))(plVar14);
            uVar13 = 0x16;
            if ((iVar4 != 0xb) || (iVar4 = (**(code **)(*plVar11 + 0x68))(plVar11), iVar4 != 0xb))
            goto LAB_1000d4097;
            iVar4 = CVmDevice::getEnabled();
            iVar16 = CVmDevice::getEnabled();
            uVar13 = 0x17;
            if (iVar4 != iVar16) goto LAB_1000d4097;
            lVar10 = *(long *)(lVar8 + 0x1c8);
          }
          if ((long)*(int *)(lVar10 + 0xc) - (long)*(int *)(lVar10 + 8) <= lVar9)
          goto LAB_1000d44fa;
          plVar11 = *(long **)(lVar10 + 0x10 + (*(int *)(lVar10 + 8) + lVar9) * 8);
          plVar14 = *(long **)(*(long *)(this + 0x1c8) + 0x10 +
                              (*(int *)(*(long *)(this + 0x1c8) + 8) + lVar9) * 8);
          bVar18 = plVar11 == (long *)0x0;
        } while ((plVar14 == (long *)0x0 || !bVar18) &&
                (lVar9 = lVar9 + 1, plVar14 != (long *)0x0 || bVar18));
      }
      uVar13 = 0x15;
      goto LAB_1000d4097;
    }
  }
  else {
    uVar13 = 0x14;
    if (iVar16 < iVar5) goto LAB_1000d4097;
    FUN_1008e3970("","vm",0,"The number of LPT ports differs: current=%d, loaded=%d. Ignored.");
  }
LAB_1000d44fa:
  lVar10 = *(long *)(lVar8 + 0x1d0);
  iVar4 = *(int *)(lVar10 + 8);
  lVar9 = *(long *)(this + 0x1d0);
  uVar13 = 0x18;
  if (*(int *)(lVar10 + 0xc) - iVar4 != *(int *)(lVar9 + 0xc) - *(int *)(lVar9 + 8))
  goto LAB_1000d4097;
  if (iVar4 < *(int *)(lVar10 + 0xc)) {
    plVar11 = *(long **)(lVar10 + 0x10 + (long)iVar4 * 8);
    plVar14 = *(long **)(lVar9 + 0x10 + (long)*(int *)(lVar9 + 8) * 8);
    bVar18 = plVar11 == (long *)0x0;
    lVar9 = 1;
    if (plVar14 != (long *)0x0 && bVar18) {
      uVar13 = 0x19;
    }
    else if (plVar14 != (long *)0x0 || bVar18) {
      do {
        if (!bVar18) {
          iVar4 = (**(code **)(*plVar14 + 0x68))(plVar14);
          uVar13 = 0x1a;
          if ((iVar4 != 8) || (iVar4 = (**(code **)(*plVar11 + 0x68))(plVar11), iVar4 != 8))
          goto LAB_1000d4097;
          iVar4 = CVmDevice::getEmulatedType();
          iVar16 = CVmDevice::getEmulatedType();
          if ((iVar16 == 4) != (iVar4 == 4)) goto LAB_1000d4097;
          iVar4 = CVmDevice::getEnabled();
          iVar16 = CVmDevice::getEnabled();
          uVar13 = 0x1b;
          if (iVar4 != iVar16) goto LAB_1000d4097;
          lVar10 = *(long *)(lVar8 + 0x1d0);
        }
        if ((long)*(int *)(lVar10 + 0xc) - (long)*(int *)(lVar10 + 8) <= lVar9) goto LAB_1000d466b;
        plVar11 = *(long **)(lVar10 + 0x10 + (*(int *)(lVar10 + 8) + lVar9) * 8);
        plVar14 = *(long **)(*(long *)(this + 0x1d0) + 0x10 +
                            (*(int *)(*(long *)(this + 0x1d0) + 8) + lVar9) * 8);
        bVar18 = plVar11 == (long *)0x0;
      } while ((plVar14 == (long *)0x0 || !bVar18) &&
              (lVar9 = lVar9 + 1, plVar14 != (long *)0x0 || bVar18));
      uVar13 = 0x19;
    }
    else {
      uVar13 = 0x19;
    }
    goto LAB_1000d4097;
  }
LAB_1000d466b:
  lVar10 = *(long *)(lVar8 + 0x1d8);
  iVar4 = *(int *)(lVar10 + 8);
  lVar9 = *(long *)(this + 0x1d8);
  uVar13 = 0x1c;
  if (*(int *)(lVar10 + 0xc) - iVar4 != *(int *)(lVar9 + 0xc) - *(int *)(lVar9 + 8))
  goto LAB_1000d4097;
  if (iVar4 < *(int *)(lVar10 + 0xc)) {
    plVar11 = *(long **)(lVar10 + 0x10 + (long)iVar4 * 8);
    plVar14 = *(long **)(lVar9 + 0x10 + (long)*(int *)(lVar9 + 8) * 8);
    bVar18 = plVar11 == (long *)0x0;
    lVar9 = 1;
    if (plVar14 != (long *)0x0 && bVar18) {
      uVar13 = 0x1d;
    }
    else if (plVar14 != (long *)0x0 || bVar18) {
      do {
        if (!bVar18) {
          iVar4 = (**(code **)(*plVar14 + 0x68))(plVar14);
          if ((iVar4 != 0xc) || (iVar4 = (**(code **)(*plVar11 + 0x68))(plVar11), iVar4 != 0xc)) {
            iVar4 = (**(code **)(*plVar14 + 0x68))(plVar14);
            uVar13 = 0x1e;
            if ((iVar4 != 0xd) || (iVar4 = (**(code **)(*plVar11 + 0x68))(plVar11), iVar4 != 0xd))
            goto LAB_1000d4097;
          }
          iVar4 = CVmDevice::getEnabled();
          iVar16 = CVmDevice::getEnabled();
          uVar13 = 0x1f;
          if (iVar4 != iVar16) goto LAB_1000d4097;
          lVar10 = *(long *)(lVar8 + 0x1d8);
        }
        if ((long)*(int *)(lVar10 + 0xc) - (long)*(int *)(lVar10 + 8) <= lVar9) goto LAB_1000d47ba;
        plVar11 = *(long **)(lVar10 + 0x10 + (*(int *)(lVar10 + 8) + lVar9) * 8);
        plVar14 = *(long **)(*(long *)(this + 0x1d8) + 0x10 +
                            (*(int *)(*(long *)(this + 0x1d8) + 8) + lVar9) * 8);
        bVar18 = plVar11 == (long *)0x0;
      } while ((plVar14 == (long *)0x0 || !bVar18) &&
              (lVar9 = lVar9 + 1, plVar14 != (long *)0x0 || bVar18));
      uVar13 = 0x1d;
    }
    else {
      uVar13 = 0x1d;
    }
    goto LAB_1000d4097;
  }
LAB_1000d47ba:
  lVar10 = *(long *)(lVar8 + 0x1e0);
  iVar4 = *(int *)(lVar10 + 8);
  lVar9 = *(long *)(this + 0x1e0);
  uVar13 = 0x1f;
  if (*(int *)(lVar10 + 0xc) - iVar4 != *(int *)(lVar9 + 0xc) - *(int *)(lVar9 + 8))
  goto LAB_1000d4097;
  if (iVar4 < *(int *)(lVar10 + 0xc)) {
    plVar11 = *(long **)(lVar10 + 0x10 + (long)iVar4 * 8);
    plVar14 = *(long **)(lVar9 + 0x10 + (long)*(int *)(lVar9 + 8) * 8);
    bVar18 = plVar11 == (long *)0x0;
    lVar9 = 1;
    if (plVar14 != (long *)0x0 && bVar18) {
      uVar13 = 0x20;
    }
    else if (plVar14 != (long *)0x0 || bVar18) {
      do {
        if (!bVar18) {
          iVar4 = (**(code **)(*plVar14 + 0x68))(plVar14);
          uVar13 = 0x21;
          if ((iVar4 != 0xf) || (iVar4 = (**(code **)(*plVar11 + 0x68))(plVar11), iVar4 != 0xf))
          goto LAB_1000d4097;
          iVar4 = CVmDevice::getEnabled();
          iVar16 = CVmDevice::getEnabled();
          uVar13 = 0x22;
          if (iVar4 != iVar16) goto LAB_1000d4097;
          lVar10 = *(long *)(lVar8 + 0x1e0);
        }
        if ((long)*(int *)(lVar10 + 0xc) - (long)*(int *)(lVar10 + 8) <= lVar9) goto LAB_1000d48fb;
        plVar11 = *(long **)(lVar10 + 0x10 + (*(int *)(lVar10 + 8) + lVar9) * 8);
        plVar14 = *(long **)(*(long *)(this + 0x1e0) + 0x10 +
                            (*(int *)(*(long *)(this + 0x1e0) + 8) + lVar9) * 8);
        bVar18 = plVar11 == (long *)0x0;
        if (plVar14 != (long *)0x0 && bVar18) {
          uVar13 = 0x20;
          goto LAB_1000d4097;
        }
        lVar9 = lVar9 + 1;
      } while (plVar14 != (long *)0x0 || bVar18);
      uVar13 = 0x20;
    }
    else {
      uVar13 = 0x20;
    }
    goto LAB_1000d4097;
  }
LAB_1000d48fb:
  CVmHardware::getMemory();
  iVar4 = CVmMemory::getRamSize();
  CVmHardware::getMemory();
  iVar16 = CVmMemory::getRamSize();
  uVar13 = 0x23;
  if (iVar4 != iVar16) goto LAB_1000d4097;
  uVar13 = CVmHardware::getMemory();
  CVmHardware::getMemory();
  CVmMemory::getRamSize();
  CVmMemory::setRamSize(uVar13);
  CVmHardware::getMemory();
  uVar7 = CVmMemory::getRamSize();
  *(undefined4 *)(lVar15 + 0x5ac) = uVar7;
  CVmHardware::getVideo();
  iVar4 = CVmVideo::getMemorySize();
  CVmHardware::getVideo();
  iVar16 = CVmVideo::getMemorySize();
  uVar13 = 0x24;
  if (iVar4 != iVar16) goto LAB_1000d4097;
  uVar13 = CVmHardware::getVideo();
  CVmHardware::getVideo();
  CVmVideo::getMemorySize();
  CVmVideo::setMemorySize(uVar13);
  CVmHardware::getVideo();
  uVar7 = CVmVideo::getMemorySize();
  *(undefined4 *)(lVar15 + 0x5b0) = uVar7;
  CVmHardware::getCpu();
  iVar4 = CVmCpu::getAccelerationLevel();
  CVmHardware::getCpu();
  iVar16 = CVmCpu::getAccelerationLevel();
  uVar13 = 0x25;
  if (iVar4 != iVar16) goto LAB_1000d4097;
  CVmHardware::getCpu();
  iVar4 = CVmCpu::getMode();
  CVmHardware::getCpu();
  iVar16 = CVmCpu::getMode();
  uVar13 = 0x26;
  if (iVar4 != iVar16) goto LAB_1000d4097;
  CVmHardware::getCpu();
  iVar4 = CVmCpu::getNumber();
  CVmHardware::getCpu();
  iVar16 = CVmCpu::getNumber();
  uVar13 = 0x27;
  if (iVar4 != iVar16) goto LAB_1000d4097;
  CVmSettings::getVmCommonOptions();
  iVar4 = CVmCommonOptions::getOsType();
  CVmSettings::getVmCommonOptions();
  iVar16 = CVmCommonOptions::getOsType();
  uVar13 = 0x2a;
  if (iVar4 != iVar16) goto LAB_1000d4097;
  CVmSettings::getVmCommonOptions();
  iVar4 = CVmCommonOptions::getOsVersion();
  CVmSettings::getVmCommonOptions();
  iVar16 = CVmCommonOptions::getOsVersion();
  uVar13 = 0x2b;
  if (iVar4 != iVar16) goto LAB_1000d4097;
  CVmSettings::getVmStartupOptions();
  CVmStartupOptions::getBootDeviceList();
  CVmSettings::getVmStartupOptions();
  CVmStartupOptions::getBootDeviceList();
  iVar4 = *(int *)(local_48 + 8);
  uVar13 = 0;
  bVar18 = false;
  if (iVar4 < *(int *)(local_48 + 0xc)) {
    lVar15 = 0;
    do {
      lVar8 = *(long *)(local_48 + lVar15 * 8 + (long)iVar4 * 8 + 0x10);
      lVar9 = *(long *)(local_50 + lVar15 * 8 + (long)*(int *)(local_50 + 8) * 8 + 0x10);
      bVar18 = true;
      uVar13 = 0x2c;
      if ((((**(int **)(lVar9 + 0xb8) != **(int **)(lVar8 + 0xb8)) ||
           (**(int **)(lVar9 + 0xc0) != **(int **)(lVar8 + 0xc0))) ||
          (**(int **)(lVar9 + 200) != **(int **)(lVar8 + 200))) ||
         (**(char **)(lVar9 + 0xd0) != **(char **)(lVar8 + 0xd0))) break;
      lVar15 = lVar15 + 1;
      uVar13 = 0;
      bVar18 = false;
    } while (lVar15 < *(int *)(local_48 + 0xc) - iVar4);
  }
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000d4bf3;
    }
    QListData::dispose(local_50);
  }
LAB_1000d4bf3:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000d4c19;
    }
    QListData::dispose(local_48);
  }
LAB_1000d4c19:
  if (!bVar18) {
    (**(code **)(*(long *)this + 0x20))();
    (**(code **)(*(long *)this_00 + 0x20))();
    uVar2 = DAT_1011c3650;
    local_68 = (void *)0x0;
    pvStack_60 = (void *)0x0;
    local_58 = 0;
    plVar11 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
    local_70 = (long *)0x0;
    if (plVar11 != (long *)0x0) {
      *(undefined4 *)(plVar11 + 1) = 1;
      plVar11[2] = 0;
      *plVar11 = (long)&PTR_FUN_100bef0d0;
      local_70 = plVar11;
    }
    FUN_100063770(uVar2,0x186a3,0,&local_68,0xbbb,&local_70);
    if (local_70 != (long *)0x0) {
      LOCK();
      plVar11 = local_70 + 1;
      lVar15 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)(*local_70 + 0x10))();
      }
    }
    if (local_68 == (void *)0x0) {
      return 0;
    }
    if (pvStack_60 != local_68) {
      pvStack_60 = (void *)((~((long)pvStack_60 + (-8 - (long)local_68)) & 0xfffffffffffffff8U) +
                           (long)pvStack_60);
    }
    operator_delete(local_68);
    return 0;
  }
LAB_1000d4097:
  uVar13 = -(uint)(uVar13 == 0) | uVar13;
  FUN_1008e3970("","vm",0,"CSnapshot::FnAfterLoad failed. Error=%u",uVar13);
  (**(code **)(*(long *)this + 0x20))();
  (**(code **)(*(long *)this_00 + 0x20))();
  return uVar13;
}

