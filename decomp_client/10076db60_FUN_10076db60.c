
QUrl * FUN_10076db60(QUrl *param_1,QByteArray *param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  size_t sVar6;
  long lVar7;
  QArrayData *pQVar8;
  QArrayData *local_118;
  QArrayData *local_110;
  QString local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QString local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  undefined *local_c8;
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined *local_80;
  undefined *local_78;
  QString local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  undefined8 local_40;
  undefined1 local_31;
  
  puVar2 = PTR_shared_null_1021e1288;
  local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_c8 = PTR_shared_null_1021e1288;
  iVar5 = *(int *)PTR_shared_null_1021e1288;
  if (1 < iVar5 + 1U) {
    LOCK();
    *(int *)PTR_shared_null_1021e1288 = *(int *)PTR_shared_null_1021e1288 + 1;
    local_31 = *(int *)puVar2 != 0;
    UNLOCK();
    iVar5 = *(int *)puVar2;
  }
  local_c0._8_4_ = (int)puVar2;
  local_c0._0_8_ = puVar2;
  local_c0._12_4_ = (int)((ulong)puVar2 >> 0x20);
  local_80 = puVar2;
  local_78 = PTR_shared_null_1021e15d0;
  local_b0 = local_c0;
  local_a0 = local_c0;
  local_90 = local_c0;
  if (iVar5 != -1) {
    if (iVar5 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      local_31 = *(int *)puVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10076dc0e;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
LAB_10076dc0e:
  cVar4 = FUN_10076dab0(&local_c8);
  if (cVar4 == '\0') {
    QUrl::QUrl(param_1,&local_70,0);
    goto LAB_10076e2f7;
  }
  QString::operator=(&local_70,(QString *)local_90);
  puVar3 = PTR_s__e18a378a_5d82_11e6_8b77_86f30ca_102274ea8;
  iVar5 = -1;
  if (PTR_s__e18a378a_5d82_11e6_8b77_86f30ca_102274ea8 != (undefined *)0x0) {
    sVar6 = _strlen(PTR_s__e18a378a_5d82_11e6_8b77_86f30ca_102274ea8);
    iVar5 = (int)sVar6;
  }
  local_d0 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar5);
  local_e8 = (QArrayData *)puVar2;
  local_f0 = (QArrayData *)puVar2;
  QUrl::toPercentEncoding(&local_e0,param_2,(QByteArray *)&local_e8);
  lVar7 = 0;
  pQVar8 = (QArrayData *)(local_e0.field0_0x0 + *(long *)(local_e0.field0_0x0 + 0x10));
  if ((pQVar8 != (QArrayData *)0x0) && (*(uint *)(local_e0.field0_0x0 + 4) != 0)) {
    lVar7 = 0;
    do {
      if (pQVar8[lVar7] == (QArrayData)0x0) break;
      lVar7 = lVar7 + 1;
    } while ((uint)lVar7 < *(uint *)(local_e0.field0_0x0 + 4));
  }
  local_d8 = (QArrayData *)QString::fromAscii_helper((char *)pQVar8,(int)lVar7);
  QString::replace(&local_70,&local_d0,&local_d8,1);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_31 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10076dd1b;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_10076dd1b:
  if (*(int *)local_e0.field0_0x0 != -1) {
    if (*(int *)local_e0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
      local_31 = *(int *)local_e0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10076dd51;
    }
    QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,1,8);
  }
LAB_10076dd51:
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_31 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10076dd87;
    }
    QArrayData::deallocate(local_f0,1,8);
  }
LAB_10076dd87:
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_31 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10076ddbd;
    }
    QArrayData::deallocate(local_e8,1,8);
  }
LAB_10076ddbd:
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_31 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10076ddf3;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_10076ddf3:
  puVar3 = PTR_s__e18a39ec_5d82_11e6_8b77_86f30ca_102274eb0;
  iVar5 = -1;
  if (PTR_s__e18a39ec_5d82_11e6_8b77_86f30ca_102274eb0 != (undefined *)0x0) {
    sVar6 = _strlen(PTR_s__e18a39ec_5d82_11e6_8b77_86f30ca_102274eb0);
    iVar5 = (int)sVar6;
  }
  local_f8 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar5);
  local_40 = 0;
  lVar7 = FUN_100c59870(PTR_s______BEGIN_PUBLIC_KEY______MIICL_102274eb8,0xffffffff);
  if (lVar7 == 0) {
    FUN_100df99c0("","prl_client_app",0,"Failed to create key BIO");
    local_110 = (QArrayData *)puVar2;
    iVar5 = *(int *)puVar2;
    if (1 < iVar5 + 1U) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + 1;
      local_31 = *(int *)puVar2 != 0;
      UNLOCK();
      goto LAB_10076e0e7;
    }
  }
  else {
    local_40 = FUN_100c900e0(lVar7,&local_40,0,0);
    local_50 = (QArrayData *)QString::fromAscii_helper("{\"email\":\"%1\"}",0xe);
    QString::arg(&local_48,&local_50,param_2,0,0x20);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10076deb4;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_10076deb4:
    local_58 = (QArrayData *)puVar2;
    QByteArray::resize((int)&local_58);
    uVar1 = *(undefined4 *)(local_48 + 4);
    QString::toUtf8();
    pQVar8 = local_60 + *(long *)(local_60 + 0x10);
    if ((1 < *(uint *)local_58) || (*(long *)(local_58 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_58,*(uint *)(local_58 + 4) + 1,*(uint *)(local_58 + 8) >> 0x1f)
      ;
    }
    iVar5 = FUN_100c4c170(uVar1,pQVar8,local_58 + *(long *)(local_58 + 0x10),local_40,1);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10076df56;
      }
      QArrayData::deallocate(local_60,1,8);
    }
LAB_10076df56:
    FUN_100c586e0(lVar7);
    FUN_100c47630(local_40);
    if (iVar5 == -1) {
      FUN_100df99c0("","prl_client_app",0,"Can\'t public encrypt");
      local_110 = (QArrayData *)puVar2;
      if (1 < *(int *)puVar2 + 1U) {
        LOCK();
        *(int *)puVar2 = *(int *)puVar2 + 1;
        local_31 = *(int *)puVar2 != 0;
        UNLOCK();
      }
    }
    else {
      QByteArray::resize((int)&local_58);
      QByteArray::toBase64();
      lVar7 = 0;
      pQVar8 = local_68 + *(long *)(local_68 + 0x10);
      if ((pQVar8 != (QArrayData *)0x0) && (*(uint *)(local_68 + 4) != 0)) {
        lVar7 = 0;
        do {
          if (pQVar8[lVar7] == (QArrayData)0x0) break;
          lVar7 = lVar7 + 1;
        } while ((uint)lVar7 < *(uint *)(local_68 + 4));
      }
      local_110 = (QArrayData *)QString::fromAscii_helper((char *)pQVar8,(int)lVar7);
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10076e087;
        }
        QArrayData::deallocate(local_68,1,8);
      }
    }
LAB_10076e087:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10076e0b7;
      }
      QArrayData::deallocate(local_58,1,8);
    }
LAB_10076e0b7:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10076e0e7;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_10076e0e7:
    iVar5 = *(int *)puVar2;
  }
  if (iVar5 != -1) {
    if (iVar5 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      local_31 = *(int *)puVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10076e11a;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
LAB_10076e11a:
  local_118 = (QArrayData *)puVar2;
  QUrl::toPercentEncoding(&local_108,(QByteArray *)&local_110,(QByteArray *)&local_118);
  lVar7 = 0;
  pQVar8 = (QArrayData *)(local_108.field0_0x0 + *(long *)(local_108.field0_0x0 + 0x10));
  if ((pQVar8 != (QArrayData *)0x0) && (*(uint *)(local_108.field0_0x0 + 4) != 0)) {
    lVar7 = 0;
    do {
      if (pQVar8[lVar7] == (QArrayData)0x0) break;
      lVar7 = lVar7 + 1;
    } while ((uint)lVar7 < *(uint *)(local_108.field0_0x0 + 4));
  }
  local_100 = (QArrayData *)QString::fromAscii_helper((char *)pQVar8,(int)lVar7);
  QString::replace(&local_70,&local_f8,&local_100,1);
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_31 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10076e1db;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_10076e1db:
  if (*(int *)local_108.field0_0x0 != -1) {
    if (*(int *)local_108.field0_0x0 != 0) {
      LOCK();
      *(int *)local_108.field0_0x0 = *(int *)local_108.field0_0x0 + -1;
      local_31 = *(int *)local_108.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10076e211;
    }
    QArrayData::deallocate((QArrayData *)local_108.field0_0x0,1,8);
  }
LAB_10076e211:
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      local_31 = *(int *)puVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10076e247;
    }
    QArrayData::deallocate((QArrayData *)puVar2,1,8);
  }
LAB_10076e247:
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_31 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10076e27d;
    }
    QArrayData::deallocate(local_118,1,8);
  }
LAB_10076e27d:
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_31 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10076e2b3;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_10076e2b3:
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_31 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10076e2e9;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_10076e2e9:
  QUrl::QUrl(param_1,&local_70,0);
LAB_10076e2f7:
  FUN_100252e70(&local_c8);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      UNLOCK();
      local_c8 = (undefined *)CONCAT71(local_c8._1_7_,*(int *)local_70.field0_0x0 != 0);
      if (*(int *)local_70.field0_0x0 != 0) {
        return param_1;
      }
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
  return param_1;
}

