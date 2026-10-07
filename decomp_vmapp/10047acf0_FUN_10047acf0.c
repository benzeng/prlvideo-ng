
undefined4 FUN_10047acf0(undefined8 param_1,long *param_2,QByteArray *param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined8 *puVar11;
  uint *puVar12;
  int *piVar13;
  undefined4 uVar14;
  bool bVar15;
  long *local_d8;
  QArrayData *local_c8;
  QString local_c0;
  QString local_b8;
  QDateTime local_b0 [8];
  QArrayData *local_a8;
  QString local_a0;
  QString local_98;
  QString local_90;
  QArrayData *local_88;
  QString local_80;
  QString local_78;
  uint local_70 [2];
  int *local_68;
  undefined1 local_60 [32];
  QString local_40;
  undefined1 local_31;
  
  lVar1 = *param_2;
  iVar6 = FUN_10078cf30(local_60,*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),0x10);
  if (iVar6 != 0) {
    return 0xffffffff;
  }
  FUN_1004795a0(&local_68);
  local_70[0] = 0;
  local_78.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  local_d8 = (long *)0x0;
  bVar4 = false;
  bVar15 = false;
  iVar6 = 0;
  while (iVar6 == 0) {
    iVar6 = FUN_10078d0d0(local_60);
    if (iVar6 == 0x2001) {
      piVar8 = (int *)FUN_10078d0a0(local_60);
      if (DAT_10111c800 == *piVar8) {
        bVar15 = DAT_10111c804 == piVar8[1];
      }
      else {
        bVar15 = false;
      }
      if (bVar15) {
        bVar4 = false;
      }
    }
    else if (iVar6 == -0x44444444) {
      piVar8 = (int *)FUN_10078d0a0(local_60);
      if (*piVar8 == 1) {
        bVar15 = piVar8[1] == 2;
      }
      else {
        bVar15 = false;
      }
      if (bVar15) {
        bVar4 = true;
      }
    }
    else {
      uVar14 = 0xfffffffe;
      if (!bVar15) goto LAB_10047b5c4;
      if (bVar4) {
        iVar6 = iVar6 + 0x44446445;
      }
      if (iVar6 < 0x2191) {
        if (iVar6 < 0x20ca) {
          if (iVar6 == 0x2065) {
            FUN_100476a20(param_1);
          }
          else if (iVar6 == 0x2066) {
            pcVar10 = (char *)FUN_10078d0a0(local_60);
            iVar6 = FUN_10078d0c0(local_60);
            if ((pcVar10 != (char *)0x0) && (iVar6 == -1)) {
              _strlen(pcVar10);
            }
            QString::fromUtf8_helper((char *)&local_88,(int)pcVar10);
            FUN_100476890(param_1,&local_88);
            if (*(int *)local_88 != -1) {
              if (*(int *)local_88 != 0) {
                LOCK();
                *(int *)local_88 = *(int *)local_88 + -1;
                local_31 = *(int *)local_88 != 0;
                UNLOCK();
                if ((bool)local_31) goto switchD_10047afc1_default;
              }
              QArrayData::deallocate(local_88,2,8);
            }
          }
        }
        else {
          switch(iVar6) {
          case 0x20ca:
            piVar8 = (int *)0x0;
            if ((local_68 != (int *)0x0) && (piVar8 = local_68, *local_68 != 1)) {
              FUN_100031c40(&local_68);
              piVar8 = local_68;
            }
            pcVar10 = (char *)FUN_10078d0a0(local_60);
            iVar6 = FUN_10078d0c0(local_60);
            if ((pcVar10 != (char *)0x0) && (iVar6 == -1)) {
              _strlen(pcVar10);
            }
            QString::fromUtf8_helper((char *)&local_98,(int)pcVar10);
            QString::operator=((QString *)(piVar8 + 4),&local_98);
            if (*(int *)local_98.field0_0x0 != -1) {
              if (*(int *)local_98.field0_0x0 != 0) {
                LOCK();
                *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
                local_31 = *(int *)local_98.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10047b066;
              }
              QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
            }
LAB_10047b066:
            local_70[0] = local_70[0] | 2;
            break;
          case 0x20cb:
            piVar8 = (int *)0x0;
            if ((local_68 != (int *)0x0) && (piVar8 = local_68, *local_68 != 1)) {
              FUN_100031c40(&local_68);
              piVar8 = local_68;
            }
            puVar11 = (undefined8 *)FUN_10078d0a0(local_60);
            *(undefined8 *)(piVar8 + 0xe) = puVar11[4];
            *(undefined8 *)(piVar8 + 0xc) = puVar11[3];
            *(undefined8 *)(piVar8 + 10) = puVar11[2];
            uVar2 = *puVar11;
            *(undefined8 *)(piVar8 + 8) = puVar11[1];
            *(undefined8 *)(piVar8 + 6) = uVar2;
            local_70[0] = local_70[0] | 4;
            break;
          case 0x20cc:
            piVar8 = (int *)0x0;
            if ((local_68 != (int *)0x0) && (piVar8 = local_68, *local_68 != 1)) {
              FUN_100031c40(&local_68);
              piVar8 = local_68;
            }
            pcVar10 = (char *)FUN_10078d0a0(local_60);
            iVar6 = FUN_10078d0c0(local_60);
            if ((pcVar10 != (char *)0x0) && (iVar6 == -1)) {
              _strlen(pcVar10);
            }
            QString::fromUtf8_helper((char *)&local_a0,(int)pcVar10);
            QString::operator=((QString *)(piVar8 + 0x10),&local_a0);
            if (*(int *)local_a0.field0_0x0 != -1) {
              if (*(int *)local_a0.field0_0x0 != 0) {
                LOCK();
                *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
                local_31 = *(int *)local_a0.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10047b274;
              }
              QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
            }
LAB_10047b274:
            local_70[0] = local_70[0] | 8;
            break;
          case 0x20cd:
            piVar8 = (int *)0x0;
            if ((local_68 != (int *)0x0) && (piVar8 = local_68, *local_68 != 1)) {
              FUN_100031c40(&local_68);
              piVar8 = local_68;
            }
            pcVar10 = (char *)FUN_10078d0a0(local_60);
            iVar6 = FUN_10078d0c0(local_60);
            QByteArray::QByteArray((QByteArray *)&local_a8,pcVar10,iVar6);
            QByteArray::operator=((QByteArray *)(piVar8 + 0x12),(QByteArray *)&local_a8);
            if (*(int *)local_a8 != -1) {
              if (*(int *)local_a8 != 0) {
                LOCK();
                *(int *)local_a8 = *(int *)local_a8 + -1;
                local_31 = *(int *)local_a8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10047b30e;
              }
              QArrayData::deallocate(local_a8,1,8);
            }
LAB_10047b30e:
            local_70[0] = local_70[0] | 0x10;
            break;
          case 0x20ce:
            FUN_10047bb30(local_b0,local_60);
            FUN_100479760(&local_68,local_b0);
            QDateTime::~QDateTime(local_b0);
            local_70[0] = local_70[0] | 0x40;
            break;
          case 0x20cf:
            puVar12 = (uint *)FUN_10078d0a0(local_60);
            uVar3 = *puVar12;
            if (2 < *puVar12) {
              uVar3 = 0xffff;
            }
            if (*local_68 != 1) {
              FUN_100031c40(&local_68);
            }
            local_68[0x16] = uVar3;
            local_70[0] = local_70[0] | 0x20;
            break;
          case 0x20d0:
            piVar8 = (int *)0x0;
            if ((local_68 != (int *)0x0) && (piVar8 = local_68, *local_68 != 1)) {
              FUN_100031c40(&local_68);
              piVar8 = local_68;
            }
            piVar13 = (int *)FUN_10078d0a0(local_60);
            piVar8[0x1a] = *piVar13;
            local_70[0] = local_70[0] | 0x100;
            break;
          case 0x20d1:
            pcVar10 = (char *)FUN_10078d0a0(local_60);
            iVar6 = FUN_10078d0c0(local_60);
            if ((pcVar10 != (char *)0x0) && (iVar6 == -1)) {
              _strlen(pcVar10);
            }
            QString::fromUtf8_helper((char *)&local_b8,(int)pcVar10);
            QString::operator=(&local_78,&local_b8);
            if (*(int *)local_b8.field0_0x0 != -1) {
              if (*(int *)local_b8.field0_0x0 != 0) {
                LOCK();
                *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
                local_31 = *(int *)local_b8.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) break;
              }
              QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
            }
            break;
          case 0x20d2:
            pcVar10 = (char *)FUN_10078d0a0(local_60);
            iVar6 = FUN_10078d0c0(local_60);
            if ((pcVar10 != (char *)0x0) && (iVar6 == -1)) {
              _strlen(pcVar10);
            }
            QString::fromUtf8_helper((char *)&local_c0,(int)pcVar10);
            QString::operator=(&local_80,&local_c0);
            if (*(int *)local_c0.field0_0x0 != -1) {
              if (*(int *)local_c0.field0_0x0 != 0) {
                LOCK();
                *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
                local_31 = *(int *)local_c0.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10047b4bf;
              }
              QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
            }
LAB_10047b4bf:
            FUN_1004770d0(param_1,&local_78,&local_80);
          }
        }
      }
      else if (iVar6 == 0x2191) {
        piVar8 = (int *)0x0;
        if ((local_68 != (int *)0x0) && (piVar8 = local_68, *local_68 != 1)) {
          FUN_100031c40(&local_68);
          piVar8 = local_68;
        }
        pcVar10 = (char *)FUN_10078d0a0(local_60);
        iVar6 = FUN_10078d0c0(local_60);
        if ((pcVar10 != (char *)0x0) && (iVar6 == -1)) {
          _strlen(pcVar10);
        }
        QString::fromUtf8_helper((char *)&local_90,(int)pcVar10);
        QString::operator=((QString *)(piVar8 + 2),&local_90);
        if (*(int *)local_90.field0_0x0 != -1) {
          if (*(int *)local_90.field0_0x0 != 0) {
            LOCK();
            *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
            local_31 = *(int *)local_90.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10047af06;
          }
          QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
        }
LAB_10047af06:
        FUN_100476240(param_1,&local_68,local_70,param_4);
        piVar8 = (int *)0x0;
        if ((local_68 != (int *)0x0) && (piVar8 = local_68, *local_68 != 1)) {
          FUN_100031c40(&local_68);
          piVar8 = local_68;
        }
        if (*(undefined **)(piVar8 + 2) != PTR_shared_null_100ba20d0) {
          local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
          QString::operator=((QString *)(piVar8 + 2),&local_40);
          if (*(int *)local_40.field0_0x0 != -1) {
            if (*(int *)local_40.field0_0x0 != 0) {
              LOCK();
              *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
              local_31 = *(int *)local_40.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10047af99;
            }
            QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
          }
        }
LAB_10047af99:
        local_70[0] = 0;
      }
      else if ((iVar6 == 0x2259) &&
              (cVar5 = FUN_100476f00(param_1,&local_78,&local_80), cVar5 != '\0')) {
        if (local_d8 == (long *)0x0) {
          local_d8 = operator_new(0x28);
          FUN_10047a290(local_d8);
        }
        puVar9 = (undefined4 *)FUN_10078d0a0(local_60);
        FUN_10047a900(local_d8,&local_78,&local_80,*puVar9);
      }
    }
switchD_10047afc1_default:
    iVar6 = FUN_10078d020(local_60);
  }
  if ((local_d8 != (long *)0x0) && (iVar6 == -7)) {
    pcVar10 = (char *)(**(code **)(*local_d8 + 0x10))(local_d8);
    iVar7 = (**(code **)(*local_d8 + 0x18))(local_d8);
    QByteArray::QByteArray((QByteArray *)&local_c8,pcVar10,iVar7);
    QByteArray::operator=(param_3,(QByteArray *)&local_c8);
    if (*(int *)local_c8 != -1) {
      if (*(int *)local_c8 != 0) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + -1;
        local_31 = *(int *)local_c8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10047b5b5;
      }
      QArrayData::deallocate(local_c8,1,8);
    }
  }
LAB_10047b5b5:
  uVar14 = 0xffffffff;
  if (iVar6 == -7) {
    uVar14 = 0;
  }
LAB_10047b5c4:
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_31 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047b5f4;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_10047b5f4:
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_31 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047b62b;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_10047b62b:
  if (local_68 != (int *)0x0) {
    LOCK();
    *local_68 = *local_68 + -1;
    local_31 = *local_68 != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_68 != (int *)0x0)) {
      FUN_100031ed0(local_68);
      operator_delete(local_68);
    }
  }
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 8))(local_d8);
  }
  return uVar14;
}

