
void FUN_10044cb00(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  _func_void_Node_ptr *p_Var4;
  _func_void_Node_ptr *p_Var5;
  char cVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  QArrayData *pQVar12;
  _func_void_Node_ptr *local_d0;
  _func_void_Node_ptr *local_c8;
  QVariant local_c0;
  QVariant local_b0;
  QArrayData *local_a0;
  QArrayData *local_98;
  undefined8 local_90;
  QArrayData *local_88;
  Data *local_80;
  Data *local_78;
  Data *local_70;
  Data *local_68;
  int local_60;
  int local_54;
  QArrayData *local_50;
  undefined1 local_48 [4];
  int local_44;
  QArrayData *local_40;
  undefined1 local_38 [7];
  undefined1 local_31;
  
  FUN_10044eff0();
  FUN_10044eff0();
  FUN_10044f080();
  FUN_10044f200();
  local_88 = (QArrayData *)PTR_shared_null_1021e1288;
  local_80 = (Data *)PTR_shared_null_1021e15e8;
  qt_qFindChildren_helper
            (*(undefined8 *)(param_1 + 0x10),&local_88,PTR_staticMetaObject_1021e1540,&local_80,1);
  local_78 = local_80;
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 == 0) {
      QListData::detach((int)&local_78);
      lVar9 = (long)*(int *)(local_78 + 8);
      if ((local_80 + (long)*(int *)(local_80 + 8) * 8 != local_78 + lVar9 * 8) &&
         (lVar10 = *(int *)(local_78 + 0xc) - lVar9,
         lVar10 != 0 && lVar9 <= *(int *)(local_78 + 0xc))) {
        _memcpy(local_78 + lVar9 * 8 + 0x10,local_80 + (long)*(int *)(local_80 + 8) * 8 + 0x10,
                lVar10 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + 1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
    }
  }
  local_70 = local_78 + (long)*(int *)(local_78 + 8) * 8 + 0x10;
  local_68 = local_78 + (long)*(int *)(local_78 + 0xc) * 8 + 0x10;
  local_60 = 1;
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10044cc38;
    }
    QListData::dispose(local_80);
  }
LAB_10044cc38:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10044cc68;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10044cc68:
  puVar3 = PTR_s_DoNotUpdateForVmStates_1021f1e78;
  puVar2 = PTR_s_criticalViewModes_1021f1e18;
  if ((local_60 != 0) && (local_70 != local_68)) {
    do {
      uVar8 = *(undefined8 *)local_70;
      local_90 = uVar8;
      QObject::objectName();
      local_a0 = (QArrayData *)QString::fromAscii_helper("qt_",3);
      cVar6 = QString::startsWith(&local_98,&local_a0,1);
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10044cd61;
        }
        QArrayData::deallocate(local_a0,2,8);
      }
LAB_10044cd61:
      if (cVar6 == '\0') {
        QObject::property((char *)&local_b0);
        cVar6 = QVariant::toBool();
        QVariant::~QVariant(&local_b0);
        if (cVar6 != '\0') {
          FUN_100359270(param_1 + 0x38,&local_90);
        }
        QObject::property((char *)&local_c0);
        cVar6 = QVariant::toBool();
        QVariant::~QVariant(&local_c0);
        if (cVar6 != '\0') {
          FUN_100359270(param_1 + 0x40,&local_90);
        }
        local_c8 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
        FUN_10044e9c0(&local_50,uVar8,puVar2,"VmDisplayViewMode");
        lVar9 = *(long *)(local_50 + 0x10);
        iVar11 = 0;
        pQVar12 = local_50;
        if ((int)(char)local_50[lVar9] < *(int *)(local_50 + 4) * 8) {
          do {
            if (((byte)pQVar12[((iVar11 >> 3) + 1) + lVar9] >> ((byte)iVar11 & 7) & 1) != 0) {
              local_54 = iVar11;
              FUN_10044f660(&local_c8,&local_54,local_48);
              lVar9 = *(long *)(local_50 + 0x10);
              pQVar12 = local_50;
            }
            iVar11 = iVar11 + 1;
          } while (iVar11 < *(int *)(pQVar12 + 4) * 8 - (int)(char)pQVar12[lVar9]);
        }
        if (*(int *)pQVar12 != -1) {
          if (*(int *)pQVar12 != 0) {
            LOCK();
            *(int *)pQVar12 = *(int *)pQVar12 + -1;
            local_31 = *(int *)pQVar12 != 0;
            UNLOCK();
            pQVar12 = local_50;
            if ((bool)local_31) goto LAB_10044ceb6;
          }
          QArrayData::deallocate(pQVar12,1,8);
        }
LAB_10044ceb6:
        p_Var5 = local_c8;
        if (*(int *)(local_c8 + 0x14) != 0) {
          uVar7 = FUN_10044eec0(param_1 + 0x48,&local_90);
          FUN_100450320(uVar7,&local_c8);
        }
        local_d0 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
        FUN_10044e9c0(&local_40,uVar8,puVar3,"VmState");
        lVar9 = *(long *)(local_40 + 0x10);
        iVar11 = 0;
        pQVar12 = local_40;
        if ((int)(char)local_40[lVar9] < *(int *)(local_40 + 4) * 8) {
          do {
            if (((byte)pQVar12[((iVar11 >> 3) + 1) + lVar9] >> ((byte)iVar11 & 7) & 1) != 0) {
              local_44 = iVar11;
              FUN_10044f800(&local_d0,&local_44,local_38);
              lVar9 = *(long *)(local_40 + 0x10);
              pQVar12 = local_40;
            }
            iVar11 = iVar11 + 1;
          } while (iVar11 < *(int *)(pQVar12 + 4) * 8 - (int)(char)pQVar12[lVar9]);
        }
        if (*(int *)pQVar12 != -1) {
          if (*(int *)pQVar12 != 0) {
            LOCK();
            *(int *)pQVar12 = *(int *)pQVar12 + -1;
            local_31 = *(int *)pQVar12 != 0;
            UNLOCK();
            pQVar12 = local_40;
            if ((bool)local_31) goto LAB_10044cfa7;
          }
          QArrayData::deallocate(pQVar12,1,8);
        }
LAB_10044cfa7:
        p_Var4 = local_d0;
        if (*(int *)(local_d0 + 0x14) != 0) {
          uVar8 = FUN_10044ec60(param_1 + 0x50,&local_90);
          FUN_1004503f0(uVar8,&local_d0);
        }
        if (*(int *)(p_Var4 + 0x10) != -1) {
          if (*(int *)(p_Var4 + 0x10) != 0) {
            LOCK();
            pcVar1 = p_Var4 + 0x10;
            *(int *)pcVar1 = *(int *)pcVar1 + -1;
            local_31 = *(int *)pcVar1 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10044cffc;
          }
          QHashData::free_helper(p_Var4);
        }
LAB_10044cffc:
        if (*(int *)(p_Var5 + 0x10) != -1) {
          if (*(int *)(p_Var5 + 0x10) != 0) {
            LOCK();
            pcVar1 = p_Var5 + 0x10;
            *(int *)pcVar1 = *(int *)pcVar1 + -1;
            local_31 = *(int *)pcVar1 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10044d030;
          }
          QHashData::free_helper(p_Var5);
        }
      }
LAB_10044d030:
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10044d066;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_10044d066:
      local_70 = local_70 + 8;
      local_60 = 1;
    } while (local_70 != local_68);
  }
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      UNLOCK();
      if (*(int *)local_78 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_78);
  }
  return;
}

