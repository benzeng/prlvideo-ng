
QString * FUN_1006221e0(QString *param_1,int param_2,char param_3)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  QTypedArrayData<unsigned_short> *pQVar6;
  QLocale local_90 [8];
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
  undefined1 local_31;
  
  if (param_3 != '\0') goto LAB_100622252;
  FUN_100626730(&local_60);
  iVar1 = *(int *)(local_60 + 4);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10062224d;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10062224d:
  if (iVar1 != 0) {
LAB_100622252:
    FUN_1006216f0(param_1,param_2 == -0x7ffb8fdc || param_2 == -0x7ffeef9d);
    return param_1;
  }
  if (((param_2 == -0x7ffeef9d) || (param_2 == -0x7ffb8fdc)) || (param_2 == -0x7ffb8fcf)) {
    if (param_2 != -0x7ffeef8c) {
LAB_1006224b7:
      if (param_2 != -0x7ffb8fcf) {
LAB_100622662:
        param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
        return param_1;
      }
    }
LAB_1006224c4:
    pQVar6 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("<br><br>",8);
    FUN_1001c7700(&local_78,PTR_s_<a_href___1_>Learn_more_about____102270a30);
    local_88 = (QArrayData *)
               QString::fromAscii_helper
                         ("http://www.parallels.com/learn-about-renew-pdfm12-@LOCALE@",0x3a);
    QLocale::QLocale(local_90);
    FUN_100d3f730(&local_80,&local_88,local_90);
    QString::arg(&local_70,&local_78,&local_80,0,0x20);
    param_1->field0_0x0 = pQVar6;
    if (1 < *(int *)pQVar6 + 1U) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + 1;
      local_31 = *(int *)pQVar6 != 0;
      UNLOCK();
    }
    QString::append(param_1);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10062258c;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_10062258c:
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006225bc;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_1006225bc:
    QLocale::~QLocale(local_90);
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006225f8;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_1006225f8:
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100622628;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_100622628:
    if (*(int *)pQVar6 == -1) {
      return param_1;
    }
    local_68 = (QArrayData *)pQVar6;
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      local_31 = *(int *)pQVar6 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return param_1;
      }
    }
    goto LAB_100622658;
  }
  pcVar3 = (char *)FUN_100dddcf0(param_2);
  if (pcVar3 != (char *)0x0) {
    _strlen(pcVar3);
  }
  QString::fromUtf8_helper((char *)&local_50,(int)pcVar3);
  QString::normalized(&local_48,&local_50,1,0);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100622311;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100622311:
  local_58 = (QArrayData *)QString::fromAscii_helper("PRL_ERR_WEB_PORTAL_LIC_",0x17);
  cVar2 = QString::startsWith(&local_48,&local_58,1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10062236b;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10062236b:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10062239b;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10062239b:
  if (cVar2 == '\0') {
    if (param_2 < -0x7ffeaaf0) {
      if (param_2 == -0x7ffeef8c) goto LAB_1006224c4;
      if (param_2 != -0x7ffeaaf7) goto LAB_100622662;
    }
    else if (param_2 != -0x7ffeaaf0) goto LAB_1006224b7;
LAB_1006223e4:
    ppuVar4 = &PTR_s__10226fa10;
  }
  else {
    if (param_2 != -0x7ffb8fdc) goto LAB_1006223e4;
    ppuVar4 = &PTR_s__10226fa18;
  }
  QMetaObject::tr((char *)&local_68,PTR_staticMetaObject_1021e1520,(int)*ppuVar4);
  QString::fromUtf8_helper((char *)&local_40,0x1e31adc);
  puVar5 = (undefined8 *)
           QString::insert((int)&local_68,(QChar *)0x0,
                           (int)*(undefined8 *)(local_40 + 0x10) + (int)local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100622467;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100622467:
  pQVar6 = (QTypedArrayData<unsigned_short> *)*puVar5;
  param_1->field0_0x0 = pQVar6;
  if (1 < *(int *)pQVar6 + 1U) {
    LOCK();
    *(int *)pQVar6 = *(int *)pQVar6 + 1;
    local_31 = *(int *)pQVar6 != 0;
    UNLOCK();
  }
  if (*(int *)local_68 == -1) {
    return param_1;
  }
  if (*(int *)local_68 != 0) {
    LOCK();
    *(int *)local_68 = *(int *)local_68 + -1;
    UNLOCK();
    if (*(int *)local_68 != 0) {
      return param_1;
    }
    local_31 = 0;
  }
LAB_100622658:
  QArrayData::deallocate(local_68,2,8);
  return param_1;
}

