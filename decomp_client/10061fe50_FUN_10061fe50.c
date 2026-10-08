
/* WARNING: Type propagation algorithm not settling */

undefined8 *
FUN_10061fe50(undefined8 *param_1,int param_2,QString *param_3,undefined8 param_4,char param_5)

{
  int iVar1;
  QTypedArrayData<unsigned_short> *pQVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined **ppuVar6;
  char *pcVar7;
  long lVar8;
  QArrayData *pQVar9;
  Data *pDVar10;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QString local_120;
  QString local_118;
  QArrayData *local_110;
  QString local_108;
  QString local_100;
  QString local_f8;
  QString local_f0;
  QString local_e8;
  QString local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QString local_c8;
  QString local_c0;
  QString local_b8;
  QString local_b0;
  QLocale local_a8 [8];
  QArrayData *local_a0;
  QArrayData *local_98;
  QString local_90;
  long local_88;
  QString local_80;
  QLocale local_78 [8];
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QString local_58;
  QArrayData *local_50;
  Data *local_48;
  QString local_40;
  undefined1 local_31;
  
  if (-0x7ffeeff0 < param_2) {
    if (param_2 < 0) {
      if (param_2 < -0x7ffeefec) {
        if (param_2 == -0x7ffeefef) {
          QMetaObject::tr((char *)&local_e0,PTR_staticMetaObject_1021e1520,
                          (int)PTR_s_This_key_is_a_Technical_Preview_t_1022704c0);
          QString::operator=(param_3,&local_e0);
          if (*(int *)local_e0.field0_0x0 != -1) {
            local_100.field0_0x0 = local_e0.field0_0x0;
            if (*(int *)local_e0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
              iVar4 = *(int *)local_e0.field0_0x0;
              UNLOCK();
              goto joined_r0x000100620402;
            }
            goto LAB_100620864;
          }
        }
        else {
          if (param_2 != -0x7ffeefed) goto switchD_10061fe9e_default;
          FUN_1001c7700(&local_e8,PTR_s_This_key_is_valid_for_released_v_1022704c8);
          QString::operator=(param_3,&local_e8);
          if (*(int *)local_e8.field0_0x0 != -1) {
            local_100.field0_0x0 = local_e8.field0_0x0;
            if (*(int *)local_e8.field0_0x0 != 0) {
              LOCK();
              *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
              iVar4 = *(int *)local_e8.field0_0x0;
              UNLOCK();
              goto joined_r0x000100620402;
            }
            goto LAB_100620864;
          }
        }
      }
      else {
        if (param_2 != -0x7ffeefec) {
          if (param_2 == -0x7ffeef9b) goto switchD_10061fe9e_caseD_80011001;
          goto switchD_10061fe9e_default;
        }
        QMetaObject::tr((char *)&local_b8,PTR_staticMetaObject_1021e1520,
                        (int)PTR_s_The_license_period_has_not_yet_s_1022704a8);
        QString::operator=(param_3,&local_b8);
        if (*(int *)local_b8.field0_0x0 != -1) {
          local_100.field0_0x0 = local_b8.field0_0x0;
          if (*(int *)local_b8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
            iVar4 = *(int *)local_b8.field0_0x0;
            UNLOCK();
            goto joined_r0x000100620402;
          }
          goto LAB_100620864;
        }
      }
      goto LAB_100620873;
    }
    if (param_2 != 0) goto switchD_10061fe9e_default;
    local_50 = (QArrayData *)QString::fromAscii_helper(";",1);
    QString::split(&local_48,param_4,&local_50,0,1);
    iVar4 = FUN_10061c430(local_48 + (long)*(int *)(local_48 + 8) * 8 + 0x10);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100620528;
      }
      iVar1 = *(int *)(local_48 + 0xc);
      if (iVar1 != *(int *)(local_48 + 8)) {
        lVar8 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar1 * -8;
        pDVar10 = local_48 + (long)iVar1 * 8 + 8;
        do {
          pQVar9 = *(QArrayData **)pDVar10;
          if (*(int *)pQVar9 == 0) {
LAB_100620500:
            QArrayData::deallocate(pQVar9,2,8);
          }
          else if (*(int *)pQVar9 != -1) {
            LOCK();
            *(int *)pQVar9 = *(int *)pQVar9 + -1;
            local_31 = *(int *)pQVar9 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar9 = *(QArrayData **)pDVar10;
              goto LAB_100620500;
            }
          }
          pDVar10 = pDVar10 + -8;
          lVar8 = lVar8 + 8;
        } while (lVar8 != 0);
      }
      QListData::dispose(local_48);
    }
LAB_100620528:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100620558;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_100620558:
    if (iVar4 == 0xb) {
      FUN_1001c7700(&local_60,PTR_s_Note__This_product_key_is_for_th_102270550);
      local_70 = (QArrayData *)
                 QString::fromAscii_helper
                           ("http://www.parallels.com/products/desktop/pdfm12-zh_cn_key_kb-@LOCALE@"
                            ,0x46);
      QLocale::QLocale(local_78);
      FUN_100d3f730(&local_68,&local_70,local_78);
      QString::arg(&local_58,&local_60,&local_68,0,0x20);
      QString::operator=(param_3,&local_58);
      if (*(int *)local_58.field0_0x0 != -1) {
        if (*(int *)local_58.field0_0x0 != 0) {
          LOCK();
          *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
          local_31 = *(int *)local_58.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006205f9;
        }
        QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
      }
LAB_1006205f9:
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100620629;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_100620629:
      QLocale::~QLocale(local_78);
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100620662;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_100620662:
      if (*(int *)local_60 == -1) goto LAB_1006206d5;
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        UNLOCK();
        if (*(int *)local_60 != 0) goto LAB_1006206d5;
        local_31 = 0;
      }
    }
    else {
      QString::fromUtf8_helper((char *)&local_40,0x1e41978);
      QString::operator=(param_3,&local_40);
      if (*(int *)local_40.field0_0x0 == -1) goto LAB_1006206d5;
      local_60 = (QArrayData *)local_40.field0_0x0;
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_40.field0_0x0 != 0) goto LAB_1006206d5;
        local_31 = 0;
      }
    }
    QArrayData::deallocate(local_60,2,8);
LAB_1006206d5:
    pQVar2 = param_3->field0_0x0;
    *param_1 = pQVar2;
    if (*(int *)pQVar2 + 1U < 2) {
      return param_1;
    }
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    UNLOCK();
    return param_1;
  }
  switch(param_2) {
  case -0x7ffef000:
    QMetaObject::tr((char *)&local_80,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_This_key_is_invalid__Please_chec_102270488);
    QString::operator=(param_3,&local_80);
    if (*(int *)local_80.field0_0x0 == -1) break;
    local_100.field0_0x0 = local_80.field0_0x0;
    if (*(int *)local_80.field0_0x0 == 0) goto LAB_100620864;
    LOCK();
    *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
    iVar4 = *(int *)local_80.field0_0x0;
    UNLOCK();
joined_r0x000100620402:
    local_31 = iVar4 != 0;
    if (!(bool)local_31) goto LAB_100620864;
    break;
  case -0x7ffeefff:
switchD_10061fe9e_caseD_80011001:
    local_88 = FUN_10061c2f0(param_4);
    if (local_88 + 0xb69eeff91fU < 0x16d3e147974) {
      ppuVar6 = &PTR_s_This_trial_activation_key_expire_102270490;
      if (param_2 == -0x7ffeef9b) {
        ppuVar6 = (undefined **)PTR_PTR_1021e1058;
      }
      QMetaObject::tr((char *)&local_98,PTR_staticMetaObject_1021e1520,(int)*ppuVar6);
      QLocale::system();
      QLocale::toString(&local_a0,local_a8,&local_88,1);
      QString::arg(&local_90,&local_98,&local_a0,0,0x20);
      QString::operator=(param_3,&local_90);
      if (*(int *)local_90.field0_0x0 != -1) {
        if (*(int *)local_90.field0_0x0 != 0) {
          LOCK();
          *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
          local_31 = *(int *)local_90.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006201d4;
        }
        QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
      }
LAB_1006201d4:
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10062020a;
        }
        QArrayData::deallocate(local_a0,2,8);
      }
LAB_10062020a:
      QLocale::~QLocale(local_a8);
      if (*(int *)local_98 == -1) break;
      local_100.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_98;
      if (*(int *)local_98 == 0) goto LAB_100620864;
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      iVar4 = *(int *)local_98;
      UNLOCK();
    }
    else {
      QMetaObject::tr((char *)&local_b0,PTR_staticMetaObject_1021e1520,
                      (int)PTR_s_This_activation_key_has_expired__1022704a0);
      QString::operator=(param_3,&local_b0);
      if (*(int *)local_b0.field0_0x0 == -1) break;
      local_100.field0_0x0 = local_b0.field0_0x0;
      if (*(int *)local_b0.field0_0x0 == 0) goto LAB_100620864;
      LOCK();
      *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
      iVar4 = *(int *)local_b0.field0_0x0;
      UNLOCK();
    }
    local_31 = iVar4 != 0;
    if ((bool)local_31) break;
LAB_100620864:
    QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
    break;
  case -0x7ffeeffe:
  case -0x7ffeeffd:
    FUN_1001c7700(&local_c0,PTR_s_This_key_cannot_be_used_with___P_1022704b0);
    QString::operator=(param_3,&local_c0);
    if (*(int *)local_c0.field0_0x0 != -1) {
      local_100.field0_0x0 = local_c0.field0_0x0;
      if (*(int *)local_c0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
        iVar4 = *(int *)local_c0.field0_0x0;
        UNLOCK();
        goto joined_r0x000100620402;
      }
      goto LAB_100620864;
    }
    break;
  case -0x7ffeeffc:
    FUN_1001c7700(&local_d0,PTR_s_This_key_cannot_be_used_with___P_1022704b8);
    QMetaObject::tr((char *)&local_d8,PTR_staticMetaObject_1021e1520,0x1dd6e96);
    QString::arg(&local_c8,&local_d0,&local_d8,0,0x20);
    QString::operator=(param_3,&local_c8);
    if (*(int *)local_c8.field0_0x0 != -1) {
      if (*(int *)local_c8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
        local_31 = *(int *)local_c8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006203a6;
      }
      QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
    }
LAB_1006203a6:
    if (*(int *)local_d8 != -1) {
      if (*(int *)local_d8 != 0) {
        LOCK();
        *(int *)local_d8 = *(int *)local_d8 + -1;
        local_31 = *(int *)local_d8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006203dc;
      }
      QArrayData::deallocate(local_d8,2,8);
    }
LAB_1006203dc:
    if (*(int *)local_d0 != -1) {
      local_100.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_d0;
      if (*(int *)local_d0 != 0) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        iVar4 = *(int *)local_d0;
        UNLOCK();
        goto joined_r0x000100620402;
      }
      goto LAB_100620864;
    }
    break;
  case -0x7ffeeffb:
    uVar5 = FUN_10061c430(param_4);
    switch(uVar5) {
    case 0:
      FUN_100df99c0("","prl_client_app",0,"Error(!): Vz key or key language is invalid.");
      QMetaObject::tr((char *)&local_f8,PTR_staticMetaObject_1021e1520,
                      (int)PTR_s_This_key_is_invalid__Please_chec_102270488);
      QString::operator=(param_3,&local_f8);
      if (*(int *)local_f8.field0_0x0 != -1) {
        local_100.field0_0x0 = local_f8.field0_0x0;
        if (*(int *)local_f8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
          iVar4 = *(int *)local_f8.field0_0x0;
          UNLOCK();
          goto joined_r0x000100620402;
        }
        goto LAB_100620864;
      }
      goto LAB_100620873;
    case 1:
      ppuVar6 = &PTR_s_This_key_is_valid_only_for_the_C_1022704d0;
      break;
    case 2:
      ppuVar6 = &PTR_s_This_key_is_valid_only_for_the_G_1022704d8;
      break;
    case 3:
      ppuVar6 = &PTR_s_This_key_is_valid_only_for_the_U_1022704e0;
      break;
    case 4:
      ppuVar6 = &PTR_s_This_key_is_valid_only_for_the_S_1022704e8;
      break;
    case 5:
      ppuVar6 = &PTR_s_This_key_is_valid_only_for_the_F_1022704f0;
      break;
    case 6:
      ppuVar6 = &PTR_s_This_key_is_valid_only_for_the_I_1022704f8;
      break;
    case 7:
      ppuVar6 = &PTR_s_This_key_is_valid_only_for_the_J_102270500;
      break;
    case 8:
      ppuVar6 = &PTR_s_This_key_is_valid_only_for_the_P_102270508;
      break;
    case 9:
      ppuVar6 = &PTR_s_This_key_is_valid_only_for_the_R_102270510;
      break;
    case 10:
      ppuVar6 = &PTR_s_This_key_is_valid_only_for_the_U_102270518;
      break;
    case 0xb:
      ppuVar6 = &PTR_s_This_key_is_valid_only_for_the_S_102270520;
      break;
    case 0xc:
      ppuVar6 = &PTR_s_This_key_is_valid_only_for_the_T_102270528;
      break;
    case 0xd:
      ppuVar6 = &PTR_s_This_key_is_valid_only_for_the_H_102270530;
      break;
    case 0xe:
      ppuVar6 = &PTR_s_This_key_is_valid_only_for_the_R_102270538;
      break;
    case 0xf:
      ppuVar6 = &PTR_s_This_key_is_valid_only_for_the_K_102270540;
      break;
    case 0x10:
      ppuVar6 = &PTR_s_This_key_is_valid_only_for_the_P_102270548;
      break;
    default:
      pcVar7 = "";
      goto LAB_100620823;
    }
    pcVar7 = *ppuVar6;
LAB_100620823:
    FUN_1001c7700(&local_f0,pcVar7);
    QString::operator=(param_3,&local_f0);
    if (*(int *)local_f0.field0_0x0 != -1) {
      local_100.field0_0x0 = local_f0.field0_0x0;
      if (*(int *)local_f0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
        iVar4 = *(int *)local_f0.field0_0x0;
        UNLOCK();
        goto joined_r0x000100620402;
      }
      goto LAB_100620864;
    }
    break;
  default:
switchD_10061fe9e_default:
    MessageUtils::getMessageString((int)&local_100,SUB41(param_2,0));
    QString::operator=(param_3,&local_100);
    if (*(int *)local_100.field0_0x0 != -1) {
      if (*(int *)local_100.field0_0x0 != 0) {
        LOCK();
        *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
        iVar4 = *(int *)local_100.field0_0x0;
        UNLOCK();
        goto joined_r0x000100620402;
      }
      goto LAB_100620864;
    }
  }
LAB_100620873:
  if (*(int *)(param_3->field0_0x0 + 4) == 0) {
LAB_10062094a:
    QMetaObject::tr((char *)&local_118,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_This_key_is_invalid__Please_chec_102270488);
    QString::operator=(param_3,&local_118);
    if (*(int *)local_118.field0_0x0 != -1) {
      if (*(int *)local_118.field0_0x0 != 0) {
        LOCK();
        *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + -1;
        local_31 = *(int *)local_118.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006209b3;
      }
      QArrayData::deallocate((QArrayData *)local_118.field0_0x0,2,8);
    }
  }
  else {
    pcVar7 = (char *)FUN_100dddcf0(param_2);
    if (pcVar7 != (char *)0x0) {
      _strlen(pcVar7);
    }
    QString::fromUtf8_helper((char *)&local_110,(int)pcVar7);
    QString::normalized(&local_108,&local_110,1,0);
    cVar3 = operator==(param_3,&local_108);
    if (*(int *)local_108.field0_0x0 != -1) {
      if (*(int *)local_108.field0_0x0 != 0) {
        LOCK();
        *(int *)local_108.field0_0x0 = *(int *)local_108.field0_0x0 + -1;
        local_31 = *(int *)local_108.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100620910;
      }
      QArrayData::deallocate((QArrayData *)local_108.field0_0x0,2,8);
    }
LAB_100620910:
    if (*(int *)local_110 != -1) {
      if (*(int *)local_110 != 0) {
        LOCK();
        *(int *)local_110 = *(int *)local_110 + -1;
        local_31 = *(int *)local_110 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100620946;
      }
      QArrayData::deallocate(local_110,2,8);
    }
LAB_100620946:
    if (cVar3 != '\0') goto LAB_10062094a;
  }
LAB_1006209b3:
  local_120.field0_0x0 = param_3->field0_0x0;
  if (1 < *(int *)local_120.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + 1;
    local_31 = *(int *)local_120.field0_0x0 != 0;
    UNLOCK();
  }
  pcVar7 = (char *)FUN_100dddcf0(param_2);
  if (pcVar7 != (char *)0x0) {
    _strlen(pcVar7);
  }
  QString::fromUtf8_helper((char *)&local_130,(int)pcVar7);
  QString::normalized(&local_128,&local_130,1,0);
  local_138 = (QArrayData *)QString::fromAscii_helper("PRL_ERR_VZLICENSE_",0x12);
  cVar3 = QString::startsWith(&local_128,&local_138,1);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_31 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100620a80;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_100620a80:
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_31 = *(int *)local_128 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100620ab6;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_100620ab6:
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_31 = *(int *)local_130 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100620aec;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_100620aec:
  if (cVar3 != '\0') {
    if (param_2 != -0x7ffeefc0) {
      QMetaObject::tr((char *)&local_140,PTR_staticMetaObject_1021e1520,
                      (int)PTR_s_Contact_your_system_administrato_102270a68);
      QString::append(&local_120);
      if (*(int *)local_140 != -1) {
        if (*(int *)local_140 != 0) {
          LOCK();
          *(int *)local_140 = *(int *)local_140 + -1;
          local_31 = *(int *)local_140 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100620cf2;
        }
        QArrayData::deallocate(local_140,2,8);
      }
    }
    goto LAB_100620cf2;
  }
  if (param_5 != '\0') {
    FUN_1006216f0(&local_148,0);
    QString::append(&local_120);
    if (*(int *)local_148 != -1) {
      if (*(int *)local_148 != 0) {
        LOCK();
        *(int *)local_148 = *(int *)local_148 + -1;
        local_31 = *(int *)local_148 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100620cf2;
      }
      QArrayData::deallocate(local_148,2,8);
    }
    goto LAB_100620cf2;
  }
  QMetaObject::tr((char *)&local_158,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_For_details__click_<a_href___1_>_102270a60);
  FUN_1001161c0(&local_160);
  QString::arg(&local_150,&local_158,&local_160,0,0x20);
  QString::append(&local_120);
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_31 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100620c86;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_100620c86:
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      local_31 = *(int *)local_160 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100620cbc;
    }
    QArrayData::deallocate(local_160,2,8);
  }
LAB_100620cbc:
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_31 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100620cf2;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_100620cf2:
  *param_1 = local_120.field0_0x0;
  if (1 < *(int *)local_120.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + 1;
    local_31 = *(int *)local_120.field0_0x0 != 0;
    UNLOCK();
  }
  if (*(int *)local_120.field0_0x0 != -1) {
    if (*(int *)local_120.field0_0x0 != 0) {
      LOCK();
      *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_120.field0_0x0 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
  }
  return param_1;
}

