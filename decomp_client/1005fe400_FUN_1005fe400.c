
QStringList * FUN_1005fe400(QStringList *param_1,long param_2)

{
  Data *pDVar1;
  char *pcVar2;
  size_t sVar3;
  QArrayData *pQVar4;
  Data *pDVar5;
  int iVar6;
  long lVar7;
  Data *local_1b8;
  QArrayData *local_1b0;
  QLocale local_1a8 [8];
  QArrayData *local_1a0;
  QArrayData *local_198;
  QArrayData *local_190;
  QArrayData *local_188;
  QArrayData *local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
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
  QArrayData *local_c8;
  QLocale local_c0 [8];
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
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
  undefined1 local_29;
  
  local_1b8 = (Data *)PTR_shared_null_1021e15e8;
  iVar6 = *(int *)(param_2 + 0x10);
  switch(*(undefined4 *)(param_2 + 0x80)) {
  case 0:
    QMetaObject::tr((char *)&local_38,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_You_have_selected_to_create_a_bl_10226f0b0);
    FUN_1000341d0(&local_1b8,&local_38);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_29 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005fe60b;
      }
      QArrayData::deallocate(local_38,2,8);
    }
LAB_1005fe60b:
    QMetaObject::tr((char *)&local_40,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_No_operating_system_will_be_inst_10226f0b8);
    FUN_1000341d0(&local_1b8);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_29 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005fe66d;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_1005fe66d:
    pQVar4 = (QArrayData *)QString::fromAscii_helper("",0);
    local_48 = pQVar4;
    FUN_1000341d0(&local_1b8);
    if (*(int *)pQVar4 != -1) {
      if (*(int *)pQVar4 != 0) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + -1;
        local_29 = *(int *)pQVar4 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005ff522;
      }
      QArrayData::deallocate(pQVar4,2,8);
    }
    goto LAB_1005ff522;
  case 1:
    if (iVar6 == 0xff) {
      if (*(char *)(param_2 + 0x88) == '\0') {
        QMetaObject::tr((char *)&local_90,PTR_staticMetaObject_1021e1520,
                        (int)PTR_s_Insert_the_disc_into_the_DVD_dri_10226f0e0);
        FUN_1000341d0(&local_1b8,&local_90);
        if (*(int *)local_90 != -1) {
          if (*(int *)local_90 != 0) {
            LOCK();
            *(int *)local_90 = *(int *)local_90 + -1;
            local_29 = *(int *)local_90 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1005ff147;
          }
          QArrayData::deallocate(local_90,2,8);
        }
LAB_1005ff147:
        QMetaObject::tr((char *)&local_98,PTR_staticMetaObject_1021e1520,
                        (int)PTR_s_If_your_Mac_doesn_t_have_a_DVD_d_10226f0e8);
        FUN_1000341d0(&local_1b8,&local_98);
        if (*(int *)local_98 != -1) {
          if (*(int *)local_98 != 0) {
            LOCK();
            *(int *)local_98 = *(int *)local_98 + -1;
            local_29 = *(int *)local_98 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1005ff1b5;
          }
          QArrayData::deallocate(local_98,2,8);
        }
LAB_1005ff1b5:
        QMetaObject::tr((char *)&local_a8,PTR_staticMetaObject_1021e1520,
                        (int)PTR_s_<style>a___color___aaddf0___<_st_10226f0f0);
        local_b8 = (QArrayData *)
                   QString::fromAscii_helper
                             ("http://www.parallels.com/products/desktop/pdfm12-apple-remote-disk-kb-@LOCALE@"
                              ,0x4e);
        QLocale::QLocale(local_c0);
        FUN_100d3f730(&local_b0,&local_b8,local_c0);
        QString::arg(&local_a0,&local_a8,&local_b0,0,0x20);
        FUN_1000341d0(&local_1b8);
        if (*(int *)local_a0 != -1) {
          if (*(int *)local_a0 != 0) {
            LOCK();
            *(int *)local_a0 = *(int *)local_a0 + -1;
            local_29 = *(int *)local_a0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1005ff283;
          }
          QArrayData::deallocate(local_a0,2,8);
        }
LAB_1005ff283:
        if (*(int *)local_b0 != -1) {
          if (*(int *)local_b0 != 0) {
            LOCK();
            *(int *)local_b0 = *(int *)local_b0 + -1;
            local_29 = *(int *)local_b0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1005ff2b9;
          }
          QArrayData::deallocate(local_b0,2,8);
        }
LAB_1005ff2b9:
        QLocale::~QLocale(local_c0);
        if (*(int *)local_b8 != -1) {
          if (*(int *)local_b8 != 0) {
            LOCK();
            *(int *)local_b8 = *(int *)local_b8 + -1;
            local_29 = *(int *)local_b8 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1005ff2fb;
          }
          QArrayData::deallocate(local_b8,2,8);
        }
LAB_1005ff2fb:
        if (*(int *)local_a8 != -1) {
          if (*(int *)local_a8 != 0) {
            LOCK();
            *(int *)local_a8 = *(int *)local_a8 + -1;
            local_29 = *(int *)local_a8 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1005ff522;
          }
          QArrayData::deallocate(local_a8,2,8);
        }
      }
      else {
        QMetaObject::tr((char *)&local_78,PTR_staticMetaObject_1021e1520,
                        (int)PTR_s_Unable_to_detect_operating_syste_10226f170);
        FUN_1000341d0(&local_1b8,&local_78);
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_29 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1005fed6a;
          }
          QArrayData::deallocate(local_78,2,8);
        }
LAB_1005fed6a:
        QMetaObject::tr((char *)&local_80,PTR_staticMetaObject_1021e1520,(int)PTR_s__10226f178);
        FUN_1000341d0(&local_1b8,&local_80);
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_29 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1005fedcc;
          }
          QArrayData::deallocate(local_80,2,8);
        }
LAB_1005fedcc:
        QMetaObject::tr((char *)&local_88,PTR_staticMetaObject_1021e1520,
                        (int)PTR_s_Click_Continue_to_proceed_anyway_10226f180);
        FUN_1000341d0(&local_1b8);
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_29 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1005ff522;
          }
          QArrayData::deallocate(local_88,2,8);
        }
      }
      goto LAB_1005ff522;
    }
    iVar6 = -1;
    QMetaObject::tr((char *)&local_58,PTR_staticMetaObject_1021e1520,(int)PTR_s__1_10226f0c8);
    pcVar2 = (char *)FUN_1006005c0(*(undefined4 *)(param_2 + 0x10));
    if (pcVar2 != (char *)0x0) {
      sVar3 = _strlen(pcVar2);
      iVar6 = (int)sVar3;
    }
    local_60 = (QArrayData *)QString::fromAscii_helper(pcVar2,iVar6);
    QString::arg(&local_50,&local_58,&local_60,0,0x20);
    FUN_1000341d0(&local_1b8,&local_50);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_29 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005fe783;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_1005fe783:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_29 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005fe7b3;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_1005fe7b3:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_29 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005fe7e3;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_1005fe7e3:
    QMetaObject::tr((char *)&local_68,PTR_staticMetaObject_1021e1520,(int)PTR_s__10226f0d0);
    FUN_1000341d0(&local_1b8,&local_68);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_29 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005fe845;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_1005fe845:
    QMetaObject::tr((char *)&local_70,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Click_Continue_to_begin_the_inst_10226f0d8);
    FUN_1000341d0(&local_1b8);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_29 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_29) break;
      }
      QArrayData::deallocate(local_70,2,8);
    }
    break;
  case 2:
    if (iVar6 == 0xff) {
      if (*(char *)(param_2 + 0x88) == '\0') {
        QMetaObject::tr((char *)&local_108,PTR_staticMetaObject_1021e1520,
                        (int)PTR_s_Drag_the_image_file_here__10226f0f8);
        FUN_1000341d0(&local_1b8,&local_108);
        if (*(int *)local_108 != -1) {
          if (*(int *)local_108 != 0) {
            LOCK();
            *(int *)local_108 = *(int *)local_108 + -1;
            local_29 = *(int *)local_108 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1005ff3ac;
          }
          QArrayData::deallocate(local_108,2,8);
        }
LAB_1005ff3ac:
        QMetaObject::tr((char *)&local_118,PTR_staticMetaObject_1021e1520,
                        (int)PTR_s__1_supports__iso___img___dmg_fil_10226f100);
        FUN_1001c72b0(&local_120);
        QString::arg(&local_110,&local_118,&local_120,0,0x20);
        FUN_1000341d0(&local_1b8,&local_110);
        if (*(int *)local_110 != -1) {
          if (*(int *)local_110 != 0) {
            LOCK();
            *(int *)local_110 = *(int *)local_110 + -1;
            local_29 = *(int *)local_110 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1005ff448;
          }
          QArrayData::deallocate(local_110,2,8);
        }
LAB_1005ff448:
        if (*(int *)local_120 != -1) {
          if (*(int *)local_120 != 0) {
            LOCK();
            *(int *)local_120 = *(int *)local_120 + -1;
            local_29 = *(int *)local_120 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1005ff47e;
          }
          QArrayData::deallocate(local_120,2,8);
        }
LAB_1005ff47e:
        if (*(int *)local_118 != -1) {
          if (*(int *)local_118 != 0) {
            LOCK();
            *(int *)local_118 = *(int *)local_118 + -1;
            local_29 = *(int *)local_118 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1005ff4b4;
          }
          QArrayData::deallocate(local_118,2,8);
        }
LAB_1005ff4b4:
        QMetaObject::tr((char *)&local_128,PTR_staticMetaObject_1021e1520,
                        (int)PTR_s_Drop_the_file_here_or_use_the__C_10226f108);
        FUN_1000341d0(&local_1b8);
        if (*(int *)local_128 != -1) {
          if (*(int *)local_128 != 0) {
            LOCK();
            *(int *)local_128 = *(int *)local_128 + -1;
            local_29 = *(int *)local_128 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1005ff522;
          }
          QArrayData::deallocate(local_128,2,8);
        }
      }
      else {
        QMetaObject::tr((char *)&local_f0,PTR_staticMetaObject_1021e1520,
                        (int)PTR_s_Unable_to_detect_operating_syste_10226f188);
        FUN_1000341d0(&local_1b8,&local_f0);
        if (*(int *)local_f0 != -1) {
          if (*(int *)local_f0 != 0) {
            LOCK();
            *(int *)local_f0 = *(int *)local_f0 + -1;
            local_29 = *(int *)local_f0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1005feeb1;
          }
          QArrayData::deallocate(local_f0,2,8);
        }
LAB_1005feeb1:
        QMetaObject::tr((char *)&local_f8,PTR_staticMetaObject_1021e1520,(int)PTR_s__10226f190);
        FUN_1000341d0(&local_1b8,&local_f8);
        if (*(int *)local_f8 != -1) {
          if (*(int *)local_f8 != 0) {
            LOCK();
            *(int *)local_f8 = *(int *)local_f8 + -1;
            local_29 = *(int *)local_f8 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1005fef1f;
          }
          QArrayData::deallocate(local_f8,2,8);
        }
LAB_1005fef1f:
        QMetaObject::tr((char *)&local_100,PTR_staticMetaObject_1021e1520,
                        (int)PTR_s_Click_Continue_to_proceed_anyway_10226f198);
        FUN_1000341d0(&local_1b8);
        if (*(int *)local_100 != -1) {
          if (*(int *)local_100 != 0) {
            LOCK();
            *(int *)local_100 = *(int *)local_100 + -1;
            local_29 = *(int *)local_100 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1005ff522;
          }
          QArrayData::deallocate(local_100,2,8);
        }
      }
      goto LAB_1005ff522;
    }
    iVar6 = -1;
    QMetaObject::tr((char *)&local_d0,PTR_staticMetaObject_1021e1520,(int)PTR_s__1_10226f110);
    pcVar2 = (char *)FUN_1006005c0(*(undefined4 *)(param_2 + 0x10));
    if (pcVar2 != (char *)0x0) {
      sVar3 = _strlen(pcVar2);
      iVar6 = (int)sVar3;
    }
    local_d8 = (QArrayData *)QString::fromAscii_helper(pcVar2,iVar6);
    QString::arg(&local_c8,&local_d0,&local_d8,0,0x20);
    FUN_1000341d0(&local_1b8,&local_c8);
    if (*(int *)local_c8 != -1) {
      if (*(int *)local_c8 != 0) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + -1;
        local_29 = *(int *)local_c8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005fe985;
      }
      QArrayData::deallocate(local_c8,2,8);
    }
LAB_1005fe985:
    if (*(int *)local_d8 != -1) {
      if (*(int *)local_d8 != 0) {
        LOCK();
        *(int *)local_d8 = *(int *)local_d8 + -1;
        local_29 = *(int *)local_d8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005fe9bb;
      }
      QArrayData::deallocate(local_d8,2,8);
    }
LAB_1005fe9bb:
    if (*(int *)local_d0 != -1) {
      if (*(int *)local_d0 != 0) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        local_29 = *(int *)local_d0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005fe9f1;
      }
      QArrayData::deallocate(local_d0,2,8);
    }
LAB_1005fe9f1:
    QMetaObject::tr((char *)&local_e0,PTR_staticMetaObject_1021e1520,(int)PTR_s__10226f118);
    FUN_1000341d0(&local_1b8,&local_e0);
    if (*(int *)local_e0 != -1) {
      if (*(int *)local_e0 != 0) {
        LOCK();
        *(int *)local_e0 = *(int *)local_e0 + -1;
        local_29 = *(int *)local_e0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005fea5f;
      }
      QArrayData::deallocate(local_e0,2,8);
    }
LAB_1005fea5f:
    QMetaObject::tr((char *)&local_e8,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Click_Continue_to_begin_the_inst_10226f120);
    FUN_1000341d0(&local_1b8);
    if (*(int *)local_e8 != -1) {
      if (*(int *)local_e8 != 0) {
        LOCK();
        *(int *)local_e8 = *(int *)local_e8 + -1;
        local_29 = *(int *)local_e8 != 0;
        UNLOCK();
        if ((bool)local_29) break;
      }
      QArrayData::deallocate(local_e8,2,8);
    }
    break;
  case 3:
    if (iVar6 == 0xff) {
      QMetaObject::tr((char *)&local_158,PTR_staticMetaObject_1021e1520,
                      (int)PTR_s_Connect_a_bootable_USB_drive_to_y_10226f128);
      FUN_1000341d0(&local_1b8,&local_158);
      if (*(int *)local_158 != -1) {
        if (*(int *)local_158 != 0) {
          LOCK();
          *(int *)local_158 = *(int *)local_158 + -1;
          local_29 = *(int *)local_158 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1005ff008;
        }
        QArrayData::deallocate(local_158,2,8);
      }
LAB_1005ff008:
      QMetaObject::tr((char *)&local_160,PTR_staticMetaObject_1021e1520,
                      (int)PTR_s_If_you_have_a_non_bootable_USB_d_10226f130);
      FUN_1000341d0(&local_1b8);
      if (*(int *)local_160 != -1) {
        if (*(int *)local_160 != 0) {
          LOCK();
          *(int *)local_160 = *(int *)local_160 + -1;
          local_29 = *(int *)local_160 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1005ff076;
        }
        QArrayData::deallocate(local_160,2,8);
      }
LAB_1005ff076:
      pQVar4 = (QArrayData *)QString::fromAscii_helper("",0);
      local_168 = pQVar4;
      FUN_1000341d0(&local_1b8);
      if (*(int *)pQVar4 != -1) {
        if (*(int *)pQVar4 != 0) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          local_29 = *(int *)pQVar4 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1005ff522;
        }
        QArrayData::deallocate(pQVar4,2,8);
      }
      goto LAB_1005ff522;
    }
    iVar6 = -1;
    QMetaObject::tr((char *)&local_138,PTR_staticMetaObject_1021e1520,(int)PTR_s__1_10226f140);
    pcVar2 = (char *)FUN_1006005c0(*(undefined4 *)(param_2 + 0x10));
    if (pcVar2 != (char *)0x0) {
      sVar3 = _strlen(pcVar2);
      iVar6 = (int)sVar3;
    }
    local_140 = (QArrayData *)QString::fromAscii_helper(pcVar2,iVar6);
    QString::arg(&local_130,&local_138,&local_140,0,0x20);
    FUN_1000341d0(&local_1b8,&local_130);
    if (*(int *)local_130 != -1) {
      if (*(int *)local_130 != 0) {
        LOCK();
        *(int *)local_130 = *(int *)local_130 + -1;
        local_29 = *(int *)local_130 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005febab;
      }
      QArrayData::deallocate(local_130,2,8);
    }
LAB_1005febab:
    if (*(int *)local_140 != -1) {
      if (*(int *)local_140 != 0) {
        LOCK();
        *(int *)local_140 = *(int *)local_140 + -1;
        local_29 = *(int *)local_140 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005febe1;
      }
      QArrayData::deallocate(local_140,2,8);
    }
LAB_1005febe1:
    if (*(int *)local_138 != -1) {
      if (*(int *)local_138 != 0) {
        LOCK();
        *(int *)local_138 = *(int *)local_138 + -1;
        local_29 = *(int *)local_138 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005fec17;
      }
      QArrayData::deallocate(local_138,2,8);
    }
LAB_1005fec17:
    QMetaObject::tr((char *)&local_148,PTR_staticMetaObject_1021e1520,(int)PTR_s__10226f148);
    FUN_1000341d0(&local_1b8,&local_148);
    if (*(int *)local_148 != -1) {
      if (*(int *)local_148 != 0) {
        LOCK();
        *(int *)local_148 = *(int *)local_148 + -1;
        local_29 = *(int *)local_148 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005fec85;
      }
      QArrayData::deallocate(local_148,2,8);
    }
LAB_1005fec85:
    QMetaObject::tr((char *)&local_150,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Click_Continue_to_begin_the_inst_10226f150);
    FUN_1000341d0(&local_1b8);
    if (*(int *)local_150 != -1) {
      if (*(int *)local_150 != 0) {
        LOCK();
        *(int *)local_150 = *(int *)local_150 + -1;
        local_29 = *(int *)local_150 != 0;
        UNLOCK();
        if ((bool)local_29) break;
      }
      QArrayData::deallocate(local_150,2,8);
    }
    break;
  default:
    QMetaObject::tr((char *)&local_170,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Click_on_a_type_of_the_source_ab_10226f158);
    FUN_1000341d0(&local_1b8,&local_170);
    if (*(int *)local_170 != -1) {
      if (*(int *)local_170 != 0) {
        LOCK();
        *(int *)local_170 = *(int *)local_170 + -1;
        local_29 = *(int *)local_170 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005fe4b0;
      }
      QArrayData::deallocate(local_170,2,8);
    }
LAB_1005fe4b0:
    QMetaObject::tr((char *)&local_178,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_To_installl_an_operating_system_y_10226f160);
    FUN_1000341d0(&local_1b8,&local_178);
    if (*(int *)local_178 != -1) {
      if (*(int *)local_178 != 0) {
        LOCK();
        *(int *)local_178 = *(int *)local_178 + -1;
        local_29 = *(int *)local_178 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005fe51e;
      }
      QArrayData::deallocate(local_178,2,8);
    }
LAB_1005fe51e:
    QMetaObject::tr((char *)&local_180,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_If_you_don_t_have_one_them_you_s_10226f168);
    FUN_1000341d0(&local_1b8);
    if (*(int *)local_180 != -1) {
      if (*(int *)local_180 != 0) {
        LOCK();
        *(int *)local_180 = *(int *)local_180 + -1;
        local_29 = *(int *)local_180 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005ff522;
      }
      QArrayData::deallocate(local_180,2,8);
    }
LAB_1005ff522:
    if ((iVar6 != 0xff) || (*(int *)(param_2 + 0x80) != 1)) break;
    QMetaObject::tr((char *)&local_190,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_<style>a___color___aaddf0___<_st_10226f1a0);
    local_1a0 = (QArrayData *)
                QString::fromAscii_helper
                          ("http://parallels.com/recover-windows-7-having-license-key-@LOCALE@",0x42
                          );
    QLocale::QLocale(local_1a8);
    FUN_100d3f730(&local_198,&local_1a0,local_1a8);
    QString::arg(&local_188,&local_190,&local_198,0,0x20);
    FUN_1000341d0(&local_1b8,&local_188);
    if (*(int *)local_188 != -1) {
      if (*(int *)local_188 != 0) {
        LOCK();
        *(int *)local_188 = *(int *)local_188 + -1;
        local_29 = *(int *)local_188 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005ff60b;
      }
      QArrayData::deallocate(local_188,2,8);
    }
LAB_1005ff60b:
    if (*(int *)local_198 != -1) {
      if (*(int *)local_198 != 0) {
        LOCK();
        *(int *)local_198 = *(int *)local_198 + -1;
        local_29 = *(int *)local_198 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005ff641;
      }
      QArrayData::deallocate(local_198,2,8);
    }
LAB_1005ff641:
    QLocale::~QLocale(local_1a8);
    if (*(int *)local_1a0 != -1) {
      if (*(int *)local_1a0 != 0) {
        LOCK();
        *(int *)local_1a0 = *(int *)local_1a0 + -1;
        local_29 = *(int *)local_1a0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005ff683;
      }
      QArrayData::deallocate(local_1a0,2,8);
    }
LAB_1005ff683:
    if (*(int *)local_190 != -1) {
      if (*(int *)local_190 != 0) {
        LOCK();
        *(int *)local_190 = *(int *)local_190 + -1;
        local_29 = *(int *)local_190 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005ff715;
      }
      QArrayData::deallocate(local_190,2,8);
    }
    goto LAB_1005ff715;
  }
  pQVar4 = (QArrayData *)QString::fromAscii_helper("",0);
  local_1b0 = pQVar4;
  FUN_1000341d0(&local_1b8,&local_1b0);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_29 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005ff715;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1005ff715:
  pQVar4 = (QArrayData *)QString::fromAscii_helper("{7680B472-E5C3-4D57-9CE1-076977FF1A77}",0x26);
  QtPrivate::QStringList_join
            (param_1,(QChar *)&local_1b8,(int)*(undefined8 *)(pQVar4 + 0x10) + (int)pQVar4);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_29 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005ff76d;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1005ff76d:
  pDVar1 = local_1b8;
  if (*(int *)local_1b8 != -1) {
    if (*(int *)local_1b8 != 0) {
      LOCK();
      *(int *)local_1b8 = *(int *)local_1b8 + -1;
      UNLOCK();
      if (*(int *)local_1b8 != 0) {
        return param_1;
      }
      local_29 = 0;
    }
    iVar6 = *(int *)(local_1b8 + 0xc);
    if (iVar6 != *(int *)(local_1b8 + 8)) {
      lVar7 = (long)*(int *)(local_1b8 + 8) * 8 + (long)iVar6 * -8;
      pDVar5 = local_1b8 + (long)iVar6 * 8 + 8;
      do {
        pQVar4 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar4 == 0) {
LAB_1005ff7e0:
          QArrayData::deallocate(pQVar4,2,8);
        }
        else if (*(int *)pQVar4 != -1) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          local_29 = *(int *)pQVar4 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar4 = *(QArrayData **)pDVar5;
            goto LAB_1005ff7e0;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose(pDVar1);
  }
  return param_1;
}

