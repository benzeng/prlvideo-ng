
undefined4
FUN_1005dc7b0(QString *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long *plVar1;
  QArrayData *pQVar2;
  undefined *puVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  QArrayData *pQVar7;
  long lVar8;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  long local_128 [2];
  QArrayData *local_118;
  undefined *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  undefined *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  undefined *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  undefined *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  undefined *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  undefined *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  long *local_40;
  undefined1 local_31;
  
  FUN_10069e530(&local_40);
  puVar3 = PTR_shared_null_100ba20d0;
  if ((local_40 == (long *)0x0) || (local_40[2] == 0)) {
    uVar5 = 0x80021020;
    FUN_1008e3970("","vdisk",0,"Error: VMDK parser creation failed");
    goto LAB_1005dd372;
  }
  local_48 = (QArrayData *)PTR_shared_null_100ba20d0;
  local_50 = (QArrayData *)PTR_shared_null_100ba20d0;
  FUN_10069f960(&local_48,param_5,&local_50);
  local_60 = (QArrayData *)puVar3;
  puVar6 = (undefined8 *)QString::sprintf((char *)&local_60,"%08x",0xffffffff);
  pQVar2 = (QArrayData *)*puVar6;
  if (1 < *(int *)pQVar2 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    local_31 = *(int *)pQVar2 != 0;
    UNLOCK();
  }
  local_58 = pQVar2;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005dc88f;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1005dc88f:
  lVar8 = 0;
  if (local_40 != (long *)0x0) {
    lVar8 = local_40[2];
  }
  local_68 = (QArrayData *)QString::fromAscii_helper("HEADER",6);
  local_70 = (QArrayData *)QString::fromAscii_helper("version",7);
  puVar3 = PTR_shared_null_100ba2188;
  local_78 = PTR_shared_null_100ba2188;
  local_88 = (QArrayData *)QString::fromAscii_helper("%1",2);
  QString::arg(&local_80,&local_88,1,0,10,0x20);
  FUN_10000c490(&local_78,&local_80);
  cVar4 = FUN_1006ad450(lVar8,&local_68,&local_70,&local_78);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005dc95c;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1005dc95c:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005dc98c;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1005dc98c:
  FUN_100013180(&local_78);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005dc9c5;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1005dc9c5:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005dc9f5;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1005dc9f5:
  if (cVar4 == '\0') {
    uVar5 = 0x80021011;
    FUN_1008e3970("","vdisk",0,"Error: can\'t insert %s into descriptor!","version");
  }
  else {
    lVar8 = 0;
    if (local_40 != (long *)0x0) {
      lVar8 = local_40[2];
    }
    local_90 = (QArrayData *)QString::fromAscii_helper("HEADER",6);
    local_98 = (QArrayData *)QString::fromAscii_helper("encoding",8);
    local_a0 = puVar3;
    pQVar7 = (QArrayData *)QString::fromAscii_helper("UTF-8",5);
    local_a8 = pQVar7;
    FUN_10000c490(&local_a0,&local_a8);
    cVar4 = FUN_1006ad450(lVar8,&local_90,&local_98,&local_a0);
    if (*(int *)pQVar7 != -1) {
      if (*(int *)pQVar7 != 0) {
        LOCK();
        *(int *)pQVar7 = *(int *)pQVar7 + -1;
        local_31 = *(int *)pQVar7 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005dcac8;
      }
      QArrayData::deallocate(pQVar7,2,8);
    }
LAB_1005dcac8:
    FUN_100013180(&local_a0);
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005dcb11;
      }
      QArrayData::deallocate(local_98,2,8);
    }
LAB_1005dcb11:
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005dcb47;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_1005dcb47:
    if (cVar4 == '\0') {
      uVar5 = 0x80021011;
      FUN_1008e3970("","vdisk",0,"Error: can\'t insert %s into descriptor!","encoding");
    }
    else {
      lVar8 = 0;
      if (local_40 != (long *)0x0) {
        lVar8 = local_40[2];
      }
      local_b0 = (QArrayData *)QString::fromAscii_helper("HEADER",6);
      local_b8 = (QArrayData *)QString::fromAscii_helper("CID",3);
      local_c0 = puVar3;
      FUN_10000c490(&local_c0,&local_48);
      cVar4 = FUN_1006ad450(lVar8,&local_b0,&local_b8,&local_c0);
      FUN_100013180(&local_c0);
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          local_31 = *(int *)local_b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005dcc07;
        }
        QArrayData::deallocate(local_b8,2,8);
      }
LAB_1005dcc07:
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_31 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005dcc3d;
        }
        QArrayData::deallocate(local_b0,2,8);
      }
LAB_1005dcc3d:
      if (cVar4 == '\0') {
        uVar5 = 0x80021011;
        FUN_1008e3970("","vdisk",0,"Error: can\'t insert %s into descriptor!","CID");
      }
      else {
        lVar8 = 0;
        if (local_40 != (long *)0x0) {
          lVar8 = local_40[2];
        }
        local_c8 = (QArrayData *)QString::fromAscii_helper("HEADER",6);
        local_d0 = (QArrayData *)QString::fromAscii_helper("parentCID",9);
        local_d8 = puVar3;
        FUN_10000c490(&local_d8,&local_58);
        cVar4 = FUN_1006ad450(lVar8,&local_c8,&local_d0,&local_d8);
        FUN_100013180(&local_d8);
        if (*(int *)local_d0 != -1) {
          if (*(int *)local_d0 != 0) {
            LOCK();
            *(int *)local_d0 = *(int *)local_d0 + -1;
            local_31 = *(int *)local_d0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1005dccfc;
          }
          QArrayData::deallocate(local_d0,2,8);
        }
LAB_1005dccfc:
        if (*(int *)local_c8 != -1) {
          if (*(int *)local_c8 != 0) {
            LOCK();
            *(int *)local_c8 = *(int *)local_c8 + -1;
            local_31 = *(int *)local_c8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1005dcd32;
          }
          QArrayData::deallocate(local_c8,2,8);
        }
LAB_1005dcd32:
        if (cVar4 == '\0') {
          uVar5 = 0x80021011;
          FUN_1008e3970("","vdisk",0,"Error: can\'t insert %s into descriptor!","parentCID");
        }
        else {
          lVar8 = 0;
          if (local_40 != (long *)0x0) {
            lVar8 = local_40[2];
          }
          local_e0 = (QArrayData *)QString::fromAscii_helper("HEADER",6);
          local_e8 = (QArrayData *)QString::fromAscii_helper("isNativeSnapshot",0x10);
          local_f0 = puVar3;
          pQVar7 = (QArrayData *)QString::fromAscii_helper("no",2);
          local_f8 = pQVar7;
          FUN_10000c490(&local_f0,&local_f8);
          cVar4 = FUN_1006ad450(lVar8,&local_e0,&local_e8,&local_f0);
          if (*(int *)pQVar7 != -1) {
            if (*(int *)pQVar7 != 0) {
              LOCK();
              *(int *)pQVar7 = *(int *)pQVar7 + -1;
              local_31 = *(int *)pQVar7 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1005dcdfd;
            }
            QArrayData::deallocate(pQVar7,2,8);
          }
LAB_1005dcdfd:
          FUN_100013180(&local_f0);
          if (*(int *)local_e8 != -1) {
            if (*(int *)local_e8 != 0) {
              LOCK();
              *(int *)local_e8 = *(int *)local_e8 + -1;
              local_31 = *(int *)local_e8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1005dce46;
            }
            QArrayData::deallocate(local_e8,2,8);
          }
LAB_1005dce46:
          if (*(int *)local_e0 != -1) {
            if (*(int *)local_e0 != 0) {
              LOCK();
              *(int *)local_e0 = *(int *)local_e0 + -1;
              local_31 = *(int *)local_e0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1005dce7c;
            }
            QArrayData::deallocate(local_e0,2,8);
          }
LAB_1005dce7c:
          if (cVar4 == '\0') {
            uVar5 = 0x80021011;
            FUN_1008e3970("","vdisk",0,"Error: can\'t insert %s into descriptor!","isNativeSnapshot"
                         );
          }
          else {
            lVar8 = 0;
            if (local_40 != (long *)0x0) {
              lVar8 = local_40[2];
            }
            local_100 = (QArrayData *)QString::fromAscii_helper("HEADER",6);
            local_108 = (QArrayData *)QString::fromAscii_helper("createType",10);
            local_110 = puVar3;
            FUN_1005d8020(&local_118,param_2);
            FUN_10000c490(&local_110,&local_118);
            cVar4 = FUN_1006ad450(lVar8,&local_100,&local_108,&local_110);
            if (*(int *)local_118 != -1) {
              if (*(int *)local_118 != 0) {
                LOCK();
                *(int *)local_118 = *(int *)local_118 + -1;
                local_31 = *(int *)local_118 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1005dcf3e;
              }
              QArrayData::deallocate(local_118,2,8);
            }
LAB_1005dcf3e:
            FUN_100013180(&local_110);
            if (*(int *)local_108 != -1) {
              if (*(int *)local_108 != 0) {
                LOCK();
                *(int *)local_108 = *(int *)local_108 + -1;
                local_31 = *(int *)local_108 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1005dcf87;
              }
              QArrayData::deallocate(local_108,2,8);
            }
LAB_1005dcf87:
            if (*(int *)local_100 != -1) {
              if (*(int *)local_100 != 0) {
                LOCK();
                *(int *)local_100 = *(int *)local_100 + -1;
                local_31 = *(int *)local_100 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1005dcfbd;
              }
              QArrayData::deallocate(local_100,2,8);
            }
LAB_1005dcfbd:
            if (cVar4 == '\0') {
              uVar5 = 0x80021011;
              FUN_1008e3970("","vdisk",0,"Error: can\'t insert %s into descriptor!","createType");
            }
            else {
              QFile::QFile((QFile *)local_128,param_1);
              cVar4 = QFile::open(local_128,2);
              puVar3 = PTR_shared_null_100ba20d0;
              if (cVar4 == '\0') {
                QString::toUtf8();
                FUN_1008e3970("","vdisk",0,"Error: can\'t open VMDK file \'%s\' for writing",
                              local_130 + *(long *)(local_130 + 0x10));
                uVar5 = 0x80021027;
                if (*(int *)local_130 != -1) {
                  if (*(int *)local_130 != 0) {
                    LOCK();
                    *(int *)local_130 = *(int *)local_130 + -1;
                    local_31 = *(int *)local_130 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1005dd2d7;
                  }
                  QArrayData::deallocate(local_130,1,8);
                }
              }
              else {
                lVar8 = 0;
                if (local_40 != (long *)0x0) {
                  lVar8 = local_40[2];
                }
                lVar8 = FUN_1006b1100(lVar8,local_128,0);
                if (lVar8 == 0) {
                  QString::toUtf8();
                  FUN_1008e3970("","vdisk",0,"Error: write to VMDK file \'%s\' failed",
                                local_138 + *(long *)(local_138 + 0x10));
                  uVar5 = 0x80021027;
                  if (*(int *)local_138 != -1) {
                    if (*(int *)local_138 != 0) {
                      LOCK();
                      *(int *)local_138 = *(int *)local_138 + -1;
                      local_31 = *(int *)local_138 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1005dd2d7;
                    }
                    QArrayData::deallocate(local_138,1,8);
                  }
                }
                else {
                  (**(code **)(local_128[0] + 0x70))(local_128);
                  local_140 = (QArrayData *)puVar3;
                  uVar5 = FUN_1005db1c0(param_1,param_3,param_4,&local_140);
                  if (*(int *)local_140 != -1) {
                    if (*(int *)local_140 != 0) {
                      LOCK();
                      *(int *)local_140 = *(int *)local_140 + -1;
                      local_31 = *(int *)local_140 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1005dd2d7;
                    }
                    QArrayData::deallocate(local_140,2,8);
                  }
                }
              }
LAB_1005dd2d7:
              QFile::~QFile((QFile *)local_128);
            }
          }
        }
      }
    }
  }
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_31 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005dd312;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1005dd312:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005dd342;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1005dd342:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005dd372;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1005dd372:
  if (local_40 != (long *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  return uVar5;
}

