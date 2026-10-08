
undefined8 FUN_100cef850(long param_1,long *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  QArrayData *pQVar4;
  long lVar5;
  char local_138 [24];
  char *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QString local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QString local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QString local_80;
  QString local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  pQVar4 = (QArrayData *)QString::fromAscii_helper("isolation",9);
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar4;
  local_60 = (QArrayData *)QString::fromAscii_helper("tools.hgfs.disable",0x12);
  pcVar1 = *(code **)*param_2;
  if (1 < *(int *)pQVar4 + 1U) {
    LOCK();
    *(int *)pQVar4 = *(int *)pQVar4 + 1;
    local_31 = *(int *)pQVar4 != 0;
    UNLOCK();
  }
  if (1 < *(int *)local_60 + 1U) {
    LOCK();
    *(int *)local_60 = *(int *)local_60 + 1;
    local_31 = *(int *)local_60 != 0;
    UNLOCK();
  }
  local_58 = pQVar4;
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_60;
  local_68 = (QArrayData *)QString::fromAscii_helper("FALSE",5);
  (*pcVar1)(&local_50,param_2,&local_58,&local_60,&local_68);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cef92a;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100cef92a:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cef95a;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100cef95a:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cef98a;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100cef98a:
  local_70 = (QArrayData *)QString::fromAscii_helper("FALSE",5);
  iVar2 = QString::compare(&local_50,&local_70,0);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cef9e0;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100cef9e0:
  *(bool *)(param_1 + 0x38) = iVar2 == 0;
  local_78.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("hgfs",4);
  QString::operator=(&local_40,&local_78);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_31 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cefa3f;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_100cefa3f:
  local_80.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)
       QString::fromAscii_helper("redirectShellFolder.maxNum",0x1a);
  QString::operator=(&local_48,&local_80);
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_31 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cefa91;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_100cefa91:
  pcVar1 = *(code **)(*param_2 + 0x10);
  local_88 = (QArrayData *)local_40.field0_0x0;
  if (1 < *(int *)local_40.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
    local_31 = *(int *)local_40.field0_0x0 != 0;
    UNLOCK();
  }
  local_90 = (QArrayData *)local_48.field0_0x0;
  if (1 < *(int *)local_48.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
    local_31 = *(int *)local_48.field0_0x0 != 0;
    UNLOCK();
  }
  iVar2 = (*pcVar1)(param_2,&local_88,&local_90,10,0);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cefb1d;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100cefb1d:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cefb4d;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100cefb4d:
  if (0 < iVar2) {
    lVar5 = 0;
    do {
      pQVar4 = (QArrayData *)QString::fromAscii_helper("hgfs",4);
      local_a0 = (QArrayData *)QString::fromAscii_helper("redirectShellFolder%1.enabled",0x1d);
      QString::arg(&local_98,&local_a0,lVar5,0,10,0x20);
      QString::operator=(&local_48,&local_98);
      if (*(int *)local_98.field0_0x0 != -1) {
        if (*(int *)local_98.field0_0x0 != 0) {
          LOCK();
          *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
          local_31 = *(int *)local_98.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cefbfe;
        }
        QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
      }
LAB_100cefbfe:
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cefc34;
        }
        QArrayData::deallocate(local_a0,2,8);
      }
LAB_100cefc34:
      pcVar1 = *(code **)*param_2;
      if (1 < *(int *)pQVar4 + 1U) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + 1;
        local_31 = *(int *)pQVar4 != 0;
        UNLOCK();
      }
      local_b8 = (QArrayData *)local_48.field0_0x0;
      if (1 < *(int *)local_48.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
      }
      local_b0 = pQVar4;
      local_c0 = (QArrayData *)QString::fromAscii_helper("FALSE",5);
      (*pcVar1)(&local_a8,param_2,&local_b0,&local_b8,&local_c0);
      if (*(int *)local_c0 != -1) {
        if (*(int *)local_c0 != 0) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + -1;
          local_31 = *(int *)local_c0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cefcdf;
        }
        QArrayData::deallocate(local_c0,2,8);
      }
LAB_100cefcdf:
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          local_31 = *(int *)local_b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cefd15;
        }
        QArrayData::deallocate(local_b8,2,8);
      }
LAB_100cefd15:
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_31 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cefd4b;
        }
        QArrayData::deallocate(local_b0,2,8);
      }
LAB_100cefd4b:
      local_d0 = (QArrayData *)QString::fromAscii_helper("redirectShellFolder%1.name",0x1a);
      QString::arg(&local_c8,&local_d0,lVar5,0,10,0x20);
      QString::operator=(&local_48,&local_c8);
      if (*(int *)local_c8.field0_0x0 != -1) {
        if (*(int *)local_c8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
          local_31 = *(int *)local_c8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cefdcd;
        }
        QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
      }
LAB_100cefdcd:
      if (*(int *)local_d0 != -1) {
        if (*(int *)local_d0 != 0) {
          LOCK();
          *(int *)local_d0 = *(int *)local_d0 + -1;
          local_31 = *(int *)local_d0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cefe03;
        }
        QArrayData::deallocate(local_d0,2,8);
      }
LAB_100cefe03:
      pcVar1 = *(code **)*param_2;
      if (1 < *(int *)pQVar4 + 1U) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + 1;
        local_31 = *(int *)pQVar4 != 0;
        UNLOCK();
      }
      local_e8 = (QArrayData *)local_48.field0_0x0;
      if (1 < *(int *)local_48.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
      }
      local_e0 = pQVar4;
      local_f0 = (QArrayData *)QString::fromAscii_helper("",0);
      (*pcVar1)(&local_d8,param_2,&local_e0,&local_e8,&local_f0);
      if (*(int *)local_f0 != -1) {
        if (*(int *)local_f0 != 0) {
          LOCK();
          *(int *)local_f0 = *(int *)local_f0 + -1;
          local_31 = *(int *)local_f0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cefeab;
        }
        QArrayData::deallocate(local_f0,2,8);
      }
LAB_100cefeab:
      if (*(int *)local_e8 != -1) {
        if (*(int *)local_e8 != 0) {
          LOCK();
          *(int *)local_e8 = *(int *)local_e8 + -1;
          local_31 = *(int *)local_e8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cefee1;
        }
        QArrayData::deallocate(local_e8,2,8);
      }
LAB_100cefee1:
      if (*(int *)local_e0 != -1) {
        if (*(int *)local_e0 != 0) {
          LOCK();
          *(int *)local_e0 = *(int *)local_e0 + -1;
          local_31 = *(int *)local_e0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ceff17;
        }
        QArrayData::deallocate(local_e0,2,8);
      }
LAB_100ceff17:
      local_f8 = (QArrayData *)QString::fromAscii_helper("TRUE",4);
      iVar3 = QString::compare(&local_a8,&local_f8,0);
      if (*(int *)local_f8 != -1) {
        if (*(int *)local_f8 != 0) {
          LOCK();
          *(int *)local_f8 = *(int *)local_f8 + -1;
          local_31 = *(int *)local_f8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ceff8a;
        }
        QArrayData::deallocate(local_f8,2,8);
      }
LAB_100ceff8a:
      if (iVar3 == 0) {
        local_100 = (QArrayData *)QString::fromAscii_helper("desktop",7);
        iVar3 = QString::compare(&local_d8,&local_100,0);
        if (*(int *)local_100 != -1) {
          if (*(int *)local_100 != 0) {
            LOCK();
            *(int *)local_100 = *(int *)local_100 + -1;
            local_31 = *(int *)local_100 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cefff8;
          }
          QArrayData::deallocate(local_100,2,8);
        }
LAB_100cefff8:
        if (iVar3 == 0) {
          *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) | 1;
        }
        else {
          local_108 = (QArrayData *)QString::fromAscii_helper("music",5);
          iVar3 = QString::compare(&local_d8,&local_108,0);
          if (*(int *)local_108 != -1) {
            if (*(int *)local_108 != 0) {
              LOCK();
              *(int *)local_108 = *(int *)local_108 + -1;
              local_31 = *(int *)local_108 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cf0065;
            }
            QArrayData::deallocate(local_108,2,8);
          }
LAB_100cf0065:
          if (iVar3 == 0) {
            *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) | 4;
          }
          else {
            local_110 = (QArrayData *)QString::fromAscii_helper("documents",9);
            iVar3 = QString::compare(&local_d8,&local_110,0);
            if (*(int *)local_110 != -1) {
              if (*(int *)local_110 != 0) {
                LOCK();
                *(int *)local_110 = *(int *)local_110 + -1;
                local_31 = *(int *)local_110 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100cf00d2;
              }
              QArrayData::deallocate(local_110,2,8);
            }
LAB_100cf00d2:
            if (iVar3 == 0) {
              *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) | 2;
            }
            else {
              local_118 = (QArrayData *)QString::fromAscii_helper("pictures",8);
              iVar3 = QString::compare(&local_d8,&local_118,0);
              if (*(int *)local_118 != -1) {
                if (*(int *)local_118 != 0) {
                  LOCK();
                  *(int *)local_118 = *(int *)local_118 + -1;
                  local_31 = *(int *)local_118 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100cf013f;
                }
                QArrayData::deallocate(local_118,2,8);
              }
LAB_100cf013f:
              if (iVar3 == 0) {
                *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) | 8;
              }
              else {
                local_138[0] = '\x02';
                local_138[1] = '\0';
                local_138[2] = '\0';
                local_138[3] = '\0';
                local_138[0x14] = '\0';
                local_138[0x15] = '\0';
                local_138[0x16] = '\0';
                local_138[0x17] = '\0';
                local_138[0xc] = '\0';
                local_138[0xd] = '\0';
                local_138[0xe] = '\0';
                local_138[0xf] = '\0';
                local_138[0x10] = '\0';
                local_138[0x11] = '\0';
                local_138[0x12] = '\0';
                local_138[0x13] = '\0';
                local_138[4] = '\0';
                local_138[5] = '\0';
                local_138[6] = '\0';
                local_138[7] = '\0';
                local_138[8] = '\0';
                local_138[9] = '\0';
                local_138[10] = '\0';
                local_138[0xb] = '\0';
                local_120 = "default";
                QMessageLogger::warning(local_138,"[LoadSPConfFromVmx] Unknown SP!!!!!!!");
              }
            }
          }
        }
      }
      if (*(int *)local_d8 != -1) {
        if (*(int *)local_d8 != 0) {
          LOCK();
          *(int *)local_d8 = *(int *)local_d8 + -1;
          local_31 = *(int *)local_d8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cf0213;
        }
        QArrayData::deallocate(local_d8,2,8);
      }
LAB_100cf0213:
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_31 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cf0249;
        }
        QArrayData::deallocate(local_a8,2,8);
      }
LAB_100cf0249:
      if (*(int *)pQVar4 != -1) {
        if (*(int *)pQVar4 != 0) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          local_31 = *(int *)pQVar4 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cf0276;
        }
        QArrayData::deallocate(pQVar4,2,8);
      }
LAB_100cf0276:
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar2);
  }
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cf02b6;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100cf02b6:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cf02e6;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_100cf02e6:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return 0x8000000;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return 0x8000000;
}

