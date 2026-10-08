
QString * FUN_1001a2350(QString *param_1,undefined8 param_2)

{
  undefined *puVar1;
  Data *pDVar2;
  int iVar3;
  size_t sVar4;
  QTypedArrayData<unsigned_short> *pQVar5;
  Data *pDVar6;
  QArrayData *pQVar7;
  long lVar8;
  QArrayData *local_70;
  QArrayData *local_68;
  QFont local_60 [16];
  Data *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  puVar1 = PTR_s_<html><body><table>_1022710c8;
  iVar3 = -1;
  if (PTR_s_<html><body><table>_1022710c8 != (undefined *)0x0) {
    sVar4 = _strlen(PTR_s_<html><body><table>_1022710c8);
    iVar3 = (int)sVar4;
  }
  pQVar5 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(puVar1,iVar3);
  param_1->field0_0x0 = pQVar5;
  local_48 = (QArrayData *)QString::fromAscii_helper("<tr><td width=%1>%2</td></tr>",0x1d);
  local_50 = (Data *)PTR_shared_null_1021e15e8;
  FUN_1000341d0(&local_50,param_2);
  FontUtils::getToolTipFont(SUB81(local_60,0));
  iVar3 = FUN_10010f810(&local_50,local_60);
  QFont::~QFont(local_60);
  lVar8 = 200;
  if (iVar3 < 0xc9) {
    lVar8 = (long)iVar3;
  }
  QString::arg(&local_70,&local_48,lVar8,0,10,0x20);
  QString::arg(&local_68,&local_70,param_2,0,0x20);
  QString::append(param_1);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001a245e;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1001a245e:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001a248e;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1001a248e:
  puVar1 = PTR_s_<_table><_body><_html>_1022710d0;
  if (PTR_s_<_table><_body><_html>_1022710d0 != (undefined *)0x0) {
    _strlen(PTR_s_<_table><_body><_html>_1022710d0);
  }
  QString::fromUtf8_helper((char *)&local_40,(int)puVar1);
  QString::append(param_1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001a24f2;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1001a24f2:
  pDVar2 = local_50;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001a2581;
    }
    iVar3 = *(int *)(local_50 + 0xc);
    if (iVar3 != *(int *)(local_50 + 8)) {
      lVar8 = (long)*(int *)(local_50 + 8) * 8 + (long)iVar3 * -8;
      pDVar6 = local_50 + (long)iVar3 * 8 + 8;
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1001a2560:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1001a2560;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose(pDVar2);
  }
LAB_1001a2581:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
  return param_1;
}

