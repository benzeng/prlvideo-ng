
QString * FUN_100db03b0(QString *param_1,acl_t param_2,int param_3)

{
  char cVar1;
  char cVar2;
  char *obj_p;
  long lVar3;
  int *piVar4;
  uint uVar5;
  Data *pDVar6;
  Data *pDVar7;
  QArrayData *pQVar8;
  int iVar9;
  bool bVar10;
  QArrayData *local_90;
  QArrayData *local_88;
  QString local_80;
  Data *local_78;
  Data *local_70;
  Data *local_68;
  uint local_60;
  QArrayData *local_58;
  Data *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  obj_p = _acl_to_text(param_2,(ssize_t *)0x0);
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  if (obj_p == (char *)0x0) {
    piVar4 = ___error();
    FUN_100df99c0("","CAuth",0,"Failed to extract ACL text representation. erro code: %d",*piVar4);
    return param_1;
  }
  _strlen(obj_p);
  QString::fromUtf8_helper((char *)&local_48,(int)obj_p);
  QString::normalized(&local_40,&local_48,1,0);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100db044b;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100db044b:
  local_58 = (QArrayData *)QString::fromAscii_helper("\n",1);
  QString::split(&local_50,&local_40,&local_58,0,1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100db04a9;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100db04a9:
  local_78 = local_50;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 == 0) {
      QListData::detach((int)&local_78);
      iVar9 = *(int *)(local_78 + 8);
      if (iVar9 != *(int *)(local_78 + 0xc)) {
        pDVar6 = local_50 + (long)*(int *)(local_50 + 8) * 8 + 0x10;
        pDVar7 = local_78 + (long)iVar9 * 8 + 0x10;
        lVar3 = (long)*(int *)(local_78 + 0xc) * 8 + (long)iVar9 * -8;
        do {
          piVar4 = *(int **)pDVar6;
          *(int **)pDVar7 = piVar4;
          if (1 < *piVar4 + 1U) {
            LOCK();
            *piVar4 = *piVar4 + 1;
            local_31 = *piVar4 != 0;
            UNLOCK();
          }
          pDVar7 = pDVar7 + 8;
          pDVar6 = pDVar6 + 8;
          lVar3 = lVar3 + -8;
        } while (lVar3 != 0);
      }
    }
    else {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + 1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
    }
  }
  local_70 = local_78 + (long)*(int *)(local_78 + 8) * 8 + 0x10;
  local_68 = local_78 + (long)*(int *)(local_78 + 0xc) * 8 + 0x10;
  local_60 = 1;
  if (*(int *)(local_78 + 8) != *(int *)(local_78 + 0xc)) {
    iVar9 = 0;
    do {
      local_80.field0_0x0 = *(QTypedArrayData<unsigned_short> **)local_70;
      if (1 < *(int *)local_80.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + 1;
        local_31 = *(int *)local_80.field0_0x0 != 0;
        UNLOCK();
      }
      if (local_60 != 0) {
        local_88 = (QArrayData *)QString::fromAscii_helper("user:",5);
        cVar1 = QString::startsWith(&local_80,&local_88,1);
        cVar2 = '\x01';
        if (cVar1 == '\0') {
          local_90 = (QArrayData *)QString::fromAscii_helper("group:",6);
          cVar2 = QString::startsWith(&local_80,&local_90,1);
          if (*(int *)local_90 != -1) {
            if (*(int *)local_90 != 0) {
              LOCK();
              *(int *)local_90 = *(int *)local_90 + -1;
              local_31 = *(int *)local_90 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100db0670;
            }
            QArrayData::deallocate(local_90,2,8);
          }
        }
LAB_100db0670:
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_31 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100db06a0;
          }
          QArrayData::deallocate(local_88,2,8);
        }
LAB_100db06a0:
        if (cVar2 != '\0') {
          if (iVar9 == param_3) {
            QString::operator=(param_1,&local_80);
            iVar9 = param_3;
            goto LAB_100db06c8;
          }
          iVar9 = iVar9 + 1;
        }
        local_60 = 0;
      }
LAB_100db06c8:
      if (*(int *)local_80.field0_0x0 != -1) {
        if (*(int *)local_80.field0_0x0 != 0) {
          LOCK();
          *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
          local_31 = *(int *)local_80.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100db06f8;
        }
        QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
      }
LAB_100db06f8:
      local_70 = local_70 + 8;
      uVar5 = local_60 ^ 1;
      bVar10 = local_60 != 1;
      local_60 = uVar5;
    } while ((bVar10) && (local_70 != local_68));
  }
  pDVar6 = local_78;
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100db07b1;
    }
    iVar9 = *(int *)(local_78 + 0xc);
    if (iVar9 != *(int *)(local_78 + 8)) {
      lVar3 = (long)*(int *)(local_78 + 8) * 8 + (long)iVar9 * -8;
      pDVar7 = local_78 + (long)iVar9 * 8 + 8;
      do {
        pQVar8 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar8 == 0) {
LAB_100db0790:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_31 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar8 = *(QArrayData **)pDVar7;
            goto LAB_100db0790;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose(pDVar6);
  }
LAB_100db07b1:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100db0841;
    }
    iVar9 = *(int *)(local_50 + 0xc);
    if (iVar9 != *(int *)(local_50 + 8)) {
      lVar3 = (long)*(int *)(local_50 + 8) * 8 + (long)iVar9 * -8;
      pDVar6 = local_50 + (long)iVar9 * 8 + 8;
      do {
        pQVar8 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar8 == 0) {
LAB_100db0820:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_31 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar8 = *(QArrayData **)pDVar6;
            goto LAB_100db0820;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose(local_50);
  }
LAB_100db0841:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100db0871;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100db0871:
  _acl_free(obj_p);
  return param_1;
}

