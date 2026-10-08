
int FUN_100b71bb0(undefined8 param_1,undefined4 param_2,undefined8 param_3,int param_4,
                 undefined1 param_5)

{
  QMapNodeBase *pQVar1;
  undefined8 ******ppppppuVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined8 ******ppppppuVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  QArrayData *local_70;
  QArrayData *local_68;
  QString local_60;
  QMapNodeBase *local_58;
  QMapNodeBase *local_50;
  undefined8 ******local_48;
  undefined8 ******local_40;
  undefined1 local_31;
  
  puVar11 = PTR_shared_null_1021e12f0;
  local_50 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
  local_48 = &local_48;
  local_40 = &local_48;
  iVar5 = FUN_100b9b560(&local_48);
  ppppppuVar2 = local_48;
  if ((iVar5 != -7) && (iVar5 != 0)) goto LAB_100b71ea4;
  if ((undefined8 *******)local_48 == &local_48) {
    if (2 < DAT_10230ffd0) {
      uVar8 = FUN_100ba1750(param_2);
      FUN_100df99c0("","License",3,"No licenses of class %s found.",uVar8);
    }
    goto LAB_100b71ea4;
  }
  FUN_100b91b20(local_48);
  local_58 = (QMapNodeBase *)puVar11;
  iVar5 = FUN_100b91c30(ppppppuVar2,&local_50,&local_58);
  if (iVar5 == 0) {
    if ((((int)param_3 == 1) && (param_4 == 0)) &&
       (ppppppuVar7 = (undefined8 ******)FUN_100b97ee0(), ppppppuVar7 < ppppppuVar2[0x29])) {
      iVar5 = 0;
      if (2 < DAT_10230ffd0) {
        iVar5 = 0;
        FUN_100df99c0("","License",3,"This license does not require update.");
      }
    }
    else {
      if (2 < DAT_10230ffd0) {
        uVar6 = (int)param_3 - 1;
        if (uVar6 < 3) {
          puVar11 = (&PTR_s_update_10223f8d0)[(int)uVar6];
        }
        else {
          puVar11 = (undefined *)0x0;
          FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]",
                        "!\"Invalid InstalledLicOperation\"","VzLicense.cpp",0x7cd,
                        "convertToCString");
        }
        FUN_100df99c0("","License",3,"Start %s for license %s ...",puVar11,ppppppuVar2 + 4);
      }
      local_60.field0_0x0 =
           (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("keyserver_host",0xe);
      if (*(long *)(local_50 + 0x10) == 0) {
LAB_100b71df9:
        iVar5 = FUN_100b73b20(param_1,(long)ppppppuVar2 + 0x184,0,0,param_3,0,param_5);
      }
      else {
        lVar3 = *(long *)(local_50 + 0x10);
        lVar10 = 0;
        do {
          while (lVar9 = lVar3, cVar4 = operator<((QString *)(lVar9 + 0x18),&local_60),
                cVar4 == '\0') {
            lVar3 = *(long *)(lVar9 + 8);
            lVar10 = lVar9;
            if (*(long *)(lVar9 + 8) == 0) goto LAB_100b71de1;
          }
          lVar3 = *(long *)(lVar9 + 0x10);
        } while (*(long *)(lVar9 + 0x10) != 0);
        lVar9 = lVar10;
        if (lVar10 == 0) goto LAB_100b71df9;
LAB_100b71de1:
        cVar4 = operator<(&local_60,(QString *)(lVar9 + 0x18));
        if (cVar4 != '\0') goto LAB_100b71df9;
        local_70 = (QArrayData *)QString::fromAscii_helper("keyserver_host",0xe);
        FUN_1006f3180(&local_50,&local_70);
        QString::toLatin1();
        if ((1 < *(uint *)local_68) || (*(long *)(local_68 + 0x10) != 0x18)) {
          QByteArray::reallocData
                    (&local_68,*(uint *)(local_68 + 4) + 1,*(uint *)(local_68 + 8) >> 0x1f);
        }
        iVar5 = FUN_100b73b20(param_1,(long)ppppppuVar2 + 0x184,0,
                              local_68 + *(long *)(local_68 + 0x10),param_3,0,param_5);
        if (*(int *)local_68 != -1) {
          if (*(int *)local_68 != 0) {
            LOCK();
            *(int *)local_68 = *(int *)local_68 + -1;
            local_31 = *(int *)local_68 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100b71fb3;
          }
          QArrayData::deallocate(local_68,1,8);
        }
LAB_100b71fb3:
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_31 = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100b71e23;
          }
          QArrayData::deallocate(local_70,2,8);
        }
      }
LAB_100b71e23:
      if (*(int *)local_60.field0_0x0 != -1) {
        if (*(int *)local_60.field0_0x0 != 0) {
          LOCK();
          *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
          local_31 = *(int *)local_60.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b71e53;
        }
        QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
      }
    }
  }
LAB_100b71e53:
  pQVar1 = local_58;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b71e9b;
    }
    if (*(long *)(local_58 + 0x10) != 0) {
      FUN_10012a490();
      QMapDataBase::freeTree(pQVar1,(int)*(undefined8 *)(pQVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar1);
  }
LAB_100b71e9b:
  FUN_100b98100(&local_48);
LAB_100b71ea4:
  pQVar1 = local_50;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return iVar5;
      }
      local_31 = 0;
    }
    if (*(long *)(local_50 + 0x10) != 0) {
      FUN_10012a490();
      QMapDataBase::freeTree(pQVar1,(int)*(undefined8 *)(pQVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar1);
  }
  return iVar5;
}

