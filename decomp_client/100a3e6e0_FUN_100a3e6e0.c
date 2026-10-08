
QString * FUN_100a3e6e0(QString *param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  QTypedArrayData<unsigned_short> *pQVar3;
  char cVar4;
  QArrayData *pQVar5;
  long lVar6;
  int *piVar7;
  int *piVar8;
  QString local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  int *local_58;
  int *local_50;
  QArrayData *local_48;
  QTypedArrayData<unsigned_short> *local_40;
  undefined1 local_31;
  
  local_40 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_48 = (QArrayData *)PTR_shared_null_1021e1288;
  cVar4 = FUN_100a39020(param_2,0x3a,&local_40,&local_48);
  if (cVar4 == '\0') {
    pQVar3 = (QTypedArrayData<unsigned_short> *)*param_2;
    param_1->field0_0x0 = pQVar3;
    if (1 < *(int *)pQVar3 + 1U) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + 1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
    }
  }
  else {
    local_58 = (int *)PTR_shared_null_1021e15e8;
    local_60 = (QArrayData *)QString::fromAscii_helper("//localhost/",0xc);
    FUN_1000341d0(&local_58,&local_60);
    local_68 = (QArrayData *)QString::fromAscii_helper("/localhost/",0xb);
    FUN_1000341d0(&local_58,&local_68);
    local_70 = (QArrayData *)QString::fromAscii_helper("localhost/",10);
    FUN_1000341d0(&local_58,&local_70);
    local_78 = (QArrayData *)QString::fromAscii_helper("//127.0.0.1/",0xc);
    FUN_1000341d0(&local_58,&local_78);
    local_80 = (QArrayData *)QString::fromAscii_helper("/127.0.0.1/",0xb);
    FUN_1000341d0(&local_58,&local_80);
    pQVar5 = (QArrayData *)QString::fromAscii_helper("127.0.0.1/",10);
    local_88 = pQVar5;
    FUN_1000341d0(&local_58,&local_88);
    local_50 = local_58;
    if (*local_58 != -1) {
      if (*local_58 == 0) {
        QListData::detach((int)&local_50);
        iVar1 = local_50[2];
        if (iVar1 != local_50[3]) {
          piVar7 = local_58 + (long)local_58[2] * 2 + 4;
          piVar8 = local_50 + (long)iVar1 * 2 + 4;
          lVar6 = (long)local_50[3] * 8 + (long)iVar1 * -8;
          do {
            piVar2 = *(int **)piVar7;
            *(int **)piVar8 = piVar2;
            if (1 < *piVar2 + 1U) {
              LOCK();
              *piVar2 = *piVar2 + 1;
              local_31 = *piVar2 != 0;
              UNLOCK();
            }
            piVar8 = piVar8 + 2;
            piVar7 = piVar7 + 2;
            lVar6 = lVar6 + -8;
            pQVar5 = local_88;
          } while (lVar6 != 0);
        }
      }
      else {
        LOCK();
        *local_58 = *local_58 + 1;
        local_31 = *local_58 != 0;
        UNLOCK();
      }
    }
    if (*(int *)pQVar5 != -1) {
      if (*(int *)pQVar5 != 0) {
        LOCK();
        *(int *)pQVar5 = *(int *)pQVar5 + -1;
        local_31 = *(int *)pQVar5 != 0;
        UNLOCK();
        pQVar5 = local_88;
        if ((bool)local_31) goto LAB_100a3e8e3;
      }
      QArrayData::deallocate(pQVar5,2,8);
    }
LAB_100a3e8e3:
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a3e90f;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_100a3e90f:
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a3e93b;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_100a3e93b:
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a3e967;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_100a3e967:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a3e993;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_100a3e993:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a3e9bf;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_100a3e9bf:
    FUN_100039a80(&local_58);
    iVar1 = local_50[2];
    if (iVar1 != local_50[3]) {
      piVar7 = local_50 + (long)iVar1 * 2 + 4;
      lVar6 = (long)local_50[3] * 8 + (long)iVar1 * -8;
      do {
        cVar4 = QString::startsWith(&local_48,piVar7,0);
        if (cVar4 != '\0') {
          QString::remove((int)&local_48,0);
          pQVar5 = (QArrayData *)QString::fromAscii_helper("://10.211.55.2/",0xf);
          local_90.field0_0x0 = local_40;
          if (1 < *(int *)local_40 + 1U) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + 1;
            local_31 = *(int *)local_40 != 0;
            UNLOCK();
          }
          QString::append(&local_90);
          param_1->field0_0x0 = local_90.field0_0x0;
          if (1 < *(int *)local_90.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + 1;
            local_31 = *(int *)local_90.field0_0x0 != 0;
            UNLOCK();
          }
          QString::append(param_1);
          if (*(int *)local_90.field0_0x0 != -1) {
            if (*(int *)local_90.field0_0x0 != 0) {
              LOCK();
              *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
              local_31 = *(int *)local_90.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100a3eae2;
            }
            QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
          }
LAB_100a3eae2:
          if (*(int *)pQVar5 == -1) goto LAB_100a3eb18;
          if (*(int *)pQVar5 != 0) {
            LOCK();
            *(int *)pQVar5 = *(int *)pQVar5 + -1;
            local_31 = *(int *)pQVar5 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100a3eb18;
          }
          QArrayData::deallocate(pQVar5,2,8);
          goto LAB_100a3eb18;
        }
        piVar7 = piVar7 + 2;
        lVar6 = lVar6 + -8;
      } while (lVar6 != 0);
    }
    pQVar3 = (QTypedArrayData<unsigned_short> *)*param_2;
    param_1->field0_0x0 = pQVar3;
    if (1 < *(int *)pQVar3 + 1U) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + 1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
    }
LAB_100a3eb18:
    FUN_100039a80(&local_50);
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a3eb51;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100a3eb51:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40,2,8);
  }
  return param_1;
}

